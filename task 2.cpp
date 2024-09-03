#include<stdio.h>
int main()
{
	int a, b;
	printf("Input value for A:-");
	scanf("%d",&a);
	printf("Input value for B:-");
	scanf("%d",&b);
	printf("\nBefore swapping the value of a: %d", a);
	printf("\nBefore swapping the value of b: %d\n", b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swapping the value of a :  %d",a);
	printf("\nAfter swapping the value of b :  %d",b);

}
