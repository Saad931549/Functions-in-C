#include<stdio.h>
//Program to print the multiplicative digital root and multiplicative persistence of a number
int prodDigits(int);
int MDR(int);
int Mpersistence(int);

int main()
    {
    int n,product;
    printf("Program to print the multiplicative digital root and multiplicative persistence of a number\n");
    printf("Enter the number: ");
    scanf("%d", &n);
    int root;
    root=MDR(n);
    int perst;
    perst=Mpersistence(n);
    printf("The multiplicative digital root is equal to %d and the Multiplicative persistence is %d",root, perst);
        return 0;
    }
int MDR(int n)
    {

        while (n/10!=0)
        {
            n=prodDigits(n);
        }
        return n;
    }
int Mpersistence(int n)
    {
    int count=0;
        while (n/10!=0)
        {
            
            n=prodDigits(n);
            count++;
        }
        return count;
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
        //printf("product is %d\n",prod);
        
        return prod;
    }