#!/bin/bash

# Compile the program
gcc -std=gnu89 100-main_opcodes.c -o main

# Test with correct input
echo -n "Testing with 12 bytes... "
EXPECTED=$(xxd -p -c 1 main | head -n $((12*2)) | tr '\n' ' ')
RESULT=$(./main 12 | tr '\n' ' ')
if [[ "$EXPECTED" == "$RESULT" ]]; then
    echo -e "\033[0;32mPASSED\033[0m"
else
    echo -e "\033[0;31mFAILED\033[0m"
    echo "Expected: $EXPECTED"
    echo "Result: $RESULT"
fi

# Test with negative input
echo -n "Testing with negative bytes... "
EXPECTED="Error"
RESULT=$(./main -1)
if [[ "$EXPECTED" == "$RESULT" ]]; then
    echo -e "\033[0;32mPASSED\033[0m"
else
    echo -e "\033[0;31mFAILED\033[0m"
    echo "Expected: $EXPECTED"
    echo "Result: $RESULT"
fi

# Test with no input
echo -n "Testing with no bytes... "
EXPECTED="Error"
RESULT=$(./main)
if [[ "$EXPECTED" == "$RESULT" ]]; then
    echo -e "\033[0;32mPASSED\033[0m"
else
    echo -e "\033[0;31mFAILED\033[0m"
    echo "Expected: $EXPECTED"
    echo "Result: $RESULT"
fi

# Clean up
rm main
