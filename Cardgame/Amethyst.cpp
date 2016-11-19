//
//  Amethyst.cpp
//  Cardgame
//
//  Created by Daniel Laframboise on 2016-11-19.
//  Copyright © 2016 Daniel. All rights reserved.
//

#include "Amethyst.hpp"


int Amethyst::getCardsPerCoin(int coins){
    switch(coins){
        case 1 :
            return 2;
            break;
        case 2 :
            return 3;
            break;
        case 3 :
            return 4;
            break;
        case 4 :
            return 5;
            break;
        default:
            return 0;
            break;
    }
    
}

string Amethyst::getName(){
    return "Amethyst";
}
