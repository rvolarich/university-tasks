/*Robert Volaric*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int year = 0; // initialize variables
    int month = 0;
    int day = 0;
    int last_digit = 0;
    char ch = 'c';
    char st[3] = {'s', 't', '\0'};
    char nd[3] = {'n', 'd', '\0'};
    char rd[3] = {'r', 'd', '\0'};
    char th[3] = {'t', 'h', '\0'};
    char suffix [3];


    scanf("%4d%c%2d%c%2d", &year, &ch, &month, &ch, &day); // set input capture with float placeholder

    last_digit = day % 10;

    if(last_digit == 1){
        for(int i = 0; i < 3; i++){
           suffix[i] = st[i];
        }
    }
    else if(last_digit == 2){
      for(int i = 0; i < 3; i++){
           suffix[i] = nd[i];
        }
    }
    else if(last_digit == 3){
      for(int i = 0; i < 3; i++){
           suffix[i] = rd[i];
        }
    }
    else{
        for(int i = 0; i < 3; i++){
           suffix[i] = th[i];
        }
    }

    switch(month){
        case 1: month = printf("%02d%s of January, %04d",  day, suffix, year );
            break;
        case 2: month = printf("%02d%s of February, %04d",  day, suffix, year );
            break;
        case 3: month = printf("%02d%s of March, %04d",  day, suffix, year );
            break;
        case 4: month = printf("%02d%s of April, %04d",  day, suffix, year );
            break;
        case 5: month = printf("%02d%s of May, %04d",  day, suffix, year );
            break;
        case 6: month = printf("%02d%s of June, %04d",  day, suffix, year );
            break;
        case 7: month = printf("%02d%s of July, %04d",  day, suffix, year );
            break;
        case 8: month = printf("%02d%s of August, %04d",  day, suffix, year );
            break;
        case 9: month = printf("%02d%s of September, %04d",  day, suffix, year );
            break;
        case 10: month = printf("%02d%s of October, %04d",  day, suffix, year );
            break;
        case 11: month = printf("%02d%s of November, %04d",  day, suffix, year );
            break;
        case 12: month = printf("%02d%s of December, %04d",  day, suffix, year );
            break;

    }

    //printf("This is suffix: %s", suffix);
    //printf("%02d%s of January, %04d",  day, suffix, year ); // print calculated values

    return 0;
}
