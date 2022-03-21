#include<stdio.h>
int main()
{
    int i,fact,n;
    printf("Enter a no: "); scanf("%d",&n);
    if(n==0)
        printf("1");
    else if(n>=10)
        printf("Too big a Number");
    else if(n<0)
        printf("Number is Negative");
    else if(n>0 && n<10){
        for(i=1;i<=n;i++)
            fact*=i;
        printf("%d",i);
    }    
}