#include <stdio.h>
#include <math.h> 
#include <conio.h> 
#include <stdlib.h> 
#include "func.h"

int main(void)
{
    int q = 0;
    while (1)
    {
        printf("Menu:\n");
        printf("1. Task 1\n");
        printf("5. Task 5\n");
        printf("6. Exit \n");
        printf("Enter your task: ");
        scanf("%d", &q);
        switch (q)
        {
        case 1:
        {
            printf("Task 1:\n");
            double x, result;
            printf("x = ");
            scanf("%lf", &x);
            f(&x, &result);
            printf("f = %.4lf\n\n", result);
            break;
        }
        case 5:
        {
            printf("Task 5:\n");
            int n=5;
            int arr[5];
            sortStackArray(arr, n);
            break;
        }
        case 6:
        {
            exit(EXIT_SUCCESS);
        }
        default:
            printf("Wrong input");
            break;

        }
    }
}
