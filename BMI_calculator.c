#include <stdio.h>
/**
 * main - my second project BMI calculator
 * description - a program that accept inputs from a user's
 * height and weight and print the interpretation of the user's BMI
 */

int main() 
{
    double height, weight, height_squared, BMI;
  
    
    printf("Enter your weight in kilograms ");
    scanf("%lf", &weight);
    
    printf("Enter your height in meters ");
    scanf("%lf", &height);
    height_squared = height*height;
    
    BMI = weight/height_squared;
    printf("Your height is %.2lfm\n", height);
    printf("Your weight is %.2lfkg\n", weight);
    printf("Your BMI is %.2lfkg/m^2\n", BMI);
    
    
    if (BMI < 18)
    {
        printf("Your are Uderweight");
    }
    else if (BMI >= 18 && BMI < 25)
    {
        printf("You are Normal Weight");
    }
    else if (BMI >= 25 && BMI < 30)
    {
        printf("You are OverWeight\n");
    }
    else if (BMI > 30)
    {
        printf("You are Obesity\n");
        if (BMI >= 30 && BMI < 35)
        {
            printf("Class I Obesity");
        }
        else if (BMI >= 35 && BMI < 40)
        {
            printf("Class II Obesity");
        }
        else
        {
            printf("Class III Obesity");
        }
    }
    else
    {
        printf("You BMI is not known");
    }
    
    return 0;
}
