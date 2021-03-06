#include "Route.hpp"
#include <fstream>
#include <iostream>

bool Route::operator==(const Route & r) const {
	// ------------------------ ISSUE 3 ------------------------
	return villeA_ == r.villeA_ and villeB_ == r.villeB_ and distance_ == r.distance_;
}

bool Route::operator!=(const Route & r) const {
	// ------------------------ ISSUE 3 ------------------------
    return villeA_ != r.villeA_ and villeB_ != r.villeB_ and distance_ != r.distance_;
}

std::istream& operator >>(std::istream& is, Route& r) {
  //	std::locale vieuxLoc = std::locale::global(std::locale("fr_FR.UTF-8"));
    std::string buffer;
	if (std::getline(is, buffer, ' '))
        r.villeA_ = buffer;
	if (std::getline(is, buffer, ' '))
        r.villeB_ = buffer;
    char * p;
	if (std::getline(is, buffer, '\n'))
	{
		std::strtol(buffer.c_str(),&p,10);
		if(*p == 0)
			r.distance_ = std::stoi(buffer);
    }
	//	std::locale::global(vieuxLoc);
	return is;


}
