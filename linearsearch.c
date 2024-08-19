#include<stdio.h>
void main()
{
	int n,i,x,count=0,time=0;
	time++;
	time++;
	printf("Enter the limit");
	time++;
	scanf("%d",&n);
	time++;
	int a[n];
	printf("Enter the elements");
	time++;
	for(i=0;i<n;i++)
	{	
	  time++;
	  scanf("%d",&a[i]);
  	time++;
	}
	time++;	
	printf("Enter the number to be searched");
	time++;
	scanf("%d",&x);
	time++;
	for(i=0;i<n;i++)
	{
	   time++; 
		 if (a[i]==x)
		{
		  time++;
		  count++;
			printf("The element is found at %d\n",i+1);
			time++;
	 }
 }
	time++;
	if (count>0)
	{
		time++;
		printf("Item found %d times\n",count);	
		time++;
	}
	else
	{
	  printf("Item not found");
	  time++;
	}
	printf("Space complexity=%d\n",(4*n)+20);
	time++;
	time++;
	printf("Time complexity=%d\n",time);	
	
}
