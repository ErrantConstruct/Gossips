//
//  main.cpp
//  Gossips
//
//  Created by Matt Postema on 7/16/16.
//  Copyright © 2016 Matt Postema. All rights reserved.
//

#include <iostream>

#include "gossip.hpp"

int main(int argc, const char * argv[]) {

    gossip test;
    test.subject = noun::cat;
    test.predicate = verb::eats;
    test.object = prepositional_phrase::around_the_table;
    
    std::cout << test << std::endl;
    return 0;
}
