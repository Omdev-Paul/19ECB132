#include <stdio.h>
int main()
{
    int n, r, sum = 0, temp;
    printf("enter the number=");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum)
        printf("palindrome number ");
    else
        printf("not palindrome");
    return 0;
}

/*
i/p-> enter the number=345543
o/p-> palindrome number

i/p-> enter the number=346543
o/p-> not palindrome
*/
