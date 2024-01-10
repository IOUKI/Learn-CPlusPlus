#include <iostream>
using namespace std;

int main() {
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

    return 0;
}