/*
The distance between two cities (in km.) is input through the keyboard. 
Write a program to convert and print this distance in meters,
feet, inches and centimetres
*/
#include<stdio.h>
int main()
{
	int dist,a,b,c;

	printf("Enter The distance between two cities (in km.): ");

	scanf("%d",&dist);

	a=dist*1000;
	b=dist*3280;
	c=dist*39370;
    printf("Distance = %d m\n",a);
	printf("Distance = %d feet\n",b);
	printf("Distance = %d inch\n",c);
	
	return 0;
}