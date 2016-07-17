//
//  prepositional_phrase.hpp
//  Gossips
//
//  Created by Matt Postema on 7/16/16.
//  Copyright © 2016 Matt Postema. All rights reserved.
//

#ifndef prepositional_phrase_hpp
#define prepositional_phrase_hpp

#include <iostream>

enum prepositional_phrase
{
    around_the_table,
    on_the_box,
    at_the_diner,
    in_the_library,
    in_the_park
};

std::ostream& operator<<(std::ostream& os, prepositional_phrase p)
{
    switch(p)
    {
        case around_the_table : os << "around the table";    break;
        case on_the_box : os << "on the box"; break;
        case at_the_diner : os << "at the diner";  break;
        case in_the_library: os << "in the library";   break;
        case in_the_park : os << "in the park"; break;
        default : os.setstate(std::ios_base::failbit);
    }
    return os;
}


#endif /* prepositional_phrase_hpp */
