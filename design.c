#include <stdio.h>
void counting(int h);
int main()
{
	int t;
	scanf("%d",&t);
	counting(t);
	
}
void counting(int a)
{
    int temp=1,i,j,c=1;
    int count=a/10;
    for(j=2;j<12;j++)
    {
        for(i=0;i<count;i++)
        { 
            printf("%d ",temp);
            temp=temp+10;
        }
        printf("\n");
        
        temp=j;
    }
    
}

