#include "blackjack.h"

/**
 * The card values.
 */
std::unordered_map<std::string, int> CARD_VALUE = {
	{"2", 2},
	{"3", 3},
	{"4", 4},
	{"5", 5},
	{"6", 6},
	{"7", 7},
	{"8", 8},
	{"9", 9},
	{"10", 10},
	{"J", 10},
	{"Q", 10},
	{"K", 10},
	{"A1", 1},
	{"A11", 11}
};


void playGame() {
	std::vector<std::string> deck = CARDS;

	std::cout << "Welcome to Blackjack!" << std::endl;

	int value = 0;

	std::string hand = "";
	std::string card = dealCard(deck);
	
	if (card == "A") {
		std::string one_or_eleven;

		while (one_or_eleven != "1" && one_or_eleven != "11") {
			std::cout << "You've been dealt an ace. Would you like it to be wortd 1 or 11? ";
			std::cin >> one_or_eleven;
		}

		card += one_or_eleven;
	}

	hand += card + " ";
	value += CARD_VALUE[card];

	std::string input_str = "";

	while (input_str != "s") {
		std::cout << "Your hand is: " << hand << std::endl;
		std::cout << "Your hand's value is: " << value << std::endl;
		std::cout << "Type h for a hit or s to stand: ";
		std::cin >> input_str;

		if (input_str == "h") {
			card = dealCard(deck);

			if (card == "A") {
				std::string one_or_eleven;

				while (one_or_eleven != "1" && one_or_eleven != "11") {
					std::cout << "You've been dealt an ace. Would you like it to be wortd 1 or 11? ";
					std::cin >> one_or_eleven;
				}

				card += one_or_eleven;
			}

			hand += card + " ";
			value += CARD_VALUE[card];
		}

		if (value >= 21) {
			break;
		}
	}

	std::cout << "Your final hand is " << hand << std::endl;
	std::cout << "Your hand's value is " << value << std::endl;
}

std::string dealCard(std::vector<std::string> & cards) {
	int idx = rand() % cards.size();
	std::string ret = cards[idx];
	
	cards.erase(cards.begin() + idx);
	
	return ret;
}

