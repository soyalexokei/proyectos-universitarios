/* 2.16. Program about calculating the possible time of flight for a multirotor. Enter the number of rotors (int) and the
current. Enter the rotor number (int) and current consumption per rotor in mA (int), number of
batteries (int) and battery capacity in mAh (float). Calculate and display the possible flight time
in minutes. */
#include <stdio.h>

#define MINUTES 60 //Const of the minutes that there is in 1 hour.

void main()
{
    //To declare an integer variable of the rotor numbers, current consumption per rotor in mA, and the number of batteries.
    //And to declare the float variable of the battery capacity in mAh.
    int number_rotors, consum_rotor, number_batt; //In mA => the consum_rotor.
    float batt_capacity, final_min; //In mAh the batt_capacity and the possible flight time in minutes.

    //Start the program.....
    printf("\nPlease, introduce the number of rotors that there are: ");
    scanf("%d", &number_rotors);
    printf("\nPlease, introduce the consumption per rotor (in mA): ");
    scanf("%d", &consum_rotor);
    printf("\nPlease, introduce the number of batteries that there are: ");
    scanf("%d", &number_batt);
    printf("\nPlease, introduce the battery capacity (in mAh): ");
    scanf("%f", &batt_capacity);

    //Doing operations.....
    printf("\n\n\t\tDoing the Inversely Proportional Rule of Three....\n");
    final_min = ((float)number_batt*batt_capacity*MINUTES)/((float)number_rotors*(float)consum_rotor);

    //Print the integer part separtly of the decimal part.
    printf("\n\nThe vehicle can fly for %g min.\n\n", final_min);
}
