#include <iostream>
using namespace std;

int main() {
    /*
        變數: 可被改變的數
    */
    int myNum = 15;
    myNum = 10;
    cout << myNum;
    double myFloatNum = 5.99;
    char myLetter = 'D';
    string myText = "Hello";
    cout << myText << myLetter << endl;

    int x = 5;
    int y = 6;
    int sum = x + y;
    cout << "sum: " << sum << endl;

    int a = 5, b = 6, c = 50;
    cout << a + b + c << endl;

    /*
        常數: 不能被改變的數
    */
    const float PI = 3.14;
    cout << "圓周率: " << PI << endl;

    return 0;
}
