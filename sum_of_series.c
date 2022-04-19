//program to find sum of series 1 + 1/4 + 1/9 + 1/16 + ...
#include<stdio.h>
#include<math.h>
    int main()
    {
    float sum=0,t,term;
    int n;
    printf("Enter the no of terms in the series: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {   t=pow(i,2);
        term=1/t;
        sum+=term;
    }
    printf("The sum is %f\n",sum);
    
        return 0;
    }
