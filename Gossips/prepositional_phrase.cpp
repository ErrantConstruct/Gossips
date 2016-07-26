//
//  prepositional_phrase.cpp
//  Gossips
//
//  Created by Matt Postema on 7/26/16.
//  Copyright © 2016 Matt Postema. All rights reserved.
//

#include <stdio.h>

#include "prepositional_phrase.hpp"

std::ostream& operator<<(std::ostream& os, const prepositional_phrase &p)
{
    switch(p)
    {
        case prepositional_phrase::around_the_table : os << "around the table"; break;
        case prepositional_phrase::on_the_box : os << "on the box"; break;
        case prepositional_phrase::at_the_diner : os << "at the diner";  break;
        case prepositional_phrase::in_the_library: os << "in the library";   break;
        case prepositional_phrase::in_the_park : os << "in the park"; break;
        default : os.setstate(std::ios_base::failbit);
    }
    return os;
}