//
//  Gossip.hpp
//  Gossips
//
//  Created by Matt Postema on 7/16/16.
//  Copyright © 2016 Matt Postema. All rights reserved.
//

#ifndef gossip_hpp
#define gossip_hpp

#include <string>

#include "noun.hpp"
#include "verb.hpp"
#include "prepositional_phrase.hpp"

/*
 The dog runs around the table
 The cat sits on the box
 The mayor eats at the diner
 The priest reads in the library
 The woman feeds ducks in the park
 */
class gossip {
    noun subject;
    verb predicate;
    prepositional_phrase object;
    
public:
    friend std::ostream& operator<<(std::ostream&, const gossip&);
};

#endif /* gossip_hpp */
