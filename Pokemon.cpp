#include <iostream>
#include <string>

using namespace std;

int main() {
    string player_name;

    cout << "Welcome to the game! Please enter your name: ";
    cin >> player_name;

    cout << "Congratulations, " << player_name << "! You're officially in the game now!" << endl;

    return 0;
}