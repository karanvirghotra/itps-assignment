/*Write a program to find largest of three numbers using ternary operators.*/
#include<stdio.h>
int main()
{
	
    int a,b,c,max;
	printf("Enter 3 numbers:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
	max=(a>b && a>c ? a:b>a  &&  b>c ? b:c>a && c>b ? c:b);
	printf("The largest number among three numbers is: %d",max);
	return 0;
}
