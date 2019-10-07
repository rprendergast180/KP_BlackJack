# KP_BlackJack
A simple console BlackJack game.

This Blackjack game runs a relatively simple set of game logic that allows a player to cycle through a game of Blackjack. 

The only non-primative structures required are a constant vector (holding the cards to be dealt) and an unordered_map (implementing the hashmap data structure) to allow for O(1) value lookup.

I chose to implement it in C++ because it provides tools with the least level of abstraction over the console. Since the console in the backbone of the input/output system, I chose to use a language that will allow for all the features needed (which C++14's advanced libraries does) while also remaining simple to compile and execute (in contrast to some of the alternatives, like Python, which while nice to program in requires a Python interpreter and all the overhead inherent to it).

In order to strictly adhere to the suggested time limit, I implemented only a simple testing suite (using the Catch2 library) containing exactly one unit test for the one unit method. This exists both as a test for that method and as a proof of concept of the general extendability of the project.

## Instructions for running
1. ```make clean```
This removes all object files and the executables
2. ```make blackjack```
This creates the blackjack binary
3. ```./blackjack```
This runs a blackjack game
4. ```make test```
Creates the test library
5. ```./test```
Runs the unit test suite
