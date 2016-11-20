//
//  Table.hpp
//  Cardgame
//
//  Created by Daniel Laframboise on 2016-11-19.
//  Copyright © 2016 Daniel. All rights reserved.
//

#ifndef Table_hpp
#define Table_hpp

#include <stdio.h>
#include <iostream>

#include "Player.hpp"
#include "Deck.hpp"
#include "DiscardPile.hpp"
#include "TradeArea.hpp"



#endif /* Table_hpp */

class Table {
    
    Player p1;
    Player p2;
    Deck deck;
    DiscardPile discardpile;
    TradeArea tradeArea;
    
    //List of private variables and functions
    private:
    
    
    //List of public variables and functions
    public:
    bool win(std::string&);
    void printHand(bool);
    
    Table(const istream&); //Add CardFactory* as parameter once implemented
};
