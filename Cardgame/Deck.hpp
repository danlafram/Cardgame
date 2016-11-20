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
#include <vector>

#include "Card.hpp"

#endif /* Deck_hpp */



class Deck : private vector<Card> {
    
    
    
    //List of private variables and functions
    private:
    
    
    //List of public variables and functions
    public:
    Deck(const istream&); //add CardFactory* as a parameter once CardFactory is implemented
    Card* draw();
    
    
    
};
