#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    
    std::for_each(people.begin(), people.end(), [](Human& person) { person.birthday(); });

    std::vector< char > retval;
    retval.reserve(people.size()); 

   
    std::transform(people.rbegin(), people.rend(), std::back_inserter(retval), [](Human& person) {
        return person.isMonster() ? 'n' : 'y';
    });

    return retval;
}

