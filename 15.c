/*Take a float input from the user and type cast it to int and print it on the screen.
*/
#include <stdio.h>
int main()
{
    // Declaring Variables
    float x;
    scanf("%f",&x);
    int a;

    printf("Value Of x:%f \n ",x);
    

    // Simple Conversion

    a = (int)(x);
    
    printf("Value Of a:%d",a);
    return 0;
}
