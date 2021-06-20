#include<stdio.h>
int main()
{
	int n,p,r,fact =1 ,i,j,fact1 = 1,permutation;
	printf("\nEnter an integer in n: ");
	scanf("%d",&n);
	
	/*printf("\nEnter an integer in r: ");
	scanf("%d",&r);
	p = n-r;
	printf("\nThe value of p is: %d",p);*/
	
	for(i = 1;i <= n; i++)
	{
		fact = fact * i;
		
	}
	
		printf("\nThe factorial of %d is %d",n,fact);
			
	printf("\nEnter an integer in r: ");
	scanf("%d",&r);
	p = n-r;
	printf("\nThe value of p(n-r) is: %d\n",p);
		
		for(j = 1; j <= p; j++ )
		{
		fact1 = fact1 * j;
		}
		
		printf("\nThe factorial of %d is %d",p,fact1);
	
	permutation = (fact)/(fact1);
		printf("\nPermutation (npr) is: %d",permutation);
		
}
