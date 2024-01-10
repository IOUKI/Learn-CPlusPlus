#include <iostream>
using namespace std;

int main() {
    /*
        運算符
    */
    int sum1 = 100 + 50;
    int sum2 = sum1 + 250;
    int sum3 = sum2 + sum2;
    cout << "sum3: " << sum3 << endl;

    cout << "sum1 * 2: " << sum1 * 2 << endl;
    cout << "sum3 / 2: " << sum3 / 2 << endl;
    cout << "sum1 % 5: " << sum1 % 5 << endl;
    cout << "++sum1: " << ++sum1 << endl;
    cout << "--sum1: " << --sum1 << endl;
    sum3 += 5;
    cout << "sum3 += 5: " << sum3 << endl;

    /*
        &&: and
        ||: or
        !: not
        ==: 等於
        !=: 不等於
        >: 大於
        <: 小於
        >=: 大於等於
        <=: 小於等於
    */
    cout << (sum1 > sum2) << endl;

    return 0;
}