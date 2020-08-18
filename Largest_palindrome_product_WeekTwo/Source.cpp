#include<stdio.h>
int main()
{ 
	int x = 0,  y = 0, product = 0, revprod = 0, reverse = 0, max = 0;
	for (x = 100; x < 1000; x++)
	{
		for (y = 100; y < 1000; y++)
		{
			product = x * y;
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