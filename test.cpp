#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "blackjack.h"

TEST_CASE("Deal card deals a valid card", "[method=dealCard]") {
		std::vector<std::string> cards;
		std::string card_val = "Only one card allowed";
		cards.push_back(card_val);
	
		std::string card = dealCard(cards);
		REQUIRE(card == card_val);
}
