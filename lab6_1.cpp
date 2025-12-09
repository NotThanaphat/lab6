#include <iostream>
using namespace std;

int main() {

    int n = 0;
    int evenCount = 0;
    int oddCount = 0;

    cout << "Enter an integer: ";
    cin >> n;

    while (n != 0) {

        if (n % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        cout << "Enter an integer: ";
        cin >> n;
    }

    cout << "#Even numbers = " << evenCount << endl;
    cout << "#Odd numbers = " << oddCount << endl;

    return 0;
}
