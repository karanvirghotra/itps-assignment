/*If a five-digit number is input through the keyboard, write a program to print a new number by adding one to each of its digits. For example, if the number that is input is 12391 then the output should be displayed as 23402.
*/
#include<stdio.h>  
 int main()    
{    
int n,n1,n2,n3,n4,n5,r,number,i,r1,r2,r3,r4,r5;    
printf("enter the number=");    
scanf("%d",&n);    


    if(n>=10000 && n<=99999)
    {
    r1=(n%10)+1;
	r2=((n/10)%10)+1;
	r3=((n/100)%10)+1;
	r4=((n/1000)%10)+1;
	r5=((n/10000)%10)+1;
    number=(10000*r5)+(1000*r4)+(100*r3)+(10*r2)+r1; 
    printf("Your NEW nuber is: %d",number);
    }
    else{
        printf("Invalid input!!");
        printf("Value of n is not  5 digit number");

    }

return 0;
}
