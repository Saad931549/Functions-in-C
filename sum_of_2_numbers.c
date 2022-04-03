//program to find the sum of 2 numbers using user defined function
#include<stdio.h>
int add(int, int);
    int main()
    {
    int m,n,sum;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &m, &n);
    printf("%d %d\n",m,n);
    sum=add(m,n);
    printf("the sum is %d\n",sum);
        return 0;
    }
int add(int a, int b)
    {
        int ans;
        ans=a+b;
        return ans;
    }