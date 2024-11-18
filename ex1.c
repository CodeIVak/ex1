/******************
Name:Idan Vaknin
ID:207420399
Assignment:EX1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
    int number, position, bit;

    // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  printf("Please enter a number:\n");
  scanf("%d", &number);
  printf("Please enter a position:\n");
  scanf("%d", &position);
  bit = (number >> position) & 1; // Extract bit at the given position
  printf("The bit in position %d of number %d is: %d\n", position, number, bit);



    // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  printf("Please enter a number:\n");
  scanf("%d", &number);
  printf("Please enter a position:\n");
  scanf("%d", &position);
  int set_bit = number | (1 << position); // Set the bit to 1
  int unset_bit = number & ~(1 << position); //Set the bit to 0
  printf("Number with bit %d set to 1: %d\n", position, set_bit);
  printf("Number with bit %d set to 0: %d\n", position, unset_bit);

    // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  printf("Please enter a number:\n");
  scanf("%d", &number);
  printf("Please enter a position:\n");
  scanf("%d", &position);
  int toggled = number ^ (1 << position); // Toggle the bit
  printf("Number with bit %d toggled: %d\n", position, toggled);
  
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  printf("Please enter a number:\n");
  scanf("%d", &number);
  int even = ((number & 1) ^ 1); // Check the least significant bit
  printf("%d\n", even);
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  int num1, num2, sum;
  printf("Please enter the first number (octal):\n");
  scanf("%o", &num1); // Octal input
  printf("Please enter the second number (octal):\n");
  scanf("%o", &num2); // Octal input
  sum = num1 + num2;
  printf("The sum in hexadecimal: %X\n", sum); // Hexadecimal output
  int bit3 = (sum >> 3) & 1;
  int bit5 = (sum >> 5) & 1;
  int bit7 = (sum >> 7) & 1;
  int bit11 = (sum >> 11) & 1;
  printf("The 3,5,7,11 bits are: %d%d%d%d\n", bit3, bit5, bit7, bit11);


  printf("Bye!\n");
  
  return 0;
}
