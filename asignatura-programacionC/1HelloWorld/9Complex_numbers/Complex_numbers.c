/* 1.9. Program about reading two complex numbers, presented by their real and imaginary parts (read a, b, c and d
for ai+b and ci+d). Calculate and print the result of adding, subtracting and multiplying these numbers. */
#include <stdio.h>

int main (void)
{
    //Variables.
    int a; //Variable of the real part of the first complex number.
    int b; //Variable of the imaginary part of the first complex number.
    int c; //Variable of the real part of the second complex number.
    int d; //Variable of the imaginary part of the second complex number.

    //Answer the two questions.
    printf("\nWrite the real part of the first complex number: a = ");
    scanf("%d", &a);
    printf("Write the imaginary part of the first complex number: b = ");
    scanf("%d", &b);
    printf("\nWrite the real part of the second complex number: c = ");
    scanf("%d", &c);
    printf("Write the imaginary part of the second complex number: d = ");
    scanf("%d", &d);

    //Printing the first complex number.
    printf("\nFirst complex number = %d + i(%d)", a, b);
    //Printing the second complex number.
    printf("\nSecond complex number = %d + i(%d)", c, d);

    //Doing the adding of these complex numbers.
    int add_real = a + c;
    int add_img = b + d;
    //Doing the subtracting of these complex numbers.
    int sub_real = a - c;
    int sub_img = b - d;
    //Doing the multiplying of these complex numbers.
    int mult_real = a * c;
    int mult_img = b * d;

    //The result of the adding.
    printf("\nThe final complex number after adding is = %d + i(%d)", add_real, add_img);
    //The result of the subtracting.
    printf("\nThe final complex number after subtracting is = %d + i(%d)", sub_real, sub_img);
    //The result of the multiplying.
    printf("\nThe final complex number after multiplying is = %d + i(%d)", mult_real, mult_img);
    return 0;
}
