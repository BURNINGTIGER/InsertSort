
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

template <typename Iterator>
void InsertSort(Iterator f, Iterator l)
{
	if (f > l)
		return;
	for (Iterator i = f + 1; i != l; ++i)
	for (Iterator j = i; j != first && *j < *(j - 1); --j)
		std::iter_swap(j - 1, j);
}
