#include <iostream>
using namespace std;

int main() {
    /*
        Array
    */
    string cars[4] = { "Volvo", "BMW", "Ford", "Mazda" };
    int myNub[3] = { 10, 20, 30 };
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
    string omitArraySize[] = { "Volvo", "BMW", "Ford" };
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
        {"E", "F", "G", "H"} };
    string letters2[2][2][2] = {
        {{"A", "B"},
         {"C", "D"}},
        {{"E", "F"},
         {"G", "H"}} };
}