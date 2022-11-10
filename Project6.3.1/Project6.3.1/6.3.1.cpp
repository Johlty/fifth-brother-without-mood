#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
void Inverse(int* a, const int n)
{
	int tmp;
	for (int i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
int main()
{
	srand((unsigned)time(NULL)); 
	const int n = 9;
	int a[n];
	int Low = -10;
	int High = 10;
	Create(a, n, Low, High);
	Print(a, n);
	Inverse(a, n);
	Print(a, n);
	return 0;
}