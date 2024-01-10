#include <iostream>
using namespace std;

int main() {
    /*
        break and continue
    */
    cout << "break example" << endl;
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            cout << "i == 4 => break" << endl;
            break;
        }
        cout << "i: " << i << endl;
    }

    cout << "continue example" << endl;
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            cout << "i == 4 continue";
            continue;
        }
        cout << "i: " << i << endl;
    }

    return 0;
}