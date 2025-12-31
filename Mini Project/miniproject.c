#include <stdio.h>
//Mini Project For PFC 

//Topic:-

//Store food prices in an array.
//Display menu items.
//Take order quantity.
//Call function to calculate bill.
//Display total amount.
float calculateBill(int price[], int qty[]) {
    float total = 0;
    int i;

    for(i = 0; i < 5; i++) {
        total = total + price[i] * qty[i];
    }

    return total;
}

int main() { printf("Adarsh Garade_10067\n");
    int price[5] = {100, 150, 200, 80, 120};
    int qty[5] = {0, 0, 0, 0, 0};
    int choice, quantity;
    float bill;

    printf("Menu:\n");
    printf("1. Burger   - Rs.100\n");
    printf("2. Pizza    - Rs.150\n");
    printf("3. Pasta    - Rs.200\n");
    printf("4. Fries    - Rs.80\n");
    printf("5. Sandwich - Rs.120\n");
    printf("0. Finish Order\n\n");

    while(1) {
        printf("Select food item number (0 to finish): ");
        scanf("%d", &choice);

        if(choice == 0) {
            break;
        }

        if(choice >= 1 && choice <= 5) {
            printf("Enter quantity: ");
            scanf("%d", &quantity);

            qty[choice - 1] += quantity;
        } else {
            printf("Invalid choice!\n");
        }
    }

    bill = calculateBill(price, qty);

    printf("\n==============================\n");
    printf("Total Amount to Pay: Rs. %.2f\n", bill);
    printf("Thank you for your order!\n");

    return 0;
}
