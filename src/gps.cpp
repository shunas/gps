/// \mainpage gps : calculateur de chemin "au plus court"
///
/// Permet de calculer le chemin le plus court entre deux villes, à partir d'un
/// fichier CSV contenant les routes "villeA villeB distance". Écrit, en sortie,
/// un fichier graphviz permettant de générer un graphique.
///

#include "Chemin.hpp"
#include <exception>
#include <fstream>

using namespace std;

int main(int argc, char ** argv) {

    if (argc != 5) {
        cerr << "usage: " << argv[0]
            << " <input csv> <output dot> <city1> <city2>\n";
        exit(-1);
    }

    try {

        Chemin chemin;

		std::ifstream import(argv[1],std::ios::in);
		if(import)
        {
			chemin.importerCsv(import);
			import.close();
			std::cout<<"import réussie \n";

			std::ofstream exporter(argv[2],std::ios::out);
			if(exporter)
			{
				chemin.exporterDot(exporter,argv[3],argv[4]);
				exporter.close();
				std::cout<<"export réussie \n";
			}
			else
			{
				std::cout<<"export échouer \n";
			}
		}
		else
		{
			std::cout<<"import échouer \n";
		}
    }
    catch (const string & msg) {
        cerr << msg << endl;
    }
    catch (const exception & e) {
        cerr << e.what() << endl;
    }

    return 0;
}

