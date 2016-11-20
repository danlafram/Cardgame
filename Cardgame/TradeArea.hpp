//
//  TradeArea.hpp
//  Cardgame
//
//  Created by Daniel Laframboise on 2016-11-19.
//  Copyright © 2016 Daniel. All rights reserved.
//

#ifndef TradeArea_hpp
#define TradeArea_hpp

#include <stdio.h>
#include <iostream>
#include <list>

#include "Card.hpp"



#endif /* TradeArea_hpp */

class TradeArea : public std::list<Card> {
    
    
    //List of private variables and functions
    private:
    
    
    //List of public variables and functions
    public:
    bool legal(Card*);
    Card* trade(string);
    int numCards();
    
    TradeArea(const istream&); //Add CardFactory* as parameter once implemented
};
