/*Robert Volaric*/

#include <stdio.h>
#include <stdlib.h>

int numberOfDays(int yearNum);                  // declare functions
int choosenYearDayCount(int month, int dayNum);
int isLeapYear(int leapYear);

int year = 0; // initialize variables
int month = 0;
int day = 0;
int lastYearDayCount = 0;
int lastYearLastMonth = 0;
char ch = 'c';
int yearCounter = 1584;
int daysTillYear = 0;
int main()
{
    scanf("%4d%c%2d%c%2d", &year, &ch, &month, &ch, &day); // set input capture with float placeholder
    int totalDays = choosenYearDayCount(month, day) + numberOfDays(year);
    int finalDay = totalDays % 7;
    switch(finalDay){
        case 0: printf("Saturday");
            break;
        case 1: printf("Sunday");
            break;
        case 2: printf("Monday");
            break;
        case 3: printf("Tuesday");
            break;
        case 4: printf("Wednesday");
            break;
        case 5: printf("Thursday");
            break;
        case 6: printf("Friday");
            break;
    }
    return 0;
}

int numberOfDays(int yearNum){      // count number of days until choosen year
    int loop = yearNum - 1584;
    if(yearNum - 1584 == 0){

        return 0;
    }
    else{

        for(int i = 0; i < loop; i++){
            if(isLeapYear(yearCounter)){
                daysTillYear += 366;
                yearCounter++;

        }else{

            daysTillYear += 365;
            yearCounter++;
        }
        }

    }
    return daysTillYear;
}

int choosenYearDayCount(int month, int dayNum){  // count number of days in the last year

    int toggleMonth = 0;
    for(int i = 0; i < (month - 1); i++){
        if(toggleMonth == 0){
            if(i == 6){}
            else{
            toggleMonth ^= 1;
            }
            lastYearDayCount += 31;
        }
        else{
            toggleMonth ^= 1;
            if(i == 1){
                if(isLeapYear(year) == 1){
                    lastYearDayCount += 29;
                }else{
                    lastYearDayCount += 28;
                }
            }
            else{
               lastYearDayCount += 30;
            }


    }

}

   return lastYearDayCount + dayNum;
}

int isLeapYear(int leapYear){                                              // check if leap year
 if((leapYear % 4 == 0 && leapYear % 100 != 0) || leapYear % 400 == 0){
    return 1;
 }else{
    return 0;
 }
 }
