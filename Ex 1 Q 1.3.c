#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter the rupees that Kumar has: ");
    scanf("%d", &x);
    printf("Enter the rupees that Sheela has: ");
    scanf("%d", &y);
    z = x;
    x = y;
    y = z;
    printf("Kumar has Rs. %d\n", x);
    printf("Sheela has Rs. %d\n", y);
    return 0;
}
