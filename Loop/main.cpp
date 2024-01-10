#include <iostream>
using namespace std;

int main() {
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

    return 0;
}