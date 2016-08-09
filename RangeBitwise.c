
#include <stdio.h>

int larger(int m, int n)
{
	return n > m ? n:m;
}
int smaller(int m, int n)
{
	return n < m ? n:m;
}

int bitwiseRange(int m,  int n)
{
	int top = larger(m, n);
	int bottom = smaller(m, n);
	int tracker = top;
	int product;
	while(bottom < top)
	{
		top = top&(top-1);
		product = top;
	}
	return product;
}

int main()
{
	int  result = bitwiseRange(4,1);
	printf("%d", result);
	printf("\n");
	return 0;
}
