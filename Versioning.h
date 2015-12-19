#ifndef VERSIONING_H
#define VERSIONING_H

#include <fstream>
#include <string>

class Versioning
{
    public :

        Versioning();

        std::string GetVersion() ;

        void SetVersion(int Release, int Beta, int Alpha, int DevNumber) ;

    private :

        std::string FilePath ;

        std::fstream File ;
        std::ofstream ClearFile ;

        std::string Version ;

        int ReleaseNumber, BetaNumber, AlphaNumber, DevBuildNumber ;
};

#endif // VERSIONING_H
