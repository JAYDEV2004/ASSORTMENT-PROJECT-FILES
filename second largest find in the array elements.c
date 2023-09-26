#include<stdio.h>
int main()
{
	int x[1000],n,lg,s_lg,i;
	
	printf("Enter the size of array\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("index number x[%d] = ",i);
		scanf("%d",&x[i]);
	}
	
	printf("First and Second largest number in Array Element is :\n");
	 for(i=0;i<n;i++)
	 {
	 	if(lg<x[i])
	 	{
	 		s_lg=lg;
	 		lg=x[i];
	 		
		 }
		 else if(s_lg<x[i])
	     {
	     	s_lg= x[i];
	     	
		   }  
	 }
     printf("first largest element is = %d\n",lg);

	 printf("second largest element is = %d\n",s_lg);
	 
	 return 0;
}