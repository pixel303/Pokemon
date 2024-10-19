#include <iostream>
#include <string>

using namespace std;

// Enum class for Pokemon choices
enum class PokemonChoice {
    Charmander = 1,
    Bulbasaur = 2,
    Squirtle = 3,
    InvalidChoice = 4
};

// Function to convert integer input to PokemonChoice
PokemonChoice getPokemonChoice(int choice) {
    switch (choice) {
    case 1: return PokemonChoice::Charmander;
    case 2: return PokemonChoice::Bulbasaur;
    case 3: return PokemonChoice::Squirtle;
    default: return PokemonChoice::InvalidChoice;
    }
}

int main() {
    // Initialize chosen_pokemon with InvalidChoice
    PokemonChoice chosen_pokemon = PokemonChoice::InvalidChoice;

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

    // Convert integer input to PokemonChoice
    chosen_pokemon = getPokemonChoice(choice);

    // Respond based on chosen Pokemon
    switch (chosen_pokemon) {
    case PokemonChoice::Charmander:
        cout << "Charmander! A fiery choice!\n";
        break;
    case PokemonChoice::Bulbasaur:
        cout << "A fine choice! Bulbasaur goes green!\n";
        break;
    case PokemonChoice::Squirtle:
        cout << "You chose Squirtle! Splash Splash!\n";
        break;
    default:
        // Handle invalid choice by defaulting to Charmander
        cout << "Seems like that isn't one of the choices, but don't worry! You get Charmander by default. \n";
        chosen_pokemon = PokemonChoice::Charmander;
        break;
    }

    cout << "Let the Adventures Begin!";

    return 0;
}