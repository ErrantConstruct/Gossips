//
//  verb.cpp
//  Gossips
//
//  Created by Matt Postema on 7/26/16.
//  Copyright © 2016 Matt Postema. All rights reserved.
//

#include <iostream>

#include "verb.hpp"

std::ostream& operator<<(std::ostream& os, const verb &v)
{
    switch(v)
    {
        case verb::runs   : os << "runs";    break;
        case verb::sits   : os << "sits"; break;
        case verb::eats   : os << "eats";  break;
        case verb::reads  : os << "reads";   break;
        case verb::feeds  : os << "feeds"; break;
        default : os.setstate(std::ios_base::failbit);
    }
    return os;
}