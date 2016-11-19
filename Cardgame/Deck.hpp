//
//  Deck.hpp
//  Cardgame
//
//  Created by Daniel Laframboise on 2016-11-19.
//  Copyright © 2016 Daniel. All rights reserved.
//

#ifndef Deck_hpp
#define Deck_hpp

#include <stdio.h>
#include <iostream>

#include "Card.hpp"

#endif /* Deck_hpp */

const int CARDS_PER_DECK = 52; // Number of cards per deck, can change upon configuration of program


class Deck {
    
    //List of private variables and functions
    private:
    
    
    //List of public variables and functions
    public:
    Deck();
    Card dealCards();
    void shuffle();
    
    
};
