/*If the marks obtained by a student in five different subjects are input 
through the keyboard, find out the aggregate marks and percentage marks 
obtained by the student. Assume that the maximum marks that can be obtained 
by a student in each subject is 100.
*/
#include<stdio.h>
int main()
{
    int hindi, math, english, science, punjabi, total;
    float percentage;
    printf("Enter the marks of Hindi: ");
    scanf("%d", &hindi);

    printf("Enter the marks of Math: ");
    scanf("%d", &math);

    printf("Enter the marks of English: ");
    scanf("%d", &english);

    printf("Enter the marks of Science: ");
    scanf("%d", &science);

    printf("Enter the marks of Punjabi: ");
    scanf("%d", &punjabi);

    total = hindi+math+english+science+punjabi;

    percentage = total/5;

    printf("Aggregate marks: %d", total);
    printf("\nPercentage marks: %0.2f", percentage);
    return 0;
}