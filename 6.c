/*Write a program to print the size of basic data types such as int, char, 
float and double.*/
#include<stdio.h>
int main()
{
	int a;
	char b;
	float c;
	double d;

	printf("\nsize of int: %d bytes",sizeof(a));
	printf("\nsize of char: %d bytes",sizeof(b));
	printf("\nsize of float: %d bytes",sizeof(c));
	printf("\nsize of double: %d bytes",sizeof(d));
    
	return 0;
}