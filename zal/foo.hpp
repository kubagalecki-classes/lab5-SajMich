#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
  std::vector<char> tmp;
  std::list< Human >::reverse_iterator it = people.rbegin();

while( it != people.rend())
{
  it->birthday();
  if ( it-> isMonster())
  {
    tmp.push_back('y');
  }
  else 
  {
    tmp.push_back('n');
  }
  *it++
}
    return {tmp};
}
