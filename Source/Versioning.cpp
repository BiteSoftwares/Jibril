#include "../Include/Versioning.h"
#include "../Include/IntToStr.h"

#include <fstream>
#include <string>
#include <sstream>

Versioning::Versioning()
{
    FilePath = "../../../Data/Version.txt" ;
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
