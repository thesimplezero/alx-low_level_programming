#!/bin/bash

# Create a list of function names
funcs=(
    "_putchar"
    "_islower"
    "_isalpha"
    "_abs"
    "_isupper"
    "_isdigit"
    "_strlen"
    "_puts"
    "_strcpy"
    "_atoi"
    "_strcat"
    "_strncat"
    "_strncpy"
    "_strcmp"
    "_memset"
    "_memcpy"
    "_strchr"
    "_strspn"
    "_strpbrk"
    "_strstr"
)

# Loop through the list of function names
for func in "${funcs[@]}"
do
    # Determine the file name based on the function name
    case "$func" in
        "_putchar") filename="0-putchar.c" ;;
        "_islower") filename="3-islower.c" ;;
        "_isalpha") filename="4-isalpha.c" ;;
        "_abs") filename="6-abs.c" ;;
        "_isupper") filename="0-isupper.c" ;;
        "_isdigit") filename="1-isdigit.c" ;;
        "_strlen") filename="2-strlen.c" ;;
        "_puts") filename="3-puts.c" ;;
        "_strcpy") filename="9-strcpy.c" ;;
        "_atoi") filename="100-atoi.c" ;;
        "_strcat") filename="0-strcat.c" ;;
        "_strncat") filename="1-strncat.c" ;;
        "_strncpy") filename="2-strncpy.c" ;;
        "_strcmp") filename="3-strcmp.c" ;;
        "_memset") filename="0-memset.c" ;;
        "_memcpy") filename="1-memcpy.c" ;;
        "_strchr") filename="2-strchr.c" ;;
        "_strspn") filename="3-strspn.c" ;;
        "_strpbrk") filename="4-strpbrk.c" ;;
        "_strstr") filename="5-strstr.c" ;;
        *) echo "Unknown function: $func" ;;
    esac
    
    # Create the file with the given function
    cat > "$filename" << EOL
/**
 * $func - Description
 * @c: Parameter description
 *
 * Return: Return description
 */
int $func(char c)
{
    /* Code */
}
EOL

    # Run betty on the file to check for compliance
    betty "$filename"
done
