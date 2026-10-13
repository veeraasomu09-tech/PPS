#include <stdio.h>
Void main()
{
    int pay, n, ta, da, daily_wages;
    printf("Enter the pay per day: \n");
    scanf("%d", &pay);
    printf("Enter the number of working hours: \n");
    scanf("%d", &n);
    printf("Enter the travel allowance: \n");
    scanf("%d", &ta);
    printf("Enter the dearness allowance: \n");
    scanf("%d", &da);
    daily_wage = ((pay * hours) + ta + da);
    printf("The daily wage of the labourer is %d\n", daily_wage);
}
