//
//  Hematite.cpp
//  Cardgame
//
//  Created by Daniel Laframboise on 2016-11-19.
//  Copyright © 2016 Daniel. All rights reserved.
//

#include "Hematite.hpp"



int Hematite::getCardsPerCoin(int coins){
    switch(coins){
        case 1 :
            return 3;
            break;
        case 2 :
            return 6;
            break;
        case 3 :
            return 8;
            break;
        case 4 :
            return 9;
            break;
        default: 
            return 0;
            break;
    }
    
}

string Hematite::getName(){
    return "Hematite";
}
