#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>
#include "PokemonType.hpp" 
#include "PokemonChoice.hpp" 
#include "Utility.hpp"      

class Pokemon;

class Player {
public:
    std::string name;        
    Pokemon chosenPokemon;   

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