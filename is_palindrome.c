#include<stdio.h>
int ispalindrome(int);
    int main()
    {
    int n,new;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("the number entered is %d\n",n);
    new=ispalindrome(n);
    if (new==n)
    {
        printf("Number is a palindrome");
    }
    else
    {
        printf("Number is not a palindrome");
    }
    
        return 0;
    }
int ispalindrome(int m)
    {
        int rev=0, rem;
        while (m!=0)
        {
            rem=m%10;
            m/=10;
            rev=rev*10;
            rev=rev+rem;
        }
        return rev;
    }