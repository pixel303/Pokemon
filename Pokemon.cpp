#include <iostream>
#include <string>

using namespace std;

// Enum for Pokemon choices
enum PokemonChoice {
    Charmander = 1,  
    Bulbasaur = 2,       
    Squirtle = 3,       
    InvalidChoice = 4    
};

int main() {
    //Initialize chosen_pokemon with InvalidChoice
    PokemonChoice chosen_pokemon = InvalidChoice;

    cout << "Welcome to the world of Pokemon! I am Professor Oak.\n";
    cout << "I will be your guide to getting started.\n";
    cout << "Please enter your name: \n";
    string player_name;
    cin >> player_name;
    cout << "Congratulations, " << player_name << "! You're officially in the game now! \n";

    cout << "You can choose one of the following Pokemon:\n";
    cout << "1. Charmander - The fire type. A real hothead!\n";
    cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
    cout << "3. Squirtle - The water type. Cool as a cucumber!\n";
    cout << "Which Pokemon would you like to choose? Enter the number: ";

    int choice;
    cin >> choice;

    //Assign chosen Pokemon based on input
    switch (choice) {
    case Charmander:
        chosen_pokemon = Charmander;
        cout << "Charmander! A fiery choice!\n";
        break;
    case Bulbasaur:
        chosen_pokemon = Bulbasaur;
        cout << "A fine choice! Bulbasaur goes green!\n";
        break;
    case Squirtle:
        chosen_pokemon = Squirtle;
        cout << "You chose Squirtle! Splash Splash!\n";
        break;
    default:
        //Handle invalid choice by defaulting to Charmander
        chosen_pokemon = Charmander;
        cout << "Seems like that isn't one of the choices, but don't worry! You get Charmander by default. \n";
        break;
    }

    cout << "Let the Adventures Begin!";

    return 0;
}