#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main()
{
    int number,fact,temp,sum=0,digit;
    printf("Enter number:");
    scanf("%d",&number);
    temp=number;
    while(number){
        digit=number%10;
        fact=1;
        while(digit){
            fact*=digit;
            digit--;
        }
        sum +=fact;
        number /= 10;
    }
        if(temp == sum)
            printf("Strong number");
        else
            printf("Not Strong");
}
    