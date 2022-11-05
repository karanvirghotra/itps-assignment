#include <stdio.h>
int main()
{
    int a,sum,i;
    printf("Enter the number");
    scanf("%d",&a);
    sum=0;
    for(i=0;i<a;i++)
    {
        sum+=i;
        
    }
    printf("%d is the sum of n numbers is",sum);
}
