//
//  Chain.hpp
//  Cardgame
//
//  Created by Daniel Laframboise on 2016-11-19.
//  Copyright © 2016 Daniel. All rights reserved.
//

#ifndef Chain_hpp
#define Chain_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

#endif /* Chain_hpp */

class Chain : private std::vector<Card> { //Private due to problems with absence of virtual destructor (StackOverflow)
    
    //List of private variables and functions
    private:
    
    
    //List of public variables and functions
    public:
    Chain(const istream&); //add CardFactory* as parameter once implemented
    int sell();
    
    
};
