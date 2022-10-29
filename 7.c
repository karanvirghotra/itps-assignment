/*Two numbers are input through the keyboard into two locations C and D. 
Write a program to interchange the contents of C and D.*/
#include<stdio.h>
int main()
{
    int C,D,temp;

    printf("Enter the value of C\n"); 
    scanf("%d",&C);
    printf("Enter the value of D\n");
    scanf("%d",&D);

    temp=C;
    C=D;
    D=temp;
    
    printf("New value of C is: %d\n",C);
    printf("New value of D is: %d,",D);


}