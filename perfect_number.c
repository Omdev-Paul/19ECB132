#include <stdio.h>
int main()
{
    int i, n, Sum = 0;
    printf("\n Please Enter any number \n");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            Sum += i;
    }

    if (Sum == n)
        printf("\n %d is a Perfect Number", n);
    else
        printf("\n%d is not the Perfect Number", n);

    return 0;
}

/*
i/p->  Please Enter any number
      496
o/p->  496 is a Perefect Number

i/p->  Please Enter any number
      497
o/p->  497 is not the Perefect Number
*/
