#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double weight;
    double height;
    double bmi;

    printf("Enter weight in kilograms: ");
    scanf("%lf", &weight);

    printf("Enter height in meters: ");
    scanf("%lf", &height);

    bmi = weight / (height * height);

    printf("Your BMI is %.2f\n", bmi);

    printf("\nBMI VALUES\n");
    printf("Underweight: less than 18.5\n");
    printf("Normal:      between 18.5 and 24.9\n");
    printf("Overweight:  between 25 and 29.9\n");
    printf("Obese:       30 or greater\n");

    return 0;
}