#include <iostream>
using namespace std;

int main() {
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