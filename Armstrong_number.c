#include<stdio.h>
#include<math.h>
int powersum(int);
int PrintArmstrong();
int isArmstrong();
    int main()
    {
    int n;
    printf("Press 1 to check if the input number is an Armstrong number: \n");
    printf("Press 2 to print Armstrong number in a given range: \n");
    scanf("%d",&n);
    switch(n)
    {
        case 1: isArmstrong();
        case 2: PrintArmstrong();
        default:
            break;
    }
        return 0;
    }
    int powersum(int n)
    {   
        int rem, count=0,digit=0;
        //printf("%d\t",n);
        int m=n;
        while (m>0)
        {
            digit++;
            m/=10;
        }
        //printf("n=%d\t",n);
        //printf("%d\n",digit);
        
        while(n>0)
            {   
                rem=n%10;
                rem=pow(rem,3);
                count+=rem;
                n/=10;
            }
        
        return count;
    }
    int isArmstrong()
        {   int ans,n;
            printf("Enter the number: ");
            scanf("%d",&n);
            ans=powersum(n);
            printf("number returned is %d\n",ans);
            if(ans==n)
                printf("Armstrong Number");
            else
                printf("not an Armstrong number");
        return 0;
        }
    int PrintArmstrong()
        {   int m,n;
            printf("Print Armstrong numbers within a range\n");
            printf("Enter a range(m,n)");
            scanf("%d %d",&m,&n);
            for (int i = m; i < n; i++)
            {   int ans;
                
                ans = powersum(i);
                
                if (ans==i)
                {
                    printf("%d is an Armstrong number\n",i);
                }
                else
                {
                    continue;
                }
                
            }
            
        }