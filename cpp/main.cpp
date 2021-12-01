#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int n = 10000;
    int a[n];
    for (int i = 0; i < n; i++)
        a[i] = n - i;
    //for (int i = 0; i < n; i++)
    //    cout << a[i] << endl;
    //cout << endl;
    clock_t start = clock();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    clock_t end = clock();
    //for (int i = 0; i < n; i++)
    //    cout << a[i] << endl;

    cout << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;
}