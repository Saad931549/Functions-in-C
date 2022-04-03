#include<stdio.h>
int parity(int);
    int main()
    {
    int n,ans;
    printf("Enter the number: ");
    scanf("%d", &n);
    ans=parity(n);
    switch (ans)
    {
    case 1:
        printf("Even number");
        break;
    
    case -1:
        printf("Odd number");
        break;
    
    default:
        printf("not an integer");
        break;
    }
        return 0;
    }
int parity(int n)
    {
        if (n%2==0)
        {
            return 1;
        }
        else if(n%2!=0)
        {
            return -1;
        }
        else
        {
            return 0;
        }
        
        
    }