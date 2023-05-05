#!/bin/bash

crackme3="crackme3"

# Check if gdb is installed
if ! command -v gdb &> /dev/null; then
  echo "GDB is not installed. Please install GDB and try again."
  exit 1
fi

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

# Use gdb to automate analysis
echo ""
echo "Automated GDB analysis:"
gdb -q -ex "set disassembly-flavor intel" -ex "break main" -ex "run" -ex "info registers" -ex "disassemble" -ex "quit" "$crackme3"
