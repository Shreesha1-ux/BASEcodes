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
        if(n==2)
        {
            int DD,MM,YYYY,AMT;
            char reason[5];
            printf("DAY BUDGETING \n MAJOR 5 TRANSACTION ");
            printf("Enter the AMOUNT ");
            scanf("%d",&AMT);
            printf("ENter the DATE in DD MM YYY format");
            scanf("%d %d %d",&DD,&MM,&YYYY);
            printf("The cost Reason");
            scanf("%s",&reason);
            printf("THE AMOUNT %d was spent on %s on %d %d %d",AMT,reason,DD,MM,YYYY);

        }
        if(n==3)
        {
            int m;
            printf("PRESS 1 for INTREST EMI \n PRESS 2 for EMI with NO INTREST \n");
            scanf("%d \n",&m);
                if(m==1)

                {
                int emiam,cunth,emiintamt,am;
                double dur,emiint,emitime,timeemi;
                printf("ENTER the amount of the product");
                scanf("%d \n",&am);
                printf("ENTER THE INTREST ");
                scanf("%lf \n",&emiint);
                printf("ENTER the time u will need for to pay =");
                scanf("%lf",&timeemi);
                cunth=timeemi*12;
                emiintamt=(emitime*am*emiint)/100;
                printf("THE INTERST FOR YOU PRODUCT OF AMOUNT %d IN DURATION OF %lf YEARS IS %D",am,emitime);

            }
            if(m==2)
        {
            int namount,ntime,ncunth;
            printf("NO COST EMI \n  ");
            printf("Enter the amount of the product ");
            scanf("%d",&namount);
            ncunth=ntime*12;
        }
        if(n!=1,2,3)
        {
            printf("the feature do not exist");
        }

}

        