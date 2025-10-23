#include<stdio.h>

void main()
{
    int n;
    printf("FEATURE LIST \nPRESS 1 for intrest calculation \n 2 for day budgeting \n 3 for EMI calculation \n");
    scanf("%d",&n);

        if(n=1)
        {
        printf("INTREST CALCULATION \n");
        double A,I,T,PA;
        printf("Enter the Principle AMOUNT    INTREST     TIME/YEARS ");
        scanf("%lf %lf %lf",&A,&I,&T);
        PA=(A*I*T)/100;
        printf("The the principle amount of the amount %lf duration %lf for intrest rate %lf is %lf rupees",A,T,I,PA);
        }
}

        