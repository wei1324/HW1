#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double miles;
    double costPerGallon;
    double milesPerGallon;
    double parking;
    double tolls;
    double gasolineCost;
    double totalCost;

    printf("一整天的總里程數: ");
    scanf("%lf", &miles);

    printf("汽油一公升/加侖多少錢: ");
    scanf("%lf", &costPerGallon);

    printf("平均一公升/加侖能行駛多少公里: ");
    scanf("%lf", &milesPerGallon);

    printf("一天的停車費: ");
    scanf("%lf", &parking);

    printf("一天的通行費(過路費): ");
    scanf("%lf", &tolls);

    gasolineCost = miles / milesPerGallon * costPerGallon;

    totalCost = gasolineCost + parking + tolls;

    printf("Gasoline cost per day: %.2f\n", gasolineCost);
    printf("Total cost per day: %.2f\n", totalCost);

    return 0;
}