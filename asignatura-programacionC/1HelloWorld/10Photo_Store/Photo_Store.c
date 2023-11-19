/* 1.10. Program about reading the price of making a photograph in a photo-store, then the number of photographs to be
made and print the total price for these photos. */
#include <stdio.h>

int main (void)
{
    //Variables.
    int OnePhoto; //Variable of the price of 1 photo.
    int NumPhoto; //Variable of the number of photos that the guest wants.
    int Total_Price; //Variable of the price of all photos.

    //Dialogue between the cashier of the Photo Studio and the Guest.
    printf("\n\n\n       Milotovic Photo Studio         \n");
    printf("\nCashier: Welcome to the best Photo-Store in Novi Sad!");
    printf("\nGuest: Hi! Could you tell me the price of making a photograph here?");
    printf("\nCashier: Yes, of course. The price (in euros) of making a photograph here is: ");
    scanf("%d", &OnePhoto);
    printf("Guest: Nice! So, I want to make this amount of photos: ");
    scanf("%d", &NumPhoto);

    //Doing the operations of the total prices of all photos.
    Total_Price = OnePhoto * NumPhoto;

    //Continue the dialogue.
    printf("Cashier: Perfect! So, The total price of all is: %d euros.", Total_Price);
    printf("\nCashier: Do you want to pay by cash or by card?");
    printf("\nGuest: Card, please. I never carry money in my wallet.\n");
    return 0;
}
