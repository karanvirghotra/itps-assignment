/*If the three sides of a triangle are entered through the keyboard, write a 
program to check whether the triangle is valid or not. The triangle is valid 
if the sum of two sides is greater than the largest of the three sides.
*/
#include<stdio.h>
int main()
{
	
    int a,b,c,max;
	printf("Enter 3 sides of triangle:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if((a+b>c) && (b+c>a) &&(a+c>b))
    {
        printf("Triangle is valid");
    }
    else
    printf("!! Not able to form Triangle !!");

    return 0;
}
