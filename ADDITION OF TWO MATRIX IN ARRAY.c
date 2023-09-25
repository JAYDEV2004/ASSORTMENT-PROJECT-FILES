#include<stdio.h>
int main()
{
	int r,c;
	
	printf("ENTER THE ROW SIZE =");
	scanf("%d",&r);
		
	printf("ENTER THE COLUMN SIZE =");
	scanf("%d",&c);
	
	int a[r][c];
	int b[r][c];
	int sum[r][c];
	int i,j;
	
	printf("\n\n________ENTER THE *a* ARRAY ELEMENTS______\n\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("possition of row and column = a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("\n\n________ENTER THE *b* ARRAY ELEMENTS______\n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("possition of row and column = b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	printf("\n\n________SUM OF THE *a* AND *b* ARRAY ELEMENTS______\n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
	        printf("sum = %d\n",sum[i][j]);
		}
		printf("\n");
	}
    

}