#include <iostream>
using namespace std;

int main() {
//打印99乘法表
for (int i = 9; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
        cout << j << "*" << i << "=" << i * j << " ";
    }
    cout << endl;
}

    return 0;
}