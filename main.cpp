#include <iostream>
#include <string>
using namespace std;

int main()
{
    // cout: 輸出
    // endl: 換行等同\n
    /*
        這是多行註解
    */
    cout << "Hello World\n"
         << endl;
    cout << "I am learning C++\n";

    /*
        變數
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
        常數
    */
    const float PI = 3.14;
    cout << "圓周率: " << PI << endl;

    /*
        使用者輸入
    */
    int userInputVar;
    // cout << "請輸入一個數字: " << endl;
    // cin >> userInputVar;
    // cout << "您輸入的數字: " << userInputVar << endl;

    /*
        資料型別
    */
    int intNumber = 5;              // 整數
    float floatNumber = 6.66;       // 單精浮點數: 通常占用4個位元組(32位元)的空間，範圍±3.4e38
    double doubleNumber = 9.99;     // 雙精浮點數: 通常占用8個位元組(64位元)的空間，範圍±1.7e308 (double 占用的記憶體數會比float還多)
    char letter = 'A';              // char: 只能儲存單一字元，並且使用''包圍，主要處理單一字元的操作
    bool boolean = true;            // 布林值
    string stringText;              // 字串

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

    /*
        字串
    */
    string firstName = "John ";
    string lastName = "Doe";
    // string fullName = firstName + lastName;
    string fullName = firstName.append(lastName);
    cout << fullName << endl;

    string string10 = "10";
    string string20 = "20";
    cout << string10 + string20 << endl;

    string longText = "fjeiafjiowefiwaehuiofehuiofhawio";
    cout << "字串長度: " << longText.length() << endl;
    cout << "字串長度: " << longText.size() << endl;

    string helloText = "Hello";
    cout << "HelloText 第一個字元: " << helloText[0] << endl;
    helloText[0] = 'A'; // 替換一個字元只能使用char型別來替換
    cout << "修改helloText第一個字元: " << helloText << endl;

    cout << "如何插入雙引號\"\"" << endl;
    cout << "如何插入單引號\'" << endl;
    cout << "如何插入單一反斜線\\" << endl;

    return 0;
}