#include "Human.hpp"
#include <iostream>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char >          tmp;
    std::list< Human >::iterator it = people.begin();
    // std::cout << it->getName() << "\n";
    int i = 2;
    for (int j = 0; j < i; j++) {
        std::cout << it->getName() << "\n";
        tmp.push_back('y');
        *it++;
    }
    return {tmp};
}

int main()
{
    std::list< Human > people;
    // std::list< Human >::iterator it = people.begin();
    people.push_back(Human("Mark", 20, false, true));
    people.push_back(Human("John", 26, false, true));
    /*
    *it++;
    std::cout << it->getName() << "\n";
*/
    std::vector< char > wektor;
    wektor = foo(people);
    for (int i = 0; i < 2; i++) {
        std::cout << wektor[i] << "\n";
    }
    /*
       std::list< int >           L;
       std::list< int >::iterator it = L.end();
       L.push_back(10);
       L.push_front(1);
       L.push_front(1);
       L.push_front(1);
       L.push_front(1);
       L.push_front(1);
       int i = 0;
       // std::cout << "rozmiar listy: " << *it++ << "\n";
       while (it != L.begin() && i < 100) {
           std::cout << *it << "\n";
           *it--;
           i++;
       }
       */
}
