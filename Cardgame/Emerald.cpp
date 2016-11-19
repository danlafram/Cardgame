//
//  Emerald.cpp
//  Cardgame
//
//  Created by Daniel Laframboise on 2016-11-19.
//  Copyright © 2016 Daniel. All rights reserved.
//

#include "Emerald.hpp"


int Emerald::getCardsPerCoin(int coins){
    switch(coins){
        case 1 :
            return 0;
            break;
        case 2 :
            return 2;
            break;
        case 3 :
            return 3;
            break;
        case 4 :
            return 0;
            break;
        default:
            return 0;
            break;
    }
    
}

string Emerald::getName(){
    return "Emerald";
}
