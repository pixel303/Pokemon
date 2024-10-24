#include "Player.hpp"  
#include <iostream>

using namespace std;

// Default constructor
Player::Player() : name("Trainer"), chosenPokemon() {}

// Parameterized constructor
Player::Player(string p_name, Pokemon p_chosenPokemon)
    : name(p_name), chosenPokemon(p_chosenPokemon) {}

// Copy constructor
Player::Player(const Player& other)
    : name(other.name), chosenPokemon(other.chosenPokemon) {}

// Function to choose a Pokemon
void Player::choosePokemon() {
    int choice;
    cout << "Which Pokemon would you like to choose? Enter the number: ";
    cin >> choice;

    switch (static_cast<PokemonChoice>(choice)) {
    case PokemonChoice::Charmander:
        chosenPokemon = Pokemon("Charmander", PokemonType::Fire, 100);
        cout << "Professor Oak: A fiery choice! Charmander is yours!\n";
        break;
    case PokemonChoice::Bulbasaur:
        chosenPokemon = Pokemon("Bulbasaur", PokemonType::Grass, 100);
        cout << "Professor Oak: A fine choice! Bulbasaur is yours!\n";
        break;
    case PokemonChoice::Squirtle:
        chosenPokemon = Pokemon("Squirtle", PokemonType::Water, 100);
        cout << "Professor Oak: A cool choice! Squirtle is yours!\n";
        break;
    default:
        chosenPokemon = Pokemon("Pikachu", PokemonType::Electric, 100);
        cout << "Professor Oak: Invalid choice, but don't worry! Pikachu is yours by default.\n";
        break;
    }
    Utility::waitForEnter();
}