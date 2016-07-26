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

enum noun {
    dog,
    cat,
    mayor,
    priest,
    woman
};

std::ostream &operator<<(std::ostream &os, const noun &n);

#endif /* noun_hpp */
