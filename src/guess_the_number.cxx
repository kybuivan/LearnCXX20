export module guess_the_number;
import <iostream>;
import <random>;

export class GuessTheNumber {
public:
    GuessTheNumber(int mLowerBound, int mUpperBound) :
        mLowerBound(mLowerBound),
        mUpperBound(mUpperBound),
        mRandomNumber(generateRandomNumber())
    {}

    // Create a function to play the game
    void play();
private:
    // Create a function to generate a random number
    int generateRandomNumber();

private:
    // Create a variable to store the lower bound of the random number
    int mLowerBound = 1;

    // Create a variable to store the upper bound of the random number
    int mUpperBound = 100;

    // Create a variable to store the random number
    int mRandomNumber = 0;

};

void GuessTheNumber::play()
{
    int guess = -1;
    int numGuesses = 0;
    while (guess != mRandomNumber) {
        std::cout << "Enter a guess between " << mLowerBound << " and " << mUpperBound << ": ";
        std::cin >> guess;
        numGuesses++;
        if (std::cin.fail()) {
            std::cout << "Invalid input. Please enter a number.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else if (guess < mLowerBound || guess > mUpperBound) {
            std::cout << "Invalid guess. Please enter a number between " << mLowerBound << " and " << mUpperBound << ".\n";
        } else if (guess < mRandomNumber) {
            std::cout << "Too low. Try again.\n";
        } else if (guess > mRandomNumber) {
            std::cout << "Too high. Try again.\n";
        }
    }
    std::cout << "Congratulations! You guessed the number " << mRandomNumber << " in " << numGuesses << " guesses.\n";
}

int GuessTheNumber::generateRandomNumber()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(mLowerBound, mUpperBound);
    return dis(gen);
}