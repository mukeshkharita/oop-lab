#include <stdio.h>
void design(int a);
int main()
{
    int t;
    scanf("%d",&t);
    design(t);
}
void design(int h)
{
    int i;
    for(i=1;i<11;i++)
    printf("%d * %d = %d \n",i,h,i*h);
}
