#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
  std::vector<char> tmp;
  std::list< Human >::iterator it = people.begin();

while( it != people.end())
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
