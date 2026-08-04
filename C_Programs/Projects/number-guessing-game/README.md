# Number Guessing Game

A simple C program where the computer picks a random number between 1-100, and the player guesses until they get it right.

## How it works
- The program generates a random number using `rand()` and `srand(time(NULL))`
- The player enters guesses via `scanf()`
- After each guess, the program gives a hint: "too high" or "too low"
- Once the correct number is guessed, it shows the total number of guesses taken

## Concepts used
- Loops (`do-while`)
- Conditionals (`if-else`)
- Random number generation
- User input handling with `scanf()`

## How to run
```
gcc guessing_game.c -o guessing_game
./guessing_game
