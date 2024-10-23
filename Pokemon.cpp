#include"Utility.hpp"
#include"Utility.cpp"
#include"PokemonChoice.hpp"
#include"PokemonType.hpp"
#include"Player.hpp"
#include"Player.cpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <limits> 

using namespace std;


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

/*Class representing Player
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
};*/

// Class representing Professor Oak
class ProfessorOak {
public:
    string name;

    ProfessorOak() : name("Professor Oak") {}

    void greetPlayer(Player& player) {
        cout << "Professor Oak: Hello there! Welcome to the world of Pokemon!\n";
        cout << "Professor Oak: My name is Oak. People call me the Pokemon Professor!\n";
        cout << "Professor Oak: But enough about me. Let's talk about you!\n";
        cout << "Professor Oak: First, tell me, what’s your name?\n\n[";
        cin >> player.name;
        cout << "]\n\nProfessor Oak: Ah, " << player.name << "! What a fantastic name!\n";
    }

    void offerPokemonChoices() {
        cout << "Professor Oak: I have three Pokemon here with me. They’re all quite feisty!\n";
        cout << "1. Charmander - The fire type. A real hothead!\n";
        cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
        cout << "3. Squirtle - The water type. Cool as a cucumber!\n";
    }

    // Method to explain the main quest
    void explainMainQuest(Player& player) {
        cout << "Professor Oak: Ah, " << player.name << ", let me tell you about your grand adventure that's about to unfold!\n";
        Utility::waitForEnter();

        cout << "Professor Oak: Becoming a Pokemon Master is no easy task. It demands courage, strategy, and sometimes a little bit of luck.\n";
        Utility::waitForEnter();

        cout << "Professor Oak: Your main mission is to collect all the Pokemon Badges and defeat the Pokemon League. Only then can you challenge the Elite Four and aim for the title of Champion.\n";
        Utility::waitForEnter();

        cout << player.name << ": Wait, isn’t that just like every other Pokemon game?\n";
        Utility::waitForEnter();

        cout << "Professor Oak: No breaking the fourth wall, " << player.name << "! This is serious business.\n";
        Utility::waitForEnter();

        cout << "Professor Oak: To achieve this, you must capture new Pokemon, battle wild creatures, challenge gym leaders, and keep your Pokemon healthy at the PokeCenter.\n";
        Utility::waitForEnter();

        cout << "Professor Oak: Remember, you can only carry a limited number of Pokemon. Choose wisely who you want on your team!\n";
        Utility::waitForEnter();

        cout << player.name << ": Piece of cake, right?\n";
        Utility::waitForEnter();

        cout << "Professor Oak: Ha! That’s what everyone thinks. But the path to becoming a Champion is filled with obstacles. Lose a battle, and it’s back to the start!\n";
        Utility::waitForEnter();

        cout << "Professor Oak: So, what do you say? Are you ready to embark on this epic journey to become the next Pokemon Champion?\n";
        Utility::waitForEnter();

        cout << player.name << ": Ready as I’ll ever be, Professor!\n";
        Utility::waitForEnter();

        cout << "Professor Oak: That’s the spirit! Now, your journey begins. Remember, it’s not just about battling—it’s about forming bonds with your Pokemon. Go, Trainer, the world of Pokemon awaits you!\n";
        Utility::waitForEnter();

        cout << "Professor Oak: Oh, and about the actual game loop… let’s just pretend I didn’t forget to set it up. Onwards!\n";
        Utility::waitForEnter();
    }
};

// Function to manage the game loop
void gameLoop(Player& player) {
    bool keepPlaying = true;
    while (keepPlaying) {
        Utility::clearConsole();
        int choice;
        cout << "What would you like to do next, " << player.name << "?\n";
        cout << "1. Battle Wild Pokemon\n";
        cout << "2. Visit PokeCenter\n";
        cout << "3. Challenge Gyms\n";
        cout << "4. Enter Pokemon League\n";
        cout << "5. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        Utility::clearInputBuffer();

        switch (choice) {
        case 1:
            cout << "You look around... but all the wild Pokemon are on vacation. Maybe try again later?\n";
            break;
        case 2:
            cout << "You head to the PokeCenter, but Nurse Joy is out on a coffee break. Guess your Pokemon will have to tough it out for now!\n";
            break;
        case 3:
            cout << "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!\n";
            break;
        case 4:
            cout << "You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!'\n";
            break;
        case 5:
            cout << "You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokemon training!'\n";
            keepPlaying = false;
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }
        Utility::waitForEnter();
    }
}


int main() {
    ProfessorOak professor;
    Player player;

    Utility::clearConsole();

    professor.greetPlayer(player);
    professor.offerPokemonChoices();
    player.choosePokemon();

    Utility::clearConsole();
    professor.explainMainQuest(player);

    cout << "Professor Oak: " << player.chosenPokemon.name << " and you, " << player.name << ", are going to be the best of friends!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";

    gameLoop(player); // Start the game loop

    return 0;
}