//Program calculating taxes
/*
Author:Mbue Immaculate Wairimu
Reg.No:CT101/G/23716/24
Date:7/11/2024
*/
//preprocessor directive
#include <stdio.h>
int main()
{
    float hours_worked,hourly_wage,gross_pay,tax_charged,net_pay;
    //Prompting user to enter input
      printf("Enter Hours worked(week):");
    scanf("%f",&hours_worked);
    printf("\nEnter your hourly wage:");
    scanf("%f",&hourly_wage);

    //calculating the gross pay
    if(hours_worked>40)
    {
     gross_pay=(40*hourly_wage)+(hours_worked-40)*hourly_wage*1.5;
    }
    else
    {
     gross_pay=hours_worked*hourly_wage;
    }

    //calculating the tax charged
    if(gross_pay<=600)
    {
        tax_charged=gross_pay*0.15;
    }
    else
    {
        tax_charged=(600*0.15)+((gross_pay-600)*0.20);
    }
    //calculating the net pay
    net_pay=gross_pay-tax_charged;
    //printing the values
     printf("\nThe Gross pay is %.2f",gross_pay);
      printf("\nThe Total bill is %.2f",tax_charged);
       printf("\nThe Net pay %.2f",net_pay);
    return 0;
}

