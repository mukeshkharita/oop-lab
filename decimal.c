#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k=0;
    char a;
    scanf("%c",&a);
    i = a;
    j=i;
    int b[3];
     printf("%d ",j);
    while(j!=0)
    {
        b[k]=j%8;
        j = j/8;
        k++;
    }
    for(j=2;j>=0;j--)
    printf("%d",b[j]);
     printf("\n");
}
     
     
     
     
     
     
     
     
        
        
