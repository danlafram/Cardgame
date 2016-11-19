//
//  Quartz.cpp
//  Cardgame
//
//  Created by Daniel Laframboise on 2016-11-19.
//  Copyright © 2016 Daniel. All rights reserved.
//

#include "Quartz.hpp"
#include "Card.hpp"

using namespace std;


int Quartz::getCardsPerCoin(int coins){
    switch(coins){
        case 1 :
            return 4;
            break;
        case 2 :
            return 6;
            break;
        case 3 :
            return 8;
            break;
        case 4 :
            return 10;
            break;
        default:
            return 0;
            break;
    }
    
}

string Quartz::getName(){
    return "Quartz";
}
