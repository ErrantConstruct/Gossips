//
//  noun.cpp
//  Gossips
//
//  Created by Matt Postema on 7/26/16.
//  Copyright © 2016 Matt Postema. All rights reserved.
//

#include <iostream>

#include "noun.hpp"

std::ostream &operator<<(std::ostream &os, const noun &n)
{
    switch (n) {
        case noun::dog   :
            os << "dog";
            break;
        case noun::cat   :
            os << "cat";
            break;
        case noun::mayor :
            os << "mayor";
            break;
        case noun::priest:
            os << "priest";
            break;
        case noun::woman:
            os << "woman";
            break;
        default    :
            os.setstate(std::ios_base::failbit);
    }
    return os;
}
