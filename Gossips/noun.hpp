//
//  noun.hpp
//  Gossips
//
//  Created by Matt Postema on 7/16/16.
//  Copyright © 2016 Matt Postema. All rights reserved.
//

#ifndef noun_hpp
#define noun_hpp

#include <iostream>

enum noun
{
    dog,
    cat,
    mayor,
    priest,
    woman
};

std::ostream& operator<<(std::ostream& os, noun n)
{
    switch(n)
    {
        case dog   : os << "dog";    break;
        case cat   : os << "cat"; break;
        case mayor : os << "mayor";  break;
        case priest: os << "priest";   break;
        case woman: os << "woman"; break;
        default    : os.setstate(std::ios_base::failbit);
    }
    return os;
}

#endif /* noun_hpp */
