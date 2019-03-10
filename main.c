/*
*The purpose of this program is to give all the factors\
*of a number between 1 and 30,000.\
*
*Authors - Dillon Donovan
*Date Revised - 3/9/2019
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int value = 1;
    while(value > 0)
    {
        //User Prompt and data entry
        printf("\n******************************************************************");
        printf("\nPlease enter a single integer between 1 and 30,000");
        printf("\n or -1 to quit. --> ");
        scanf("%d",&value);

        //Processing
        printf("\nYou entered %d, \n", value);
        printf("The factors of %d are:   1,\n\n", value);

        int divisor = 1;
        int counter = 1;
        while(divisor <= 30000)
        {
            if(value%divisor == 0)
            {
                printf("%d,    ",divisor);

                //Factor alignment
                if(counter % 4 == 0)
                {
                    printf("\n                                ");
                    counter = 1;
                }
                else(counter++);
            }
            divisor++;

        }
    }
    printf("\n\n\nProgram has terminated.\n\n");
}
