#!/bin/bash

push_swap="./push_swap"

function run_test {
  input="$1"
  echo "Input: $input"
  result=$($push_swap $input)
  echo "Operations:"
  echo "$result"
  echo "-----------------------"
}

echo "===== Crazy Sorting Tests ====="

run_test "2 2 3 1 4"
run_test "2147483647 -2147483648 0 1 -1"
run_test "1"
run_test ""
run_test "2 1 4 3 5"
run_test "3 2 1 5 4"
run_test "3 1 4 5 2"
run_test "5 1 2 3 4"
run_test "1 2 3 4 5"
run_test "1 2 three 4"
run_test "   "
