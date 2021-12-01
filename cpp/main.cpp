#include <iostream>
#include <ctime>
using namespace std;

void check(int& i, int& j)
{
    if (i > j) {
        int tmp = i;
        i = j;
        j = tmp;
    }
}

int main()
{
    int n = 10000;
    int a[n];
    for (int i = 0; i < n; i++)
        a[i] = n - i;
    /*for (int i = 0; i < n; i++)
        cout << a[i] << endl;
    cout << endl;*/
    clock_t start = clock();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            check(a[i], a[j]);
        }
    }
    clock_t end = clock();
    /*for (int i = 0; i < n; i++)
        cout << a[i] << endl;*/

    cout << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;
}