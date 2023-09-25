#include<stdio.h>
int main()
{
	int n;
	printf("ENTER THE ARRAY SIZE ELEMENTS =");
	scanf("%d",&n);
	
	int X[n],i;
	
	printf("\n________ARRAY_ELEMENT________\n");
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&X[i]);
	}
	printf("\n________NEGETIVE_ARRAY_ELEMENT________\n");
	for(i=0;i<n;i++)
	{
		if(X[i]<0)
		printf("%d\n",X[i]);
	}
}