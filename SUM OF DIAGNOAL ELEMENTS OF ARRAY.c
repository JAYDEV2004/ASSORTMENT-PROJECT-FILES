#include<stdio.h>
int main()
{
	 int r,c,sum=0;
	 
	 printf("ENTER THE ROW SIZE =  ");
	 scanf("%d",&r);
	 
	 printf("ENTER THE COLUMN SIZE = ");
	 scanf("%d",&c);
	 
	 printf("\n...........ENTER THE ARRAY ELEMENTS........\n");
	 
	 int a[r][c],i,j;
	 for(i=0;i<r;i++)
	 {
	 	for(j=0;j<c;j++)
	 	{
	 		printf("index number of a[%d][%d] = ",i,j);
	 		scanf("%d",&a[i][j]);
		 }
		 printf("\n");
	 }
	 for(i=0;i<r;i++)
	 {
	 	for(j=0;j<c;j++)
	 	{
	 		if(i==j)
	 		{
	 		sum = sum + a[i][j];
			 }
	 	    
		 }
	   	 printf("\n");
	 }
	 
	 printf("DIOGNOAL SUM OF ARRAY ELEMENTS = %d\n",sum);
}