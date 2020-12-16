/*Robert Volaric*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float volume = 0; // initialize variables
    float area = 0;
    float input = 0;
    scanf("%f", &input); // set input capture with float placeholder
    printf("Volume: %.2f\n",  input*input*input); // print calculated values
    printf("Surface Area: %.2f",  input*input*6);
    return 0;
}
