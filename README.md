# GiocoRandom - A Simple C++ Guessing Game

## Overview
GiocoRandom is a two-level guessing game where users and the computer take turns guessing numbers. The game offers two unique modes:
1. **User vs. Computer**: The user guesses a randomly generated number.
2. **Computer vs. Computer**: The user sets a number, and the computer tries to guess it.

### Features:
- **Interactive Menu**: Allows users to select the game level.
- **Customizable Gameplay**: Configure the range of numbers and number of attempts.
- **Dynamic Feedback**: The user receives hints such as "Hot" or "Cold."
- **Victory and Game-Over Screens**: Inform users of the game's result.

## File Structure
The repository contains the following files:
- `main.cpp`: Main entry point and level selection logic.
- `Funzioni.h`: Implements core game functionality (menu, random number generation, gameplay).
- `GiocoRandom.cbp`: A Code::Blocks project file for easy setup.

## Included Libraries:
- `<iostream>`
- `<stdlib.h>`
- `<string>`
- `<ctime>`
- `<windows.h>`

## Functions in `Funzioni.h`:
- `void menu()`: Displays the game menu with ASCII art.
- `int selezionalivello()`: Lets the user select a game level.
- `void regolamento()`: Displays level rules and accepts user parameters.
- `void livello1()`: Implements "User vs. Computer" gameplay.
- `void livello2()`: Implements "Computer vs. Computer" gameplay.
- `void generanumero()`: Random number generator for both levels.
- `string acquafuoco()`: Provides feedback like "Hot" or "Cold" for the user.

## Gameplay
### Level 1: User vs. Computer
- **User-defined parameters**: Range of numbers to guess and maximum number of attempts.
- **Gameplay**: The computer generates a random number, and the user guesses with feedback ("Hot" or "Cold").

### Level 2: Computer vs. Computer
- **User-defined parameters**: The number to be guessed and difficulty level (Easy, Medium, Hard).
- **Gameplay**: The computer guesses the user's number, with feedback guiding its guesses to optimize performance.

## Installation Instructions:
1. Clone or download the repository.
2. Open the `GiocoRandom.cbp` file in Code::Blocks.
3. Compile and run the project.

