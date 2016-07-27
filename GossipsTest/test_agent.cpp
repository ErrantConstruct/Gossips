//
//  test_agent.cpp
//  Gossips
//
//  Created by Matt Postema on 7/27/16.
//  Copyright © 2016 Matt Postema. All rights reserved.
//

#include "catch.hpp"
#include "agent.hpp"

TEST_CASE("Agent learns new gossip") {
    gossip gossip;
    gossip.subject = noun::dog;
    gossip.predicate = verb::eats;
    gossip.object = prepositional_phrase::around_the_table;
    
    agent agent;
    agent.listen(1, gossip);
    CHECK(agent.learned_gossips.at(1).subject == noun::dog);
    CHECK(agent.learned_gossips.at(1).predicate == verb::eats);
    CHECK(agent.learned_gossips.at(1).object == prepositional_phrase::around_the_table);
}