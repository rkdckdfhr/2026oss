#include "dive.h"
#include "sub.h"

int dive(int x, int y)
{
	// dev/c modify dive.cpp
	int cnt = 0;
	while (x > y)
	{
		cnt++;
		x = sub(x, y);
	}

	return cnt;
}
