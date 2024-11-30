#pragma once

#include "Human.hpp"

#include <list>
#include <vector>
#include <iostream>

std::vector< char > foo(std::list< Human >& people)
{
    // Twoja implementacja tutaj
    int nPeople = people.size();
    std::vector<char>output(nPeople);
    int i = 0;
    
    for(std::list<Human>::reverse_iterator itt = people.rbegin(); itt != people.rend(); itt++)
    {   
        //std::cout<<itt->getAge()<<"\n";
        itt->birthday();
        //std::cout<<itt->getAge()<<"\n";

        //std::cout<<itt->isMonster()<<"\n";
        if (itt->isMonster())
        {
            output[i] = 'n';
        }
        else
        {
            output[i] = 'y';
        }
        i++;
    }
    
    return output;
}
