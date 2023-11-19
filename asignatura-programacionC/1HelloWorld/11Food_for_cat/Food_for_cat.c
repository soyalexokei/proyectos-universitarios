/* 1.11. Program about calculating how much food do you need to feed a cat in a week.
If we know that the cat eats 2 portions per day of 80 g.
Also calculate the price of the cat food for a month (30 days).
If 10 g of cat food is 3 din. */
#include <stdio.h>

int main (void)
{
    //Variables.
    int moneyOneWeek; //Variable of the price of feeding a cat for 1 week.
    int gramesForOneDay; //Variable of the grames that the cat need for feeding for 1 day.
    int gramesForOneWeek; //Variable of the grames that the cat need for feeding for 1 week.
    int gramesForOneMonth; //Variable of the grames that the cat need for feeding for 1 month.
    int oneWeek = 7; //Variable of the days of one week = 7.
    int oneMonth = 30; //Variable of the days of one month = 30.
    int gramesFood = 10; //Variable of the grames that you can buy in the market with 3 din.
    int priceFood = 3; //Variable of the price that 10 g of cat food cost.
    int priceForOneWeek; //Variable of the price of the cat food for 1 week = 7 days.
    int priceForOneMonth; //Variable of the price of the cat food for 1 month = 30 days.

    //Dialogue between the cashier of the Pet Shop and the Guest.
    printf("\n\n\n       Martin PET SHOP         \n");
    printf("\nCashier: Welcome to the best Pet Shop in Novi Sad!");
    printf("\nGuest: Hi! I need to feed my cat for a week.");
    printf("\nGuest: It needs the following grames per day of its own food: "); //The user can write whatever he/she wants, but 160 g is by default.
    scanf("%d", &gramesForOneDay);
    printf("Guest: Please, can you help me?");

    //Doing the operations of how much cost to feed the cat for a week.
    gramesForOneWeek = gramesForOneDay * oneWeek;
    priceForOneWeek = (gramesForOneWeek * priceFood) / gramesFood;

    //Continue the dialogue.
    printf("\nCashier: Yes, I can. The price of feeding your cat for a week is: %d din per week.", priceForOneWeek);
    printf("\nGuest: Thanks so much! And, which will the price be for a month?");

    //Doing the operations of how much cost to feed the cat for a month.
    gramesForOneMonth = gramesForOneDay * oneMonth;
    priceForOneMonth = (gramesForOneMonth * priceFood) / gramesFood;

    //Continue the dialogue.
    printf("\nCashier: The price of feeding your cat for a month is: %d din per month.", priceForOneMonth);
    printf("\nGuest: Thanks so much for your attention! Nice! Here it is the money. See you!");
    printf("\nCashier: See you soon! Thanks for buying in our Pet Shop!");
    return 0;
}
