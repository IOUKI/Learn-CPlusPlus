#include <iostream>
using namespace std;

void myFunction1() {
    cout << "I just got executed!" << endl;
}

// function 帶參數
void argsFunction(string fname) {
    cout << "My name is " << fname << endl;
}

// function 預設參數
void defaultArgsFunction(string country = "Norway") {
    cout << "Country: " << country << endl;
}

// function 多個參數
void multipleArgsFunction(string fname, int age) {
    cout << "fname: " << fname << ", age: " << age << endl;
}

// function 回傳參數
// 如果希望函數傳回一個值，可以使用資料型別（如int、 string等）代替void
int returnKeyword(int x) {
    return 5 + x;
}
int addTwoIntNumber(int x, int y) {
    return x + y;
}

// 透過引用傳遞資料
// 以下是交換兩個變數數值的函式
void swapNums(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

// 傳入陣列
void printArrayNumbers(int numbers[5]) {
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << endl;
    }
}

/*
函數重載
透過函數重載，多個函數可以具有相同的名稱和不同的參數
*/
int plusFunc(int x, int y) {
    return x + y;
}
double plusFunc(double x, double y) {
    return x + y;
}

// 遞迴
int sum(int k) {
    if (k > 0) {
        return k + sum(k - 1);
    } else {
        return 0;
    }
}

void myFunction2();

int main() {
    myFunction1();
    myFunction2();
    argsFunction("Lan San");
    defaultArgsFunction("Taiwan");
    defaultArgsFunction();
    multipleArgsFunction("Lan", 24);
    cout << returnKeyword(3) << endl;
    int z = addTwoIntNumber(1, 2);
    cout << z << endl;

    int firstNum = 10;
    int secondNum = 20;
    cout << "firstNum: " << firstNum << ", secondNum: " << secondNum << endl;
    swapNums(firstNum, secondNum);
    cout << "firstNum: " << firstNum << ", secondNum: " << secondNum << endl;

    int myNumbers[5] = {10, 20, 30, 40, 50};
    printArrayNumbers(myNumbers);

    int myNum1 = plusFunc(8, 5);
    double myNum2 = plusFunc(3.3, 5.55);
    cout << "Int: " << myNum1 << endl;
    cout << "Double: " << myNum2 << endl;

    int result = sum(10);
    cout << result << endl;

    return 0;
}

void myFunction2() {
    /*
    函數宣告在上面main()
    函數定義在下面main()
    這將使程式碼組織得更好並且更易於閱讀
    */
    cout << "myFunction2" << endl;
}
