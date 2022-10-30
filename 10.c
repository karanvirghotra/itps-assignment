/*Write a program to find maximum of three numbers w  ithout using if statement*/
#include<stdio.h>
int main()
{
	
    int a,b,c,max;
	printf("Enter 3 numbers:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
	max=(a>b?a:b)>c?(a>b?a:b):c;
	printf("The largest number among three numbers is: %d",max);
	return 0;
}