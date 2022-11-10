#include <iostream>
#include <iomanip>
#include <time.h>
#include <cmath>
using namespace std;
void Array(int* a, const int n, int i)
{
    if (i < n)
    {
        a[i] = -50 + rand() % 100;
        return Array(a, n, i + 1);
    }
}
void Print(const int* const a, const int n, int i)
{
    if (i < n)
    {
        if (i == 0)
            cout << "{";
        cout << a[i];
        if (i != n - 1)
            cout << ",";
        else cout << "}" << endl;
        return Print(a, n, i + 1);
    }
}
int Count(const int* a, const int n, int i)
{
    if (i < n)
    {
        if (a[i] < 0)
            return 1 + Count(a, n, i + 1);
        else
            return Count(a, n, i + 1);
    }
    else return 0;
}
int Min(int* a, const int n)
{
    int index = 0;
    int min = a[0];
    for (int i = 0; i < n; i++)
        if (abs(min) > abs(a[i]))
        {
            min = a[i];
            index = i;
        }
    return index;
}
int Sum(int* a, const int n)
{
    int S = 0;
    for (int i = 0; i < n; i++)
        if (i > Min(a, n))
            S += abs(a[i]);
    return S;
}
int Replace(int* a, const int n)
{
    int minus = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            minus = a[i] = pow(a[i], 2);
        }
    }
    return minus;
}
void Sort(int* a, const int n)
{
    for (int i = 1; i < n; i++) 
        for (int j = 0; j < n - i; j++) 
            if (a[j] > a[j + 1]) 
            { 
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
}
int main()
{
    srand((unsigned)time(NULL));
    int n;
    cout << "n = "; cin >> n;
    int* a = new int[n];
    Array(a, n, 0);
    Print(a, n, 0);
    cout << "Number of negative elements = " << Count(a, n, 0) << endl;
    cout << "Min = " << Min(a, n) << endl;
    cout << "Sum = " << Sum(a, n) << endl;
    Replace(a, n);
    Sort(a, n);
    cout << "Sorted array = "; Print(a, n, 0);
}
