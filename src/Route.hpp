#ifndef ROUTE_HPP_
#define ROUTE_HPP_

#include <string>
#include <fstream>
#include <iostream>
// route définie par deux villes et leur distance
struct Route {

    std::string villeA_;

    std::string villeB_;

    int distance_;

    // égalité (teste ville A, ville B et distance)
    bool operator==(const Route & r) const;

    // différence (teste ville A, ville B et distance)
    bool operator!=(const Route & r) const;

};

std::istream& operator >>(std::istream& is, Route& r);

#endif

