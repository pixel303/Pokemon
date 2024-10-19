#include <iostream>
#include<string>

using namespace std;

int main() {
    
    //Greeting the player by name
    cout << "Welcome to the world of Pokemon! I am Professor Oak.\n";
    cout << "I will be your guide to getting strated.\n";
    cout << "Please enter your name: \n";
    string player_name;
    cin >> player_name;
    cout << "Congratulations, " << player_name << "! You're officially in the game now! \n";

    //Giving the player Pokemon choices
    cout << "You can choose one of the following Pokemon:\n";
    cout << "1. Charmander\n2. Bulbasaur\n3. Squirtle\n";
    cout << "Which Pokemon would you like to choose? Enter the number: ";

    int choice;
    cin >> choice;
    string chosen_pokemon;

    //Storing the chosen pokemon and displaying a customised message for the pokemon with pikachu as default
    switch (choice) {
    case 1:
        chosen_pokemon = "Charmander";
        cout << "Charmander! A fiery choice!\n";
        break;

    case 2:
        chosen_pokemon = "Bulbasaur";
        cout << "A fine choice! Bulbasaur goes green!\n";
        break;

    case 3:
        chosen_pokemon = "Squirtle";
        cout << "You chose Squirtle! Splash Splash!\n";
        break;

    default:
        cout << "Seems like that isn't one of the choices, You can go with Pikachu. \n";
        chosen_pokemon = "Pikachu"; 
        break;
    }

    cout << "Let the Adventures Begin!";

    return 0;
}