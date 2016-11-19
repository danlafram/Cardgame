//
//  Ruby.cpp
//  Cardgame
//
//  Created by Daniel Laframboise on 2016-11-19.
//  Copyright © 2016 Daniel. All rights reserved.
//

#include "Ruby.hpp"


int Ruby::getCardsPerCoin(int coins){
    switch(coins){
        case 1 :
            return 2;
            break;
        case 2 :
            return 4;
            break;
        case 3 :
            return 5;
            break;
        case 4 :
            return 6;
            break;
        default:
            return 0;
            break;
    }
    
}

string Ruby::getName(){
    return "Ruby";
}
