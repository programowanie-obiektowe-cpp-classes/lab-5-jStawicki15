#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    // Twoja implementacja tutaj
    std::vector<char> output;
    int i = 0;
    std::list<Human>::reverse_iterator itt = people.rbegin();
    
    do
    {
        itt->birthday();
        
        if (itt->isMonster())
        {
            output[i] = 'n';
        }
        else
        {
            output[i] = 'y';
        }

        i++;
        itt++;
    }while(itt != people.rend());
    
    return output;
}
