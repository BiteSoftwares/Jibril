#ifndef CONSCIOUSNESS_H
#define CONSCIOUSNESS_H

#include "Consciousness_Parameter.h"

#include <string>
#include <vector>

class Consciousness
{
    public :

        Consciousness() ;

        void Change_State(std::string New_State) ;
        void Update_State() ;
        std::string Get_State() ;

        void Initialize_Parameters() ;
        void Update_Parameters() ;

        std::vector<std::string> Parameter_Name_List ;
        std::vector<Consciousness_Parameter> Parameter_List ;

    protected :

        std::string State ;

};

#endif // CONSCIOUSNESS_H
