#include <iostream>
#include <string>

using namespace std;

// Enum class for Pokemon types
enum class PokemonType {
    Electric,
    Fire,
    Grass,
    Water
};

// Class representing a Pokemon
class Pokemon {
public:
    string name;
    PokemonType type;
    int health;

    // Default constructor
    Pokemon() : name("Pikachu"), type(PokemonType::Electric), health(10) {}

    // Parameterized constructor
    Pokemon(string p_name, PokemonType p_type, int p_health)
        : name(p_name), type(p_type), health(p_health) {}

    // Copy constructor
    Pokemon(const Pokemon& other)
        : name(other.name), type(other.type), health(other.health) {}

    void attack() {
        cout << name << " attacks with a powerful move!" << endl;
    }
};

// Class representing a Player (Pokemon Trainer)
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

    void choosePokemon() {
        int choice;
        cout << "Which Pokemon would you like to choose? Enter the number: ";
        cin >> choice;

        switch (choice) {
        case 1:
            chosenPokemon = Pokemon("Charmander", PokemonType::Fire, 100);
            cout << "Professor Oak: A fiery choice! Charmander is yours!\n";
            break;
        case 2:
            chosenPokemon = Pokemon("Bulbasaur", PokemonType::Grass, 100);
            cout << "Professor Oak: A fine choice! Bulbasaur is yours!\n";
            break;
        case 3:
            chosenPokemon = Pokemon("Squirtle", PokemonType::Water, 100);
            cout << "Professor Oak: A cool choice! Squirtle is yours!\n";
            break;
        default:
            chosenPokemon = Pokemon("Charmander", PokemonType::Fire, 100);
            cout << "Professor Oak: Invalid choice, but don't worry! Charmander is yours by default.\n";
            break;
        }
    }
};

// Class representing Professor Oak
class ProfessorOak {
public:
    string name;

    ProfessorOak() : name("Professor Oak") {}

    void greetPlayer(Player& player) {
        cout << "Professor Oak: Hello there! Welcome to the world of Pokémon!\n";
        cout << "Professor Oak: My name is Oak. People call me the Pokémon Professor!\n";
        cout << "Professor Oak: But enough about me. Let's talk about you!\n";
        cout << "Professor Oak: First, tell me, what’s your name?\n\n[";
        cin >> player.name;
        cout << "]\n\nProfessor Oak: Ah, " << player.name << "! What a fantastic name!\n";
    }

    void offerPokemonChoices() {
        cout << "Professor Oak: I have three Pokémon here with me. They’re all quite feisty!\n";
        cout << "1. Charmander - The fire type. A real hothead!\n";
        cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
        cout << "3. Squirtle - The water type. Cool as a cucumber!\n";
    }
};

int main() {
    ProfessorOak professor;
    Player player;

    professor.greetPlayer(player);
    professor.offerPokemonChoices();
    player.choosePokemon();

    cout << "Professor Oak: " << player.chosenPokemon.name << " and you, " << player.name << ", are going to be the best of friends!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokémon!\n";

    return 0;
}