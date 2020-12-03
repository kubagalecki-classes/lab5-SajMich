#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
  std::vector<char> tmp;
  std::list< Human >::iterator it = people.begin();
  int iter =0;
while( it != people.end() && iter <1000)
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
