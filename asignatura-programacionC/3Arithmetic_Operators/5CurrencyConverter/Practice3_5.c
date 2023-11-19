/* 3.5. Program about making a currency converter from EUR to RSD.
– Enter the exchange rate and
– The amount of EUR to convert.  */
#include <stdio.h>

//To declare the const of the exchange rate from EUR to RSD.
#define EXCHANGE_RATE 117.72

void main()
{
    //To declare the amount of € variable and the amount of RSD variable.
    float EUR, RSD;

    //Start the program.....
    printf("\n\n$$$$$$$$$$$$$$$ C U R R E N C Y    C O N V E R T E R $$$$$$$$$$$$$$$\n\n");
    printf("\n\n$$$$$$$$$$$$$$$$$$$$$ E U R O S    T O    R S D $$$$$$$$$$$$$$$$$$$$$\n\n");
    printf("Please, introduce the amount of EUROS that you want to exchange: ");
    scanf("%f", &EUR);

    //Doing operations.....
    printf("\n\n\tDoing the operation of the CURRENCY CONVERTER from euros to RSD....\n");
    RSD = EUR * EXCHANGE_RATE;

    //Print the solution....
    printf("\n\nYou are going to receive: %g RSD\n\n", RSD);
}
