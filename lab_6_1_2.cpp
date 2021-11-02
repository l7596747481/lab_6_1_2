#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}
void Print(int* a, const int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}
int Number(int* a, const int size, int count, int i)
{
	if (a[i] % 2 == 1 && a[i] > 0)
		count++;
	if (i < size - 1)
		Number(a, size, count, i + 1);
	else
		return count;
}
int Sum(int* a, const int size, int i)
{
	if (i < size)
	{
		if (a[i] % 2 == 1 && a[i] > 0)
			return a[i] + Sum(a, size, i + 1);
		else
			return Sum(a, size, i + 1);
	}
	else
		return 0;
}
int Mode(int* a, const int size, int i)
{
	if (a[i] % 2 == 1 && a[i] > 0)
		a[i] = 0;
	if (i < size - 1)
		Mode(a, size, i + 1);
	else
		return 0;
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 23;
	int a[n];
	int Low = -25;
	int High = 80;
	Create(a, n, Low, High, 0);
	Print(a, n, 0);
	cout << "  " << "N = " << Number(a, n, 0, 0) << endl;
	cout << "  " << "S = " << Sum(a, n, 0) << endl;
	Mode(a, n, 0);
	Print(a, n, 0);
	return 0;
}