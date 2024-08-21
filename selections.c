#include<stdio.h>
void main()
{
	int i=0,n,j,small,temp,c; 
	c++;
	printf("Enter the limit");
	c++;
	scanf("%d",&n);
	c++;
	int a[n];
	printf("Enter the elements");
	c++;
	for(i=0;i<n;i++)
	{	c++;
		scanf("%d",&a[i]);
		c++;
	}
	i=0;
	c++;
	while(i<n-1)
	{	c++;
		small=i;
		c++;
		j=i+1;
		c++;
		while(j<n)
		{
			if(a[small]>a[j])
			{	
				small=j;
				c++;
			}
			j++;
		}	
		if(i!=small)
		{	c++;
			temp=a[i];
			c++;
			a[i]=a[small];
			c++;
			a[small]=temp;
			c++;
		}
		i++;
	}
	printf("The sorted array is\n");
	c++;
	i=0;
	c++;
	for(i=0;i<n;i++)
	{c++;
	 printf("%d\n",a[i]);
	 c++;
	 }
	 printf("Space complexity=%d\n",(4*n)+24);
	c++;
	c++;
	printf("Time complexity=%d\n",c);
		
}			
					
