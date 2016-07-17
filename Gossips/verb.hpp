//
//  verb.hpp
//  Gossips
//
//  Created by Matt Postema on 7/16/16.
//  Copyright © 2016 Matt Postema. All rights reserved.
//

#ifndef verb_hpp
#define verb_hpp

#include <iostream>

enum verb
{
    runs,
    sits,
    eats,
    reads,
    feeds
};

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


#endif /* verb_hpp */
