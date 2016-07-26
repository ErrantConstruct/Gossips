//
//  testGossip.cpp
//  Gossips
//
//  Created by Matt Postema on 7/26/16.
//  Copyright © 2016 Matt Postema. All rights reserved.
//

#include <iostream>

#include "catch.hpp"
#include "gossip.hpp"
#include "noun.hpp"
#include "verb.hpp"
#include "prepositional_phrase.hpp"

TEST_CASE("Gossip elements are assigned", "[gossip]") {
    gossip test_gossip;
    
    SECTION("Setting subject") {
        test_gossip.subject = noun::dog;
        CAPTURE(test_gossip.subject);
        CHECK(test_gossip.subject == noun::dog);
    }
    
    SECTION("Setting predicate") {
        test_gossip.predicate = verb::eats;
        CHECK(test_gossip.predicate == verb::eats);
    }
    
    SECTION("Setting prepostitional phrase") {
        test_gossip.object = prepositional_phrase::in_the_park;
        CHECK(test_gossip.object == prepositional_phrase::in_the_park);
    }
    
    test_gossip.subject = noun::dog;
    test_gossip.predicate = verb::eats;
    test_gossip.object = prepositional_phrase::in_the_park;
    std::cout << &test_gossip << std::endl;
}
