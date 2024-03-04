#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;

    cout << "Cac boi so cua " << n << " voi cac so tu 1 den 20 la:" << endl;
    for (int i = 1; i <= 20; ++i) {
        cout << n * i << " ";
    }

    return 0;
}
