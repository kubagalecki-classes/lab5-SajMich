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
    tmp.push_back('n');
  }
  else 
  {
    tmp.push_back('y');
  }
  *it++
}
    return {tmp};
}
