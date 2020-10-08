#include <stdio.h>
main9try2()
 {
	int num1, num2, sum, i;
	printf("Enter num1 : ");
	scanf("%d",&num1);
	printf("Enter num2 : ");
	scanf("%d",&num2);
	if(num1<num2)
	{
		if(num1%2==0)
		{
			num1++;
		}
		for(i=num1;i<num2;i+=2)
		{
			sum+=i;
		}
		printf("Sum of odd numbers between %d to %d = %d", --num1, num2, sum);
	}
	else
	{
		if(num2%2==0)
		{
			num2++;
		}
		for(i=num2;i<num1;i+=2)
		{
			sum+=i;
		}
		printf("Sum of odd numbers between %d to %d = %d", --num2, num1, sum);
	}
}

