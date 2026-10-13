#include <stdio.h>
int main()
{
    int age;
    float height, percentage;
    char grade;

    printf("Enter student's age: ");
    scanf("%d", &age);

    printf("Enter student's height: ");
    scanf("%f", &height);

    printf("Enter student's percentage: ");
    scanf("%f", &percentage);

    printf("Enter student's grade: ");
    scanf(" %s", &grade);
  
    return 0;
}
