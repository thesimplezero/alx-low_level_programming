#!/bin/bash

# Test file for the calc program

# Colors
GREEN='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m' # No Color

# Test addition
echo "Testing addition"
output=$(./calc 1 + 1)
expected="2"
if [ "$output" == "$expected" ]; then
    echo -e "${GREEN}Pass${NC}"
else
    echo -e "${RED}Fail${NC}"
    echo "Output: $output"
    echo "Expected: $expected"
fi

echo "Testing addition"
output=$(./calc 97 + 1)
expected="98"
if [ "$output" == "$expected" ]; then
    echo -e "${GREEN}Pass${NC}"
else
    echo -e "${RED}Fail${NC}"
    echo "Output: $output"
    echo "Expected: $expected"
fi

# Test subtraction
echo "Testing subtraction"
output=$(./calc 1024 - 98)
expected="926"
if [ "$output" == "$expected" ]; then
    echo -e "${GREEN}Pass${NC}"
else
    echo -e "${RED}Fail${NC}"
    echo "Output: $output"
    echo "Expected: $expected"
fi

# Test multiplication
echo "Testing multiplication"
output=$(./calc 1024 '*' 98)
expected="100352"
if [ "$output" == "$expected" ]; then
    echo -e "${GREEN}Pass${NC}"
else
    echo -e "${RED}Fail${NC}"
    echo "Output: $output"
    echo "Expected: $expected"
fi

echo "Testing multiplication"
output=$(./calc 1024 '\*' 98)
expected="Error"
if [ "$output" == "$expected" ]; then
    echo -e "${GREEN}Pass${NC}"
else
    echo -e "${RED}Fail${NC}"
    echo "Output: $output"
    echo "Expected: $expected"
fi

# Test division
echo "Testing division"
output=$(./calc 10 / 5)
expected="2"
if [ "$output" == "$expected" ]; then
    echo -e "${GREEN}Pass${NC}"
else
    echo -e "${RED}Fail${NC}"
    echo "Output: $output"
    echo "Expected: $expected"
fi

# Test modulo
echo "Testing modulo"
output=$(./calc 1024 '%' 98)
expected="44"
if [ "$output" == "$expected" ]; then
    echo -e "${GREEN}Pass${NC}"
else
    echo -e "${RED}Fail${NC}"
    echo "Output: $output"
    echo "Expected: $expected"
fi

# Test division by zero
echo "Testing division by zero"
output=$(./calc 5 / 0)
expected="Error"
if [ "$output" == "$expected" ]; then
    echo -e "${GREEN}Pass${NC}"
else
    echo -e "${RED}Fail${NC}"
    echo "Output: $output"
    echo "Expected: $expected"
fi

# Test invalid operator
echo "Testing invalid operator"
output=$(./calc 5 x 3)
expected="Error"
if [ "$output" == "$expected" ]; then
    echo -e "${GREEN}Pass${NC}"
else
    echo -e "${RED}Fail${NC}"
    echo "Output: $output"
    echo "Expected: $expected"
fi
