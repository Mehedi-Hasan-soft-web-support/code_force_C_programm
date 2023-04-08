#include<stdio.h>
int main()
{
    int X;
    scanf("%d",&X);
    int ans=X/1000;



    if(ans%2==0)
    {
        printf("EVEN");

    }
    else{
        printf("ODD");
    }
    return 0;
}