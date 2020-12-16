#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch, cha;
    int day, month, year;
    scanf("%2d%c%2d%c%4d", &month, &ch, &day, &ch, &year);
    printf("%04d-%02d-%02d",  year, month, day);
    return 0;
}
