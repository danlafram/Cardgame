//
//  Ruby.hpp
//  Cardgame
//
//  Created by Daniel Laframboise on 2016-11-19.
//  Copyright © 2016 Daniel. All rights reserved.
//

#ifndef Ruby_hpp
#define Ruby_hpp

#include <stdio.h>

#endif /* Ruby_hpp */

#include "Card.hpp"

class Ruby : public Card {
    //List of private variables and functions
    private:
    
    
    //List of public variables and functions
    public:
    int getCardsPerCoin(int coins);
    string getName();
};
