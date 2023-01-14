#include <iostream>

using namespace std;

bool validateCard(string cardNumber); 

int main() {
    string cardNumber;
    cout << "Enter card number: ";
    cin >> cardNumber;

    if (validateCard(cardNumber)) {
        cout << "Valid." << endl;
    } else {
        cout << "Invalid." << endl;
    }

    return 0;
}

bool validateCard(string cardNumber){
    int sum = 0;
    bool alternate = false;
    for (int i = cardNumber.length() - 1; i >= 0; i--) {
        int n = cardNumber[i] - '0';
        if (alternate) {
            n *= 2;
            if (n > 9) {
                n = (n % 10) + 1;
            }
        }
        sum += n;
        alternate = !alternate;
    }
    return (sum % 10 == 0);
}