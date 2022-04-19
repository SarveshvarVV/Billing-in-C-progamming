#include <stdio.h>

int main()
{
        int amount_given,bill_amount,q,r;
        scanf("%d %d",&amount_given,&bill_amount);
        q=amount_given/bill_amount;
        r=amount_given%bill_amount;
        printf("%d\n%d",q,r);
        return 0;
}