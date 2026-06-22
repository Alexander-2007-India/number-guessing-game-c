# Number Guessing Game in C

A simple command-line number guessing game written in C.

## Features

* Generates a random number between 1 and 100
* Provides hints if the guess is too high or too low
* Counts the number of guesses
* Displays a congratulatory message when the correct number is guessed

## Concepts Used

* Variables
* Input and Output
* Conditional Statements (`if`, `else if`)
* Loops (`do-while`)
* Random Number Generation (`rand()`, `srand()`)

## How to Run

1. Compile the program:
   gcc guessing_game.c -o guessing_game

2. Run the executable:
   ./guessing_game

## Example

Guess the number: 50
Higher number please!

Guess the number: 75
Lower number please!

Guess the number: 63
Congratulations! You guessed the number in 3 guesses.
