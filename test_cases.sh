#!/bin/bash

TESTS=(
  # Valid simple positive and negative numbers with spaces
  "123 456"
  "-123 456"
  "+42 -24"
  "   +42   -24   "
  "0"
  "-0"
  "+0"
  "2147483647 -2147483648" # INT_MAX and INT_MIN
  
  # Invalid sign usage
  "+ 42"          # plus separated from digits
  "--42"          # double minus
  "++1"           # double plus
  "-+1"           # mixed signs
  "+"             # plus only
  "-"             # minus only
  "42-42"         # numbers glued with minus
  "-42+42"        # numbers glued with plus and minus
  "1a2"           # letters inside numbers
  "123a456"       # letters in the middle
  "1 a 2"         # invalid separate letter

  # Empty or whitespace only
  ""
  "    "
  $'\t\n\r'

  # Overflow / Underflow cases
  "2147483648"    # INT_MAX + 1 invalid
  "-2147483649"   # INT_MIN - 1 invalid
  "0001 0002 0003" # leading zeros, should be valid

  # Mixed valid and invalid tokens
  "1 2 3 3 4"     # duplicated number '3'
  "1" "" "2"      # empty string argument in the middle
  "123" "456-"
  "123" "-"
  "-123" "+456"
  
  # Signs combined with spaces and multiple arguments
  "+1" "-2" "+3" "-4" "+5"
  "-123" "+456" "78"
  
  # Large batch with valid integers separated in multiple arguments
  "1" "2" "3" "4" "5"
  
  # Edge case: duplicated zeroes with different signs
  "0" "-0" "+0"

  # Misc tricky inputs
  "+-"
  "--"
  "-42 +42"
)

for test in "${TESTS[@]}"; do
  echo "Running: ./push_swap $test"
  ./push_swap $test
  echo "-------------------------"
done