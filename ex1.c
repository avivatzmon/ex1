/******************
Name: Aviv Atzmon
ID: 323012799
Assignment: 1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  // What bit
  int num1,num2, pos1 , bit;

  printf("What bit:\n");
  printf("Please enter a number:\n"); // takes a number and a position from the user
  scanf("%d", &num1);
  printf("Please enter a position:\n");
  scanf("%d", &pos1);
  bit = (num1 >> pos1) % 2; // doing right shift to get to the wanted bit and if the bit is 1 there's a remainder and if its 0 there isn't any
  printf("The bit in position %d of number %d is: %d\n", pos1,num1,bit);

  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  
  // Set bit
  printf("\nSet bit:\n");
  printf("Please enter a number:\n"); // takes a number and a position from the user
  scanf("%d", &num1);
  printf("Please enter a position:\n");
  scanf("%d", &pos1);
  printf("Number with bit %d set to 1: %d\n",pos1, num1 | 1 << pos1); // I make a number with a toggled bit on the wanted position then it does or with the original number
  printf("Number with bit %d set to 0: %d\n",pos1 ,num1 & ~ (1 << pos1));// I make a number with a toggled bit on the wanted position then i switch this number with NOT and i do AND with the original number


  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */

  // Toggle bit
  printf("\nToggle bit:\n");
  printf("Please enter a number:\n"); // takes a number and a position from the user
  scanf("%d", &num1);
  printf("Please enter a position:\n");
  scanf("%d", &pos1);
  printf("Number with bit %d toggled: %d\n",pos1 , num1 ^ 1<<pos1); // doing XOR to the orignal number with the wanted bit
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  
  // Even - Odd
  printf("\nEven - Odd:\n");
  printf("Please enter a number:\n"); // takes a number from the user
  scanf("%d", &num1);
  bit = ! (num1 % 2); // checks if the number is even and then switches the outcome even - 1 not even - 0
  printf("%d\n",bit);
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  printf("Please enter the first number (octal):\n"); // takes a number and a position from the user
  scanf("%o", &num1);
  printf("Please enter the second number (octal):\n");
  scanf("%o", &num2);
  int hexaSum = num1+num2; //sums up the numbers
  printf("The sum in hexadecimal: %X\n",hexaSum); // prints the sum in Hex Base with Big letters
  num1 = ((hexaSum& (1 << 3)) >> 3)*1000 +((hexaSum& (1 << 5)) >> 5 )*100 + ((hexaSum & (1 << 7)) >> 7 )*10  +((hexaSum & (1 << 11)) >> 11 )*1 ; // goes to every postion and takes the wanted
  printf("The 3,5,7,11 bits are: %04d\n",num1);                                                                                                  // bit and then multiply it according to the position

  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */

  printf("Bye!\n");
  
  return 0;
}
