#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

long long getMaxSubSum(int a[], int n) {
    long long s = 0;
    long long s1 = s;
    for (int i = 0; i < n; i++) {
      s += a[i];
      s1 = max(s1, s);
      if (s < 0) s = 0;
    }
    
    return s1;
}

int main() {
    int n = 10000;
    int a[n];
    for (int i = 0; i < n; i++)
        a[i] = pow(-1, i) * i;
    /*for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;*/
    clock_t start = clock();
    long long res = 0;
    for (int i = 0; i < n; i++) {
        a[0]++;
        res += getMaxSubSum(a, n);
        //cout << res << endl;
    }
    clock_t end = clock();

    cout << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;

    return res > 0 ? 0 : 1;
}