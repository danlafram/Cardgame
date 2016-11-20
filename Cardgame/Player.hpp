//
//  Player.hpp
//  Cardgame
//
//  Created by Daniel Laframboise on 2016-11-19.
//  Copyright © 2016 Daniel. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include <iostream>

#include "Card.hpp"
#include "Chain.hpp"

#endif /* Player_hpp */

class Player {
    
    
    //List of private variables and functions
    private:
    int playerNumber;
    int coins;
        
    
    
    //List of public variables and functions
    public:
    Player(std::string&);
    std::string getName();
    int getNumCoins();
    int getMaxNumChains();
    int getNumChains();
    Chain& operator[] (int i);
    void buyThirdChain();
    void printHand(std::ostream&, bool);
    Player(const istream&); //Add CardFactory* as parameter once implemented
    
    
    
};
