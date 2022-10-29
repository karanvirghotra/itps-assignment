/*
Develop a C program to input one integer value (a), one float value (b), one character value (c), and one string (str) from the user. Name these variables as a, b, c, and str respectively. Print these values separating by them using next line character.
*/
#include <stdio.h>
#include <string.h>

int main()
{
  int a;
  float b;
  char c;
  char str[20];
 
  
  
  printf("Enter an Integer Value : ");
  scanf("%d", &a);
  
  printf(" Enter Float Value : ");
  scanf("%f", &b); 

  printf(" Enter a Character : ");
  scanf("%c", &c);

  printf(" Enter string Value : ");
  scanf("%s", &str); 


  
  printf(" \n The Integer Value that you Entered is :  %d", a);
  printf(" \n The Character that you Entered is :  %c", c);
  printf(" \n The Float that you Entered is :  %f", b);
  printf(" \n The String value is :  %s", str);

  return 0;
}