//
// Created by Matt Postema on 7/27/16.
//

#ifndef GOSSIPS_AGENT_H
#define GOSSIPS_AGENT_H


#include <vector>
#include <map>
#include "gossip.hpp"

struct agent {
    //maps the gossip to the agent it was received from
    std::map<int, gossip> learned_gossips;
    std::string name;
    int id;

    //produces a new gossip object
    gossip* speak();
    void listen(gossip &new_gossip);
};


#endif //GOSSIPS_AGENT_H
