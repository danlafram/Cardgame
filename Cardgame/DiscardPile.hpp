//
//  DiscardPile.hpp
//  Cardgame
//
//  Created by Daniel Laframboise on 2016-11-19.
//  Copyright © 2016 Daniel. All rights reserved.
//

#ifndef DiscardPile_hpp
#define DiscardPile_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

#include "Card.hpp"

#endif /* DiscardPile_hpp */

class DiscardPile : private vector<Card> {
    
    
    //List of private variables and functions
    private:
    
    
    //List of public variables and functions
    public:
    Card* pickUp();
    Card* top();
    void print(std::ostream&);
    
    DiscardPile(const istream& ); //add CardFactory* as parameter once implemented
    

    
    
};
