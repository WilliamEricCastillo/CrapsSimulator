# Craps Simulator

## Introduction
This repository contains a C++ program that simulates a simplified version of the popular dice game, Craps. Craps is a casino game where players roll two dice and bet on the outcome of the rolls. The objective of the game is to establish a "point" and then roll that point again before rolling a 7 to win.

This program allows you to play and simulate a game of Craps without the need for physical dice.


## How to Run the Program
To run the Craps simulator, follow these steps:
1. Clone the Repository: <br>
   ```bash
   git clone https://github.com/WilliamEricCastillo/CrapsSimulator.git

2. Navigate to the Project Directory:<br>
   ```bash
   cd CrapsSimulator

3. Compile the Program:<br>
   ```bash
   g++ -o craps_simulator main.cpp die.cpp roll.cpp shooter.cpp point_phase.cpp come_out_phase.cpp

4. Run the Program:<br>
   ```bash
   ./craps_simulator


## How to Play Craps

1. The game begins with the "come out" phase.
2. In this phase, you'll see a series of dice rolls. The program will display each roll's outcome.
3. The goal of the "come out" phase is to roll a 7 or 11 (a "natural") to win. If you roll a 2, 3, or 12 (craps), you lose this phase.
4. If you roll any other number, it becomes your "point," and you proceed to the "point" phase.

## Point Phase 

1. In the "point" phase, the program will display your established point value.
2. Now, your objective is to roll that point value again before rolling a 7. If you succeed, you win the game. If you roll a 7, you lose.
3. The program will display each roll's outcome during this phase.
4. After the "point" phase concludes, the program will display the game's final outcome.

## Rules and Notes

1. The program uses random number generation to simulate dice rolls.
2. The game can be played an unlimited number of times.
3. The program will display the result of each roll, whether it's a "natural," "craps," "point," or "seven out."
4. Enjoy the game and have fun!

## Contributor 
* William Castillo
