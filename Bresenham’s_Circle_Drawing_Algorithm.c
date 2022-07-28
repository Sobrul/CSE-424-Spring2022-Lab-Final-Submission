#include <stdio.h>


void Circle(int xc, int yc, int x, int y)
{

	printf("(%d, %d) ", xc+x, yc+y);

	printf("(%d, %d) ", xc-x, yc+y);

	printf("(%d, %d) ", xc+x, yc+y);

	printf("(%d, %d) ", xc-x, yc-y);

	printf("(%d, %d) ", xc+y, yc+x);

	printf("(%d, %d) ", xc-y, yc+x);

	printf("(%d, %d) ", xc+y, yc-x);

	printf("(%d, %d) ", xc-y, yc-x);
}

void circleBres(int xc, int yc, int r)
{
	int x = 0, y = r;
	int d = 3 - 2 * r;
	Circle(xc, yc, x, y);
	while (y >= x)
	{

		
		x++;

		if (d > 0)
		{
			y--;
			d = d + 4 * (x - y) + 10;
		}
		else
			d = d + 4 * x + 6;

	}
}


int main()
{
	int xc = 50, yc = 50, r = 30;
	circleBres(xc, yc, r);
	return 0;
}
