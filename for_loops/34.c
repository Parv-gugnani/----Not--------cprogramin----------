#include "stdio.h"

int main()
{
    int n,num,rev=0;
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        rev=(rev*10)+(n%10);
        n/=10;
    }   
    if(rev==num)
    {
        printf("%d is palindrome",num);
    }
    else {
     printf("%d is not a palindrome",num);
    }

    return 0;
}