//user defined function to find proper divisors of a number
#include<stdio.h>
int sumPdivisors(int);
    int main()
    {
    int n;
    printf("program to find sum of proper divisors of a number\n");
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum;
    sum=sumPdivisors(n);
    printf("The sum of proper divisors of %d is %d\n",n,sum);
        return 0;
    }

    int sumPdivisors(int m)
    {   int count=0;
        for (int i = 1; i <= m/2; i++)
        {
            if (m%i==0)
                count+=i;
        }
            return count;
    }