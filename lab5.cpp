#include "Human.hpp"
#include <iostream>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > tmp;
    std::list< Human >::reverse_iterator rit = people.rbegin();
    while (rit != people.rend()) {
        rit->birthday();
        std::cout << rit->wiek() << "\n";
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

int main()
{
    std::list< Human >           people;
    std::list< Human >::iterator it = people.begin();
    people.push_back(Human("Mark", 20, false, true));
    people.push_back(Human("John", 32, false, true));
    people.push_back(Human("Bob", 50, false, false));
    people.push_back(Human("Jack", 30, true, false));

    *it++;
    std::vector< char > wektor;
    wektor = foo(people);
    for (int i = 0; i < wektor.size(); i++) {
        std::cout << wektor[i] << "\n";
        std::cout << it->wiek() << "\n";
        *it++;
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
