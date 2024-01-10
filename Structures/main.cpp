#include <iostream>
using namespace std;

int main() {
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

    return 0;
}