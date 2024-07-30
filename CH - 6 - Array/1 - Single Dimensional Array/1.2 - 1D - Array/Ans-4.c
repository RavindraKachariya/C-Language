#include <stdio.h>

#define MAX_ITEMS 100

int main() 
{
    float prices[MAX_ITEMS];
    int quantities[MAX_ITEMS];
    int n;
    float total_price = 0.0;
    float gst;
    float discount;

    printf("=============================================\n");
    printf("    \tWelcome to the Billing System\n");
    printf("=============================================\n");

    printf("Enter The Number Of Items: ");
    scanf("%d", &n);

    printf("---------------------------------------------\n");

    printf("Enter The Prices And Quantities Of The Items\n");
    printf("---------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("Price Of Item %d \t: ", i + 1);
        scanf("%f", &prices[i]);

        printf("Quantity of Item %d \t: ", i + 1);
        scanf("%d", &quantities[i]);

        total_price += prices[i] * quantities[i];
    }

    gst = total_price * 0.18;
    discount = gst * 0.05;

    printf("\n================== INVOICE ==================\n");
    for (int i = 0; i < n; i++) {
        printf("Item %d \t: $%.2f \t x %d = $%.2f\n", i + 1, prices[i], quantities[i], prices[i] * quantities[i]);
    }

    printf("---------------------------------------------\n");
    printf("Total Price \t\t: $%.2f\n", total_price);
    printf("---------------------------------------------\n");

    printf("GST (18%%)\t\t: $%.2f\n", gst);
    printf("Discount (5%%)\t\t: $%.2f\n", discount);

    printf("---------------------------------------------\n");
    printf("TOTAL (after discount)\t: $%.2f\n", total_price + gst - discount);
    printf("---------------------------------------------\n");

}