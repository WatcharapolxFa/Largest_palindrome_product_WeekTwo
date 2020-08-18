#include<stdio.h>
int main()
{ 
	int num1 = 0 , num2=0, product = 0, revprod = 0, reverse = 0, max = 0;
	for (num1 = 100; num1 < 1000 ;num1++)
	{
		for (num2 = 100; num2 <1000 ;num2++)
		{
			product = num1 * num2;
			revprod = product;
			reverse = 0;
			while (revprod > 0)
			{
				reverse = reverse * 10 + revprod % 10;
				revprod /= 10;
			}
			if (reverse == product)
			{
				if (product > max)
				{
					max = product;

				}

			}
		}
	}
	printf("%d", max);
	return 0;
}