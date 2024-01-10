#include <iostream>
using namespace std;

int main() {
    /*
        References(引用)
    */
    string food = "Pizza";
    string& meal = food;
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