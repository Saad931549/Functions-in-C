//user defined function to find perfect numbers in a given range
#include<stdio.h>
int perfect(int,int);
int sumPdivisors(int);
    int main()
    {
    int n,m;
    printf("program to find perfect numbers in a given range\n");
    printf("Enter 2 numbers: ");
    scanf("%d %d",&n,&m);
    int perfect_no;
    perfect_no=perfect(n,m);
        return 0;
    }

    int sumPdivisors(int m)
    {   int count=0;
        for (int i = 1; i <= m/2; i++)
        {
            if (m%i==0)
            {   
                count+=i;
            }
            
        }
            return count;
    }

    int perfect(int a, int b)
    {   int sum;
        for (int i = a; i <= b; i++)
        {
            sum=sumPdivisors(i);
            if (sum==i)
                printf("%d is a perfect number\n",i);
        }
        
    }