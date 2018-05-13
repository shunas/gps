#ifndef CHEMIN_HPP_
#define CHEMIN_HPP_

#include "Route.hpp"
#include <iostream>
#include <vector>

// ensemble de routes 
class Chemin {

    protected:

        // tableau de Route
        std::vector<Route> routes_;

        // calcule le plus court chemin entre deux villes
        // precondition ville1 != ville2
        // precondition ensemble de routes non vide
        // postcondition chemin ordonné : (ville1,x), (x,y), (y,ville2)
        Chemin calculerPlusCourt(const std::string & ville1, 
                const std::string & ville2) const;

        // partitionne les routes avec ou sans la ville donnée
        // postcondition les routes de cheminAvec commencent par la ville donnée
        void partitionner(const std::string & ville, Chemin & cheminAvec, 
                Chemin & cheminSans) const;

    public:

        Chemin() = default;

        Chemin(const Chemin &) = default;

        // importe un ensemble de routes depuis un flux CSV
        // precondition CSV au format "villeA villeB distance"
        void importerCsv(std::istream & is);

        // exporte un graphe dot (avec le chemin le plus court en rouge)
        void exporterDot(std::ostream & os, const std::string & ville1, 
                const std::string & ville2) const;

};

#endif

