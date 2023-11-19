/* 2.11. Program about calculating the required quantity of artificial fertilizer for a particular plot. It is necessary to enter
the plot dimensions in meters (width and length - float), then enter the quantity of fertilizer per
hectare (float). After that display they required quantity of fertilizer for the given plot (float). */
#include <stdio.h>

#define HECTARES 10000 //10000 m^2 of hectares.
#define WeightOneTon 1000 //The weight of 1 ton is 1000 kg.

void main()
{
    //To declare variables.
    float w, leng, amount_fert, amount_plot, convert_kg; //w = the width of the plot; leng = the length of the plot;
    //amount_fert = the amount of fertilizer (tons) that it is necessary per hectare (1 ha = 10000 m^2);
    //amount_plot = the amount that the plot need; convert_kg = the amount in kg.

    //Start the program....
    printf("\nPlease, introduce the width of the plot (m): ");
    scanf("%f", &w);
    printf("\nPlease, introduce the length of the plot (m): ");
    scanf("%f", &leng);
    printf("\nPlease, introduce the amount of fertilizer (tons) that it is necessary per hectare: ");
    scanf("%f", &amount_fert);

    //Doing the operations....
    amount_plot = ((w*leng)*amount_fert) / HECTARES;
    convert_kg = amount_plot * WeightOneTon;

    //Printing the result....
    printf("\nThe amount that the plot need is: %g tons\n", amount_plot);
    printf("The amount that the plot need is: %g kg\n", convert_kg);
}
