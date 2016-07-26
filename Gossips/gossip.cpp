//
//  gossip.cpp
//  Gossips
//
//  Created by Matt Postema on 7/16/16.
//  Copyright © 2016 Matt Postema. All rights reserved.
//

#include "gossip.hpp"

std::ostream& operator<<(std::ostream& os, const gossip &g)
{
    return os << "gossip(" << g.subject << " " << g.predicate << " " << g.object << ")";
}

std::ostream &operator<<(std::ostream &os, noun n) {
    switch (n) {
        case dog   :
            os << "dog";
            break;
        case cat   :
            os << "cat";
            break;
        case mayor :
            os << "mayor";
            break;
        case priest:
            os << "priest";
            break;
        case woman:
            os << "woman";
            break;
        default    :
            os.setstate(std::ios_base::failbit);
    }
    return os;
}


std::ostream& operator<<(std::ostream& os, prepositional_phrase p)
{
    switch(p)
    {
        case around_the_table : os << "around the table"; break;
        case on_the_box : os << "on the box"; break;
        case at_the_diner : os << "at the diner";  break;
        case in_the_library: os << "in the library";   break;
        case in_the_park : os << "in the park"; break;
        default : os.setstate(std::ios_base::failbit);
    }
    return os;
}

std::ostream& operator<<(std::ostream& os, verb v)
{
    switch(v)
    {
        case runs   : os << "runs";    break;
        case sits   : os << "sits"; break;
        case eats   : os << "eats";  break;
        case reads  : os << "reads";   break;
        case feeds  : os << "feeds"; break;
        default     : os.setstate(std::ios_base::failbit);
    }
    return os;
}