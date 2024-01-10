#include <iostream>
using namespace std;

int main() {
    /*
        資料型別
    */
    int intNumber = 5;          // 整數
    float floatNumber = 6.66;   // 單精浮點數: 通常占用4個位元組(32位元)的空間，範圍±3.4e38
    double doubleNumber = 9.99; // 雙精浮點數: 通常占用8個位元組(64位元)的空間，範圍±1.7e308 (double 占用的記憶體數會比float還多)
    char letter = 'A';          // char: 只能儲存單一字元，並且使用''包圍，主要處理單一字元的操作
    bool boolean = true;        // 布林值
    string stringText;          // 字串

    float f1 = 35e3;
    double d1 = 12E4;
    cout << f1 << endl;
    cout << d1 << endl;

    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun << endl;
    cout << isFishTasty << endl;

    char myGrade = 'B';
    cout << myGrade << endl;

    string greeting = "Hello, This is my first C++ Program.";
    cout << greeting << endl;

    return 0;
}