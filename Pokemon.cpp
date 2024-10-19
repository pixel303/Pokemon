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

// Class representing a Pokemon
class Pokemon {
public:
    string name;
    string type;
    int health;

    Pokemon(string n, string t, int h) : name(n), type(t), health(h) {}

    void attack() {
        cout << name << " attacks with a powerful move!" << endl;
    }
};

// Class representing a Player (Pokemon Trainer)
class Player {
public:
    string name;
    Pokemon chosenPokemon;

    Player() : chosenPokemon("None", "None", 0) {}

    void choosePokemon() {
        int choice;
        cout << "Which Pokemon would you like to choose? Enter the number: ";
        cin >> choice;

        switch (choice) {
        case 1:
            chosenPokemon = Pokemon("Charmander", "Fire", 100);
            cout << "Professor Oak: A fiery choice! Charmander is yours!\n";
            break;
        case 2:
            chosenPokemon = Pokemon("Bulbasaur", "Grass", 100);
            cout << "Professor Oak: A fine choice! Bulbasaur is yours!\n";
            break;
        case 3:
            chosenPokemon = Pokemon("Squirtle", "Water", 100);
            cout << "Professor Oak: A cool choice! Squirtle is yours!\n";
            break;
        default:
            chosenPokemon = Pokemon("Charmander", "Fire", 100);
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
    // Create the main game objects
    ProfessorOak professor;
    Player player;

    // Professor greets the player and offers Pokemon choices
    professor.greetPlayer(player);
    professor.offerPokemonChoices();
    player.choosePokemon();

    // Acknowledge the chosen Pokemon
    cout << "Professor Oak: " << player.chosenPokemon.name << " and you, " << player.name << ", are going to be the best of friends!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokémon!\n";

    return 0;
}