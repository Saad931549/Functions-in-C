#include<stdio.h>

int prodDigits(int);

int main()
    {
    int n,product;
    printf("Program to print the product of digits of a number\n");
    printf("Enter the number: ");
    scanf("%d", &n);
    product=prodDigits(n);
    printf("The product of digits is %d",product);
        return 0;
    }

int prodDigits(int m)
    {int rem,prod=1;
        if (m==0)
        {
            return 0;
        }
        else
        {
            while (m!=0)
            {
            rem=m%10;
            prod*=rem;
            m/=10;
            }
        }
        
        
        return prod;
    }