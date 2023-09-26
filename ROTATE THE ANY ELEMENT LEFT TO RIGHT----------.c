#include<stdio.h>
int main()
{
	/*
	
	rotate the any one elements out of array 
	
	*/
	int i,p;
	
	int x[10]={1,12,123,1234,12345,123456,1234567,12345678,123456789,987654321};
	p=x[7];
	for(i=7;i>=1;i--)
	{
		x[i]=x[i-1];
		
	}
	x[i]=p;
	for(i=0;i<=9;i++)
	{
		printf("%d\t",x[i]);
	}
	
	return 0;
}