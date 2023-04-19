import importable;
import <iostream>;
import guess_the_number;

void handleInput(int choice, bool& exit) {
    clearScreen();
    switch (choice) {
        case 1:
            // Clear the menu and show the game list
            showGameList();
            // Get user input for the game to play
            std::cout << "Enter the number of the game you want to play: ";
            std::cin >> choice;
            // Play the selected game
            clearScreen();
            switch (choice) {
                case 1:
                {
                    // Add code to play Guess the Number game
                    // Create a new instance of the game and play it
                    GuessTheNumber game(1, 100);
                    game.play();
                    break;
                }
                // Add cases for other games
                default:
                    std::cout << "Invalid choice. Please choose a number from the game list." << std::endl;
                    break;
            }
            break;
        case 2:
            showDifficultOptions();
            std::cout << "Enter the number of the difficulty you want to play: ";
            std::cin >> choice;
            clearScreen();
            switch (choice) {
                case 1:
                    std::cout << "Easy difficulty is not implemented yet." << std::endl;
                    break;
                case 2:
                    std::cout << "Medium difficulty is not implemented yet." << std::endl;
                    break;
                case 3:
                    std::cout << "Hard difficulty is not implemented yet." << std::endl;
                    break;
                default:
                    std::cout << "Invalid choice. Please choose a number from the difficulty options." << std::endl;
                    break;
            }
            break;
        case 3:
            showAboutMenu();
            // press any key to back to main menu
            std::cout << "Press any key to continue...";
            std::cin.ignore();
            std::cin.get();
            clearScreen();
            break;
        case 4:
            exit = true;
            break;
        default:
            std::cout << "Invalid choice. Please choose a number from the menu." << std::endl;
            break;
    }
}

int main(int argc, char* argv[])
{
    int choice = 0;
    bool exit = false;
    while (!exit) {
        showMainMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        handleInput(choice, exit);
    }
    return 0;
}