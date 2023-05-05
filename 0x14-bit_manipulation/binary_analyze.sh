#!/bin/bash

crackme3="crackme3"

# Determine the file structure
echo "File structure:"
file "$crackme3"
echo ""

# Analyze the binary and find strings
echo "Strings found in the binary:"
strings "$crackme3"
echo ""

# Disassemble the binary to analyze its content
echo "Disassembly of the binary:"
objdump -d -M intel "$crackme3"
