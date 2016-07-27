//
// Created by Matt Postema on 7/27/16.
//

#include "agent.hpp"

//TODO: method stub
gossip agent::speak()
{
    gossip value;
    
    //randomize elements of gossip
    
    return value;
}

//TODO: method stub
void agent::listen(int speaker_id, gossip new_gossip)
{
    //add new gossip
    std::cout << "Adding gossip learned from " << speaker_id << std::endl;
    learned_gossips.insert(std::pair<int, gossip>(speaker_id, new_gossip));
}