/*Write a program to read a character in upper case and print it in lower 
case.*/

#include <stdio.h>   
int main ()  
{  
    char upr;   
    int wrd;  


    printf (" Enter the Upper Case Character: ");  
    scanf (" %c", &upr);  
    wrd = upr + 32;  
    printf (" %c character in Lower case is: %c", upr, wrd);  

    return 0;  
}  
