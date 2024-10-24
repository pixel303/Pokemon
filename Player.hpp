#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>
#include "PokemonType.hpp"  // Include the header for PokemonType
#include "PokemonChoice.hpp" // Include the header for PokemonChoice
#include "Utility.hpp"      // Include the header for Utility

class Player {
public:
    std::string name;        // Player's name
    Pokemon chosenPokemon;   // The Pokemon chosen by the player

    // Default constructor
    Player();

    // Parameterized constructor
    Player(std::string p_name, Pokemon p_chosenPokemon);

    // Copy constructor
    Player(const Player& other);

    // Function to choose a Pokemon
    void choosePokemon();
};

#endif // PLAYER_HPP