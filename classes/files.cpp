#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // 創建或打開檔案
    ofstream MyFile;
    MyFile.open("D:/c++/Learn-CPlusPlus/Classes/filename.txt");

    // 寫入檔案
    MyFile << "檔案可能很棘手，但是他很有趣!";

    // 關閉檔案
    MyFile.close();

    return 0;
}