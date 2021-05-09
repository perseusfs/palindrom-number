#include<stdio.h>
int main()
{
	int x,kalan,ters=0,n;
	printf("palindrom number test:");
	scanf("%d", &x);
	
	n=x;
	
	while(n!=0)
		{
		kalan=n%10;
		printf("remainder:%d\n", kalan);
		ters=ters*10+kalan;
		printf("reverse:%d\n", ters);
		n/=10;
		printf("n:%d\n", n);
		
		}
	if (x==ters)
		printf("%d a palindrom number", x);
	else
		printf("%d not a palindrom number", x);
		
	return 0;
	
}
