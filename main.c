#include <stdio.h>
#include "include/multi.h"
int main()
{
    int multi (int a,int b);
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=multi(a,b);
    printf("%d",c);
    return 0;
}
