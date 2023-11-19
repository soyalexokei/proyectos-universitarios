/* 3.2. Program about calculating the car consumption. If we need a full tank of X liters in order to travel Y km, what is the
consumption per 100 km?
- enter X and Y. */
#include <stdio.h>

//To declare consts of the number of 100 KM.
#define CONSUMP 100

void main()
{
    //To declare the number of total KM variable, the number of liters of the car tank variable, and the liters per 100 km variable.
    float total_km, tank_liters, liters_each;

    //Start the program.....
    printf("\n\n$$$$$$$$ VOLKSWAGEN CAR CONSUMPTION $$$$$$$$\n\n");
    printf("Please, introduce the number of KM that you are going to do with your car: ");
    scanf("%f", &total_km);
    printf("\nPlease, introduce the number of LITERS that the tank of your car need for doing the %g km: ", total_km);
    scanf("%f", &tank_liters);

    //Doing operations.....
    printf("\n\n\tDoing the operation of calculating the consumption of X liters per 100 km....\n");
    liters_each = (CONSUMP * tank_liters) / total_km;

    //Print the solution....
    printf("\n\nEach 100 KM, you are going to waste: %g L\n\n", liters_each);
}
