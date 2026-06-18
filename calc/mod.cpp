#include "sub.h"

int mod(int x, int y)
{
	/// dev/b - mod.cpp modify
	while (x > y)
	{
		x = sub(x, y);
	}
	return x;
}
