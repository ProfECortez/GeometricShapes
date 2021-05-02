
/* This program is rather a compilation of functions to produce geometric drawings in C. It does not interact with the user and the main function is nothing but a test area */

//  Created by Eduardo Cortez on 13/04/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void square(int side)
{
    int i, j;
    
    for(i = 0; i < side; i++)
        printf("* ");
    printf("\n");
    
    for(i = 0; i < side - 2; i++)
    {
        printf("* ");
        for(j = 0; j < side - 2; j++)
            printf("  ");
        printf("*\n");
    }
    
    for(i = 0; i < side; i++)
        printf("* ");
    printf("\n");
}

void rectangle(int sideA, int sideB) //sideA = base; sideB = height
{
    int i, j;
    
    for(i = 0; i < sideA; i++)
        printf("* ");
    printf("\n");
    
    for(i = 0; i < sideB - 2; i++)
    {
        printf("* ");
        for(j = 0; j < sideA - 2; j++)
            printf("  ");
        printf("*\n");
    }
    
    for(i = 0; i < sideA; i++)
        printf("* ");
    printf("\n");
}

void triangle(int base, int height)
{
    int i, j, space, count;
    float baseF, heightF;
    
    baseF = base;
    heightF = height;
    
    for(i = 0; i < base-1; i++)
        printf(" ");
    printf("*\n");
    
    for(j = 0; j < height - 2; j++)
    {
        space = 0;
        for(i = 0; i < ((baseF-1)-((1 + j)*((baseF+1)/heightF))); i++)
        {
            printf(" ");
            space = space + 1;
        }
        printf("*");
        for(count = 0; count <= (2*(base-space)-4); count++)
            printf(" ");
        printf("*\n");
    
    }
               
    for(i = 0; i < base; i++)
        printf("* ");
    printf("\n");
}

void rhombus(int diagonalA, int diagonalB) //DiagonalA = Horizontal; DiagolnalB = Vertical
{
    int i, j, space, count;
    float diagonalAF, diagonalBF;
    
    diagonalAF = diagonalA;
    diagonalBF = diagonalB;
    
    // First *
    for(i = 0; i < diagonalA-1; i++)
        printf(" ");
    printf("*\n");
    
    // Opening rhombus
    for(j = 0; j < (diagonalBF/2 - 1); j++)
    {
        space = 0;
        for(i = 0; i < ((diagonalAF-1)-((1 + j)*((diagonalAF+1)/(diagonalBF/2)))); i++)
        {
            printf(" ");
            space = space + 1;
        }
        printf("*");
        for(count = 0; count <= (2*(diagonalA-space)-4); count++)
            printf(" ");
        printf("*\n");
    }
    
    // Closing rhombus
    for(j = (diagonalBF/2 - 1); j > 0; j--)
    {
        space = 0;
        for(i = 0; i < ((diagonalAF-1)-((j)*((diagonalAF+1)/(diagonalBF/2)))); i++)
        {
            printf(" ");
            space = space + 1;
        }
        printf("*");
        for(count = 0; count <= (2*(diagonalA-space)-4); count++)
            printf(" ");
        printf("*\n");
    }

    
    // Last *
    for(i = 0; i < diagonalA-1; i++)
        printf(" ");
    printf("*\n");
}



int main() {
    
    // Enter the function you want to test
    
    
    return 0;
}
