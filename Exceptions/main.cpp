#include <iostream>
using namespace std;

int main() {
    try {
        int age = 15;
        if (age >= 18) {
            cout << "已授予存取權限 - 您已經足夠大了。" << endl;
        } else {
            throw (age);
        }
    } catch (int myNum) {
        cout << "訪問被拒絕 - 您必須年滿 18 歲。" << endl;
        cout << "年齡：" << myNum << endl;
    }

    try {
        int age = 15;
        if (age >= 18) {
            cout << "已授予存取權限 - 您已經足夠大了。" << endl;
        } else {
            throw 505;
        }
    } catch (...) {
        cout << "訪問被拒絕 - 您必須年滿 18 歲。" << endl;
    } 
}