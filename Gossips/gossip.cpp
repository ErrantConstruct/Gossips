//
//  gossip.cpp
//  Gossips
//
//  Created by Matt Postema on 7/16/16.
//  Copyright © 2016 Matt Postema. All rights reserved.
//

#include <iostream>
#include "gossip.hpp"

std::ostream& operator<<(std::ostream &os, const gossip &g)
{
    return os << "gossip(" << g.subject << " " << g.predicate << " " << g.object << ")" << std::endl;
}