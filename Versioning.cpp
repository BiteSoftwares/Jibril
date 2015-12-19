#include "Versioning.h"

#include <fstream>
#include <string>
#include <sstream>

//#include <iostream>

std::string IntToStr(int i) {
     std::ostringstream oss;
     oss << i;
     return oss.str();
}
Versioning::Versioning()
{
<<<<<<< HEAD
    FilePath = "../../../Data/Version.txt" ;
=======
    FilePath = "/home/elpollo/Desktop/CODE/Jibril/Jibril/Data/Version.txt" ;
>>>>>>> 16889d6fcba4cee975624581277276a4d4434e4b
}

std::string Versioning::GetVersion()
{
    File.open(FilePath.c_str());

    if (File.is_open())
    {
        std::getline(File, Version) ;
    }

    File.close();

    ReleaseNumber = Version[0] ;
    BetaNumber = Version[2] ;
    AlphaNumber = Version[4] ;
    DevBuildNumber = Version[6] ;

    return Version ;
}

void Versioning::SetVersion(int Release, int Beta, int Alpha, int DevNumber)
{
    ClearFile.open(FilePath.c_str(), std::ofstream::out | std::ofstream::trunc) ;
    ClearFile.close() ;

    Version = IntToStr(Release) + "." + IntToStr(Beta) + "." + IntToStr(Alpha) + "." + IntToStr(DevNumber) ;

    File.open(FilePath.c_str());

    if (File.is_open())
    {
        File << Version ;
    }

    File.close();
}
