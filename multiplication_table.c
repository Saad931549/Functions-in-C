//program to input a number and print multiplication table of that number
#include<stdio.h>
void table(int);
    int main()
    {
    int n;
    printf("Input a number to print its multiplication table\n");
    scanf("%d",&n);
    printf("the number entered is %d\n",n);
    table(n);
        return 0;
    }
void table(int n)
    {
        for (int i = 1; i <= 10; i++)
        {
            printf("%d x %d = %d\n",n,i,n*i);
        }
        
    }