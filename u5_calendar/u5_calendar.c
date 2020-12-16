/*Robert Volaric*/

#include <stdio.h>
#include <stdlib.h>

int day = 0; // initialize variables
int days = 0;
int step = 0; // controls new line

int main()
{
    scanf("%d%d", &days, &day);
    step = day;
    for(int i = 1; i < days+1; i++){
        if(i == 1){
            printf("%*.*d",(day*3) + 3,1 ,i);
            step++;
        }else{
        printf("%3d", i);
        step++;
        }
        if(step == 7){
            printf("\n");
            step = 0;
        }
    }

    return 0;
}
