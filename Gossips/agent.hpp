//
// Created by Matt Postema on 7/27/16.
//

#ifndef GOSSIPS_AGENT_H
#define GOSSIPS_AGENT_H


#include <vector>
#include <map>
#include "gossip.hpp"

struct agent {
    //maps the gossip to the agent it was received from, will only allow one gossip per agent
    std::map<int, gossip> learned_gossips;
    std::string name;
    int id;

    //produces a new gossip object
    gossip speak();
    void listen(int speaker_id, gossip new_gossip);
};


#endif //GOSSIPS_AGENT_H
