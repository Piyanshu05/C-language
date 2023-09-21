#include<stdio.h>                              /*Determine the roots of the equation ax2+bx+c=0..*/
#include<math.h>
void main()
{
    float a, b, c, discriminant, root1, root2, realPart, imagePart;
    printf("Enter The Co-efficient of a, b, c:");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    /*Condition For Real And Different Roots*/ 
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / 2 * a;
       root2 = (-b - sqrt(discriminant)) / 2 * a;
            printf("root1 = %.2f and root2 = %.2f", root1, root2);
    }
      
    /*Condition For Real And Equal Roots*/
    else if (discriminant == 0)
    {
       root1 = root2 = -b / (2 * a);
            printf("root1 = root2 = %.2f", root1);
            
    }

    /*If Roots Are Not Equal*/        
    else
    {
       realPart = -b / (2 * a);
       imagePart = sqrt(-discriminant) / (2 * a);
            printf("root1 = %.2f + %.2f and root2 = %.2f - %.2f", realPart, imagePart, realPart, imagePart); 
    }



}