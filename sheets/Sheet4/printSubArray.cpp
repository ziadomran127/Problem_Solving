#include <iostream>

using namespace std;

int a[1000000];

int main() {

    int n, l, r;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> l >> r;
    for (int i = l - 1; i < r; i++) {
        cout << a[i] << ' ';
    }
}
