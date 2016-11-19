//
//  Obsidian.cpp
//  Cardgame
//
//  Created by Daniel Laframboise on 2016-11-19.
//  Copyright © 2016 Daniel. All rights reserved.
//

#include "Obsidian.hpp"


int Obsidian::getCardsPerCoin(int coins){
    switch(coins){
        case 1 :
            return 3;
            break;
        case 2 :
            return 5;
            break;
        case 3 :
            return 7;
            break;
        case 4 :
            return 8;
            break;
        default:
            return 0;
            break;
    }
    
}

string Obsidian::getName(){
    return "Obsidian";
}
