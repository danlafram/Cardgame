//
//  Card.hpp
//  Cardgame
//
//  Created by Daniel Laframboise on 2016-11-19.
//  Copyright © 2016 Daniel. All rights reserved.
//

#ifndef Card_hpp
#define Card_hpp

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

#endif /* Card_hpp */

class Card {
    //List of private variables and functions
    private:
    string name;
    
    
    //List of public variables and functions
    public:
    Card();
    virtual int getCardsPerCoin(int coins);//How many cards necessary to receive corresponding number of coins
    virtual string getName();//returns full name of card (e.g., Ruby)
    virtual void print(const ostream& out);
    
    
    
    
};

