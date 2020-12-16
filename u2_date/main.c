#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch = 'c'; // initialize variables
    int day = 0;
    int month = 0;
    int year = 0;
    scanf("%2d%c%2d%c%4d", &month, &ch, &day, &ch, &year); // set input capture according to format
    printf("%04d-%02d-%02d",  year, month, day);           // print date in new format
    return 0;
}

