#include <iostream>

using namespace std;

bool validateCard(string cardNum); 

int main() {
    string cardNum;
    cout << "Enter card number: ";
    cin >> cardNum;

    if (validateCard(cardNum)) {
        cout << "Valid." << endl;
    } else {
        cout << "Invalid." << endl;
    }

    return 0;
}

bool validateCard(string cardNum){
    int sum = 0;
    bool alternate = false;
    for (int i = cardNum.length() - 1; i >= 0; i--) {
        int n = cardNum[i] - '0';
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