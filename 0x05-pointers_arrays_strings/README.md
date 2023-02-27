#0x05-pointers_arrays_strings

#11. Don't hate the hacker, hate the code

🛠️
This code generates a random password with a length of 84 characters. The password is generated using the ASCII characters from 33 to 126. The sum of the ASCII values of the characters is checked to ensure that the sum is equal to 2772, which is the required sum of ASCII values of characters for the password to be valid.

If the sum is not equal to 2772, the code calculates the difference between the required sum and the actual sum, and divides this difference into two halves. It then subtracts one half of the difference from the ASCII value of a character in the password until the sum of the ASCII values is equal to 2772. The other half of the difference is subtracted from another character in the password until the sum of the ASCII values is equal to 2772.
💻
Finally, the generated password is printed to the console. The code uses the time function from the time.h library to seed the random number generator with a different value each time the program is run. The program uses the stdlib.h and stdio.h libraries for random number generation and console output respectively.