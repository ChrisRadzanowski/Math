#include <stdio.h>
#include <math.h>
#include <cs50.h>

// Purpose: To take two doubles as inputs and calculate the hypotenuse of a right triangle.

int main ()
{
    double a;
    double b;
    double c;
    double a2;
    double b2;
            
        printf("This app will calculate the hypotenuse of a right-angled triangle.\n\n");
            
            //Prompts user for input of value a and b.
            a = get_double("What is the value of side a?\n\n");
            b = get_double("What is the value of side b?\n\n");
            
            //Brings both variables a and b to the power of 2.
            a2 = pow(a, 2);
            b2 = pow(b, 2);
            
            //Calculates the sum and square root of both variables a2 and b2, which is equal to the size of a hypotenuse of a right triangle.
            c = sqrt(a2 + b2);
    
        printf("The value of the hypotenuse is ~ %.2lf\n", c);
    
    return 0;
}