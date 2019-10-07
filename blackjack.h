#pragma once

#include <string>
#include <algorithm>
#include <regex>
#include <iostream>
#include <unordered_map>

// The possible cards
const std::vector<std::string> CARDS = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K",
 																	 "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K",
																	 "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K",
 														 			 "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};

/**
 * Plays a single game of Blackjack.
 */
void playGame();

/**
 * Deals one of the possible cards, then deletes that card from the deck.
 * @cards The vector of possible cards to deal.
 * @return The string representation of the dealt card.
 */
std::string dealCard(std::vector<std::string> & cards);

