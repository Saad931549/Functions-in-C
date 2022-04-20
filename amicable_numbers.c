//user defined function to find amicable numbers
#include<stdio.h>
int sumPdivisors(int);
    int main()
    {
    int m,n;
    printf("program to find amicable numbers\n");
    printf("Enter 2 numbers: ");
    scanf("%d %d",&m,&n);
    int sum1;
    sum1=sumPdivisors(m);
    int sum2;
    sum2=sumPdivisors(n);

    if (sum1==n)
    {
        printf("The numbers are amicable");
    }
    else
    {
        printf("The numbers are not amicable");
    }
    
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