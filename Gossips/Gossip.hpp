//
//  Gossip.hpp
//  Gossips
//
//  Created by Matt Postema on 7/16/16.
//  Copyright © 2016 Matt Postema. All rights reserved.
//

#ifndef Gossip_hpp
#define Gossip_hpp

#include <string>

enum noun
{
    dog,
    cat,
    mayor,
    priest,
    woman
};

enum verb
{
    runs,
    sits,
    eats,
    reads,
    feeds
};

enum prepositional_phrase
{
    around_the_table,
    on_the_box,
    at_the_diner,
    in_the_library,
    in_the_park
};

/*
 The dog runs around the table
 The cat sits on the box
 The mayor eats at the diner
 The priest reads in the library
 The woman feeds ducks in the park
 */
class Gossip {
    noun subject;
    verb predicate;
    prepositional_phrase object;
    
public:
    std::string toString();
};



#endif /* Gossip_hpp */
