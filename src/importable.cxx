export module importable;

import <iostream>;

export void showMainMenu() {
    std::cout << "+-----------------------------------------------------+" << std::endl;
    std::cout << "|                  C++20 Console Games                |" << std::endl;
    std::cout << "+-----------------------------------------------------+" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "|                      1. New Game                    |" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "|                      2. Options                     |" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "|                      3. About                       |" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "|                      4. Exit                        |" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "+-----------------------------------------------------+" << std::endl;
}

export void showGameList() {
    std::cout << "+-----------------------------------------------------+" << std::endl;
    std::cout << "|                 List of Games                       |" << std::endl;
    std::cout << "+-----------------------------------------------------+" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "| 1. Guess the number                                 |" << std::endl;
    //std::cout << "| 2. Hangman                                          |" << std::endl;
    //std::cout << "| 3. Tic-tac-toe                                      |" << std::endl;
    // Add more games here
    std::cout << "|                                                     |" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "+-----------------------------------------------------+" << std::endl;
}

export void showDifficultOptions() {
    std::cout << "+-----------------------------------------------------+" << std::endl;
    std::cout << "|                Game Difficulty Options              |" << std::endl;
    std::cout << "+-----------------------------------------------------+" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "|                      1. Easy                        |" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "|                      2. Medium                      |" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "|                      3. Hard                        |" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "+-----------------------------------------------------+" << std::endl;
}

export void clearScreen() {
    std::cout << "\033[2J\033[1;1H";
}

export void showAboutMenu() {
    std::cout << "+-----------------------------------------------------+" << std::endl;
    std::cout << "|              About C++20 Console Games              |" << std::endl;
    std::cout << "+-----------------------------------------------------+" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "|  Welcome to C++20 Console Games! This is a          |" << std::endl;
    std::cout << "|  collection of classic games written in C++ using   |" << std::endl;
    std::cout << "|  the latest language features available in C++20.   |" << std::endl;
    std::cout << "|  The goal of this project is to demonstrate how     |" << std::endl;
    std::cout << "|  C++ can be used to create fun and interactive      |" << std::endl;
    std::cout << "|  console-based applications. Enjoy the games!       |" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "|  Created by: kybuivan                               |" << std::endl;
    std::cout << "|  Version: 0.1                                       |" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "+-----------------------------------------------------+" << std::endl;
}
