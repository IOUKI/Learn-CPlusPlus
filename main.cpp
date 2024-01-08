#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    // cout: 輸出
    // endl: 換行等同\n
    /*
        這是多行註解
    */
    cout << "Hello World\n" << endl;
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

    /*
        數學
        需include cmath

        abs(x) 返回x的絕對值
        acos(x) 返回x的反餘弦值
        asin(x) 返回x的反正弦值
        atan(x) 返回x的反正切值
        cbrt(x) 返回x的立方根
        ceil(x) 返回將x四舍五入到最接近的整數的值
        cos(x) 返回x的余弦值
        cosh(x) 返回x的雙曲余弦值
        exp(x) 返回e的x次方的值
        expm1(x) 返回e的x次方减1的值
        fabs(x) 返回浮點數x的絕對值
        fdim(x, y) 返回x和y之間的正差
        floor(x) 返回將x四捨五入到最接近的整數的值
        hypot(x, y) 返回sqrt(x^2 + y^2)而不會出現中間溢出或下溢
        fma(x, y, z) 返回x*y+z，而不會失去精度
        fmax(x, y) 返回浮點數x和y中的最大值
        fmin(x, y) 返回浮點數x和y中的最小值
        fmod(x, y) 返回x/y的浮點餘數
        pow(x, y) 返回x的y次方的值
        sin(x) 返回x的正弦值（x以弧度表示）
        sinh(x) 返回雙曲正弦值
        tan(x) 返回角度的正切值
        tanh(x) 返回雙曲正切值
    */
    cout << "找出最大數: " << max(5, 10) << endl;
    cout << "找出最小數: " << min(5, 10) << endl;
    cout << "平方根: " << sqrt(64) << endl;
    cout << "四捨五入: " << round(2.6) << endl;
    cout << "log(自然對數)" << log(2) << endl;

    /*
        switch
    */
    int numberOne = 1;
    switch (numberOne)
    {
    case 1:
        cout << "數字一" << endl;
        break;
    case 2:
        cout << "數字二" << endl;
        break;
    case 3:
        cout << "數字三" << endl;
        break;
    default:
        cout << "找不到對應數" << endl;
    }

    /*
        while loop
    */
    int i = 0;
    cout << "while loop" << endl;
    while (i < 5)
    {
        cout << "i: " << i << endl;
        i++;
    }

    /*
        do/while loop
    */
    i = 0;
    cout << "do/while loop" << endl;
    do
    {
        cout << "i: " << i << endl;
        i++;
    } while (i < 5);

    /*
        for loop
    */
    cout << "for loop" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "i: " << i << endl;
    }

    /*
        foreach
    */
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers)
    {
        cout << i << endl;
    }

    /*
        break and continue
    */
    cout << "break example" << endl;
    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            cout << "i == 4 => break" << endl;
            break;
        }
        cout << "i: " << i << endl;
    }

    cout << "continue example" << endl;
    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            cout << "i == 4 continue";
            continue;
        }
        cout << "i: " << i << endl;
    }

    /*
        Array
    */
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    int myNub[3] = {10, 20, 30};
    cout << "cars[0]: " << cars[0] << endl;
    cars[0] = "Opel";
    cout << "new cars[0]: " << cars[0] << endl;
    /*
        foreach
        for (type variableName : arrayName) {
            // code block to be executed
        }
    */
    // Omit Array Size
    string omitArraySize[] = {"Volvo", "BMW", "Ford"};
    int omitElement[5];
    omitElement[0] = 0;
    omitElement[1] = 1;

    // get array size
    cout << "cars array size: " << sizeof(cars) << " bytes." << endl;
    // get array length
    int getArrayLength = sizeof(cars) / sizeof(string); // 什麼資料型態就將型態帶入sizeof
    cout << "cars array length: " << getArrayLength << endl;

    /*
        多維陣列
    */
    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}};
    string letters2[2][2][2] = {
        {{"A", "B"},
         {"C", "D"}},
        {{"E", "F"},
         {"G", "H"}}};

    /*
        Structures (struct)
    */
    struct {
        int myNum;
        string myString;
    } myStructure, myStructure2, myStructure3; // 使用,可以新增變數

    myStructure.myNum = 1;
    myStructure.myString = "hello world";

    cout << "myStructure: " << myStructure.myNum << ", " << myStructure.myString << endl;

    // Named Structures(命名結構)
    struct myDataType {
        int myNum;
        string myString;
    };

    myDataType myVar;
    myVar.myNum = 20;
    myVar.myString = "hello";

    /*
        References(引用)
    */
    string food = "Pizza";
    string &meal = food;
    cout << "food: " << food << endl;
    cout << "meal: " << meal << endl;
    meal = "P";
    cout << "food: " << food << endl;
    cout << "meal: " << meal << endl;
    cout << "food記憶體位址: " << &food << endl;
    cout << "meal記憶體位址: " << &meal << endl;

    /*
        指針
        也可以使用以下方法使用指針
        string* mystring; <= 首選用法
        string *mystring;
        string * mystring;
    */
    string* ptr = &food; // 創建指針
    cout << "food: " << food << endl;
    cout << "foot memory address: " << &food << endl;
    cout << "ptr(取得記憶體位址): " << ptr << endl;
    cout << "*ptr(取得記憶體位址的數值): " << *ptr << endl;
    *ptr = "Hamburger";
    cout << "修改指針的數值: food " << food << " *ptr " << *ptr << endl;

    return 0;
}