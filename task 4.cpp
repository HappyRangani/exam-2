#include<stdio.h>
main()
{
	int a,b,c;
	
	 printf("Enter first number :-");
	 scanf("%d",&a);
	 printf("Enter second number :-");
	 scanf("%d",&b);
	 printf("Enter first number :-");
	 scanf("%d",&c);
	 
	 if(a<b)
	 {
	 	if(a<c)
	 	{
	 		printf("A is Minimum");
		}
		else
		{
			printf("C is Minimum");
		}
	 }
	 else
	 {
	 	if(b<c)
	 	{
	 		printf("B is minimum");
		}
		else
		{
			printf("C is minimum");
		}
	 }
	 
}