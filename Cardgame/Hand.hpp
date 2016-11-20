//
//  Hand.hpp
//  Cardgame
//
//  Created by Daniel Laframboise on 2016-11-19.
//  Copyright © 2016 Daniel. All rights reserved.
//

#ifndef Hand_hpp
#define Hand_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

#include "Card.hpp"

#endif /* Hand_hpp */

class Hand : private std::vector<Card> {
    
    
    //List of private variables and functions
    private:
    
    
    //List of public variables and functions
    public:
    Card* play();
    Card* top();
    Card* operator[] (int);
    
    Hand(const istream&); //Add CardFactory* as parameter once implemented
    
    
};
