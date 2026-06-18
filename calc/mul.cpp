#include "add.h"

int mul(int x, int y)
{
	/// dev/b - mul.cpp modify
	int sum=0;

	for (int i = 0;i < y;i++)
	{
		sum = add(x, y);
	}
	return sum;
}
