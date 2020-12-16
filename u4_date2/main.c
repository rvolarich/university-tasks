/*Robert Volaric*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int year = 0; // initialize variables
    int month = 0;
    int last_digit = 0;
    int places = 0;
    char ch = 'c';
    int str_to_int = 0;
    char day [3];
    char st[3] = {'s', 't', '\0'};
    char nd[3] = {'n', 'd', '\0'};
    char rd[3] = {'r', 'd', '\0'};
    char th[3] = {'t', 'h', '\0'};
    char suffix [3];


    scanf("%4d%c%2d%c%2s", &year, &ch, &month, &ch, &day); // set input capture with float placeholder

    if(day[0] == '0'){      // variable used to set width and precision in placeholder
        places = 1;
        day[0] = day[1];
    }
    else{
        places = 2;
    }


    str_to_int = ((day[0] - 48)*10)+(day[1] - 48); // convert char array to integer

    last_digit = str_to_int % 10; // find last digit


    if(str_to_int > 10 && str_to_int < 21 && last_digit != 1){
        for(int i = 0; i < 3; i++){
           suffix[i] = th[i];
        }
    }
    else if(last_digit == 1){
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
        case 1: month = printf("%*.*s%s of January, %04d",  places, places, day, suffix, year );
            break;
        case 2: month = printf("%*.*s%s of February, %04d",  places, places, day, suffix, year );
            break;
        case 3: month = printf("%*.*s%s of March, %04d",  places, places, day, suffix, year );
            break;
        case 4: month = printf("%*.*s%s of April, %04d",  places, places, day, suffix, year );
            break;
        case 5: month = printf("%*.*s%s of May, %04d",  places, places, day, suffix, year );
            break;
        case 6: month = printf("%*.*s%s of June, %04d",  places, places, day, suffix, year);
            break;
        case 7: month = printf("%*.*s%s of July, %04d",  places, places, day, suffix, year );
            break;
        case 8: month = printf("%*.*s%s of August, %04d",  places, places, day, suffix, year);
            break;
        case 9: month = printf("%*.*s%s of September, %04d",  places, places, day, suffix, year );
            break;
        case 10: month = printf("%*.*s%s of October, %04d",  places, places, day, suffix, year);
            break;
        case 11: month = printf("%*.*s%s of November, %04d",  places, places, day, suffix, year );
            break;
        case 12: month = printf("%*.*s%s of December, %04d",  places, places, day, suffix, year );
            break;

    }

    return 0;
}

