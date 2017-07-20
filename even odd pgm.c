#include<stdio.h>
int main()
{
    int t,num;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d",&num);
        if(num%2==0)
            {
                printf("The number is even number");
            }
            else
            {
                printf("The number is odd number");
            }
      t--;
    }
    return 0;
}
