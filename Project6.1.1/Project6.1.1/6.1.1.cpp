#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void mas(int* r, const int size, const int max, const int min)
{
    int M;
    for (int i = 0; i < size; i++) {
        M = r[i] = min + rand() % (max - min + 1);
        cout << M << " ";
    }
    cout << endl;

}

void sum(int* r, const int size)
{
    int S = 0;

    for (int i = 0; i < size; i++) {

        if ((r[i] > 0) && (i / 4 != 0))
        {
            S += r[i];
        }
    }
    cout << endl;
    cout << "Sum = " << S << endl;

}

void count(int* r, const int size)
{
    int C = 0;
    for (int i = 0; i < size; i++) {

        if ((r[i] > 0) && (i / 4 != 0))
        {
            C++;
        }
    }
    cout << endl;
    cout << "Count = " << C << endl;
}

void obn(int* r, const int size)
{
    for (int i = 0; i < size; i++) {


        if ((r[i] > 0) && (i / 4 != 0))
        {
            r[i] = 0;
        }
        cout << r[i] << " ";
    }
}

int main()
{
    srand((unsigned)time(NULL));
    const int n = 23;
    int r[n];
    int max = 25;
    int min = -19;
    mas(r, n, max, min);
    sum(r, n);
    count(r, n);
    obn(r, n);

    return 0;
}