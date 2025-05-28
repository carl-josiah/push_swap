#!/bin/bash

# Test cases for 2 to 5 elements
declare -a tests_2=(
  "2 1"
  "1 2"
)

declare -a tests_3=(
  "3 2 1"
  "2 3 1"
  "1 3 2"
  "1 2 3"
)

declare -a tests_4=(
  "4 3 2 1"
  "1 4 3 2"
  "2 3 4 1"
  "1 2 3 4"
)

declare -a tests_5=(
  "5 4 3 2 1"
  "2 5 3 1 4"
  "1 2 3 4 5"
  "3 5 1 4 2"
)

run_test() {
  input="$1"
  echo "Input: $input"
  ./push_swap $input
  if [ $? -eq 0 ]; then
    echo "Result: OK"
  else
    echo "Result: KO"
  fi
  echo "-----------------------"
}

echo "===== Testing sort_2 ====="
for test in "${tests_2[@]}"; do
  run_test "$test"
done

echo "===== Testing sort_3 ====="
for test in "${tests_3[@]}"; do
  run_test "$test"
done

echo "===== Testing sort_4 ====="
for test in "${tests_4[@]}"; do
  run_test "$test"
done

echo "===== Testing sort_5 ====="
for test in "${tests_5[@]}"; do
  run_test "$test"
done
