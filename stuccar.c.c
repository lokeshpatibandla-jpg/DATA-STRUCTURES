#include <stdio.h>

struct Car {
    int carID;
    char model[50];
    float ratePerDay;
};

int main() {
    struct Car c[3];
    int days;

    for (int i = 0; i < 3; i++) {
        printf("\nEnter details of Car %d\n", i + 1);

        printf("Car ID: ");
        scanf("%d", &c[i].carID);

        printf("Model: ");
        scanf(" %49[^\n]", c[i].model);

        printf("Rental Rate per Day: ");
        scanf("%f", &c[i].ratePerDay);
    }

    printf("\nEnter number of rental days: ");
    scanf("%d", &days);

    printf("\n--- Rental Details ---\n");
    for (int i = 0; i < 3; i++) {
        float totalCost = c[i].ratePerDay * days;

        printf("\nCar ID: %d", c[i].carID);
        printf("\nModel: %s", c[i].model);
        printf("\nTotal Rental Cost: %.2f\n", totalCost);
    }

    return 0;
}
