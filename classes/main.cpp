#include <iostream>
using namespace std;

// 定義類別
class MyClass {
    public:
        int myNum;
        string myString;
        void myMethod() {
            cout << "Hello World!" << endl;
        }
        void myMethod2();
};

// 外部定義類別的function
void MyClass::myMethod2() {
    cout << "myMethod2()" << endl;
}

int main() {
    MyClass myObj; // 創建MyClass物件
    myObj.myNum = 24;
    myObj.myString = "Some text";

    cout << myObj.myNum << endl;
    cout << myObj.myString << endl;
    myObj.myMethod();
    myObj.myMethod2();

    return 0;
}