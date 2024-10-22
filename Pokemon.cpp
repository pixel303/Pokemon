#include <iostream>
#include <string>
#include <cstdlib>


// Function prototypes
void waitForEnter();
void clearConsole();

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
        waitForEnter();
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

    // Method to explain the main quest
    void explainMainQuest(Player& player) {
        cout << "Professor Oak: Ah, " << player.name << ", let me tell you about your grand adventure that's about to unfold!\n";
        waitForEnter();

        cout << "Professor Oak: Becoming a Pokémon Master is no easy task. It demands courage, strategy, and sometimes a little bit of luck.\n";
        waitForEnter();

        cout << "Professor Oak: Your main mission is to collect all the Pokémon Badges and defeat the Pokémon League. Only then can you challenge the Elite Four and aim for the title of Champion.\n";
        waitForEnter();

        cout << player.name << ": Wait, isn’t that just like every other Pokémon game?\n";
        waitForEnter();

        cout << "Professor Oak: No breaking the fourth wall, " << player.name << "! This is serious business.\n";
        waitForEnter();

        cout << "Professor Oak: To achieve this, you must capture new Pokémon, battle wild creatures, challenge gym leaders, and keep your Pokémon healthy at the PokeCenter.\n";
        waitForEnter();

        cout << "Professor Oak: Remember, you can only carry a limited number of Pokémon. Choose wisely who you want on your team!\n";
        waitForEnter();

        cout << player.name << ": Piece of cake, right?\n";
        waitForEnter();

        cout << "Professor Oak: Ha! That’s what everyone thinks. But the path to becoming a Champion is filled with obstacles. Lose a battle, and it’s back to the start!\n";
        waitForEnter();

        cout << "Professor Oak: So, what do you say? Are you ready to embark on this epic journey to become the next Pokémon Champion?\n";
        waitForEnter();

        cout << player.name << ": Ready as I’ll ever be, Professor!\n";
        waitForEnter();

        cout << "Professor Oak: That’s the spirit! Now, your journey begins. Remember, it’s not just about battling—it’s about forming bonds with your Pokémon. Go, Trainer, the world of Pokémon awaits you!\n";
        waitForEnter();

        cout << "Professor Oak: Oh, and about the actual game loop… let’s just pretend I didn’t forget to set it up. Onwards!\n";
        waitForEnter();
    }
};

// Function to wait for the player to press Enter
void waitForEnter() {
    cout << "(Press Enter to continue...)\n";
    cin.ignore();
    cin.get();
}

// Function to clear the console
void clearConsole() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main() {
    ProfessorOak professor;
    Player player;

    
    
    
    clearConsole();
    professor.greetPlayer(player);
    professor.offerPokemonChoices();
    player.choosePokemon();

    clearConsole();
    professor.explainMainQuest(player);

    cout << "Professor Oak: " << player.chosenPokemon.name << " and you, " << player.name << ", are going to be the best of friends!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokémon!\n";

    return 0;
}