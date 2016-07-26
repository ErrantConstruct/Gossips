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

std::ostream& operator<<(std::ostream& os, const prepositional_phrase &p);

#endif /* prepositional_phrase_hpp */
