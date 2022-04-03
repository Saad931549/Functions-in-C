#include<stdio.h>
int reverse(int);
    int main()
    {
    int n,ans;
    printf("Enter a number: ");
    scanf("%d",&n);
    ans=reverse(n);
    printf("reverse of the number is %d", ans);
        return 0;
    }
int reverse(int n)
    {int rem,a=1,rev=0;
        while (n!=0)
        {
            rem=n%10;
            n/=10;
            rev=rev*10+rem;
        }
        printf("%d\n", rev);
        return rev;
    }