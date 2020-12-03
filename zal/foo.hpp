#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > tmp;
    std::list< Human >::reverse_iterator rit = people.rbegin();
    while (rit != people.rend()) {
        rit->birthday();
        if (rit->isMonster() == true) {
            tmp.push_back('n');
        }
        else {
            tmp.push_back('y');
        }
        *rit++;
    }
    return {tmp};
}
