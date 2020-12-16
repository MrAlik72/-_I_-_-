#include <stdio.h>
int main()
{
	char p;
	int c=0;
        int a[10]={0};
        while((p=getchar())!=EOF)
	{
		if(p>='0'&&p<='9')
		{
			if(++a[p-'0']>c)
				c++;			
		}
	
	}
	while(c>0)
	{
	
		for(int i=0;i<10;i++)
		{
			if(a[i]>=c)	
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		
		}
		printf("\n");
		c--;
	}
        printf("\n");
	for(int i=0;i<10;i++)
	{
		printf("%d ",i);
	}
        printf("\n");
	return 0;
	
}
