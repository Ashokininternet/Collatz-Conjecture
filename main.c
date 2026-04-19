#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        switch (num % 2)
        {
        case 0:
            printf("%d / 2 = %d \n", num, num / 2);
            num = num / 2;
            Sleep(2000);
            break;

        default:
            printf("%d * 3 + 1 = %d \n", num, (num * 3) + 1);
            num = (num * 3) + 1;
            Sleep(2000);
            break;
        }
    }
    return 0;
}