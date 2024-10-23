#include"PokemonChoice.hpp"
#include"PokemonType.hpp"
#include"Utility.hpp"

class Player {
public:
    string name;
    Pokemon chosenPokemon;

    // Default constructor
    Player() : name("Trainer"), chosenPokemon() {}

    // Parameterized constructor
    Player(string p_name, Pokemon p_chosenPokemon)
        : name(p_name), chosenPokemon(p_chosenPokemon) {}

    // Copy constructor
    Player(const Player& other)
        : name(other.name), chosenPokemon(other.chosenPokemon) {}

    static void choosePokemon();
};
