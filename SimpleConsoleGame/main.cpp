#include <iostream>

using namespace std;

int main() {
    string playerName;
    int playerHealth = 100;
    int enemyHealth = 100;

    cout << "Enter your name: ";
    cin >> playerName;

    while (playerHealth > 0 && enemyHealth > 0) {

        cout << "Player health: " << playerHealth << endl;
        cout << "Enemy health: " << enemyHealth << endl; cout << endl;


        cout << playerName << ", choose an action (attack or defend): "; 
        string playerAction;
        cin >> playerAction; cout << endl;

        if (playerAction == "attack") {
            enemyHealth -= 10;
            cout << "You attacked the enemy and did 10 damage!" << endl;
        } else if (playerAction == "defend") {
            cout << "You defended and took no damage!" << endl;
        } else {
            cout << "Invalid action, please try again." << endl;
        }


        if (enemyHealth > 0) {
            cout << "The enemy attacked and did 10 damage!" << endl;
            playerHealth -= 10;
        }
    }


    if (playerHealth <= 0) {
        cout << "Game over. You lost." << endl;
    } else if (enemyHealth <= 0) {
        cout << "Congratulations! You won the game!" << endl;
    }

    return 0;
}
