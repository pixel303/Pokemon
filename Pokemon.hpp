#ifndef POKEMON_HPP
#define POKEMON_HPP

#include <string>
  
enum class PokemonType;

class Pokemon {
public:
    std::string name;
    PokemonType type;
    int health;

    // Default constructor
    Pokemon();

    // Parameterized constructor
    Pokemon(std::string p_name, PokemonType p_type, int p_health);

    // Copy constructor
    Pokemon(const Pokemon& other);

    void attack();
};

#endif // POKEMON_HPP