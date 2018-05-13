#include "Route.hpp"
#include <fstream>
#include <iostream>

bool Route::operator==(const Route & r) const {

	//TODO

	return false;
}

bool Route::operator!=(const Route & r) const {

    //TODO

    return false;
}

std::istream& operator >>(std::istream& is, Route& r) {
  //	std::locale vieuxLoc = std::locale::global(std::locale("fr_FR.UTF-8"));
    std::string buffer;
	if (std::getline(is, buffer, ' '))
        r.villeA_ = buffer;
	if (std::getline(is, buffer, ' '))
        r.villeB_ = buffer;
	if (std::getline(is, buffer, '\n'))
        r.distance_ = std::stoi(buffer);
	//	std::locale::global(vieuxLoc);
	return is;


}
