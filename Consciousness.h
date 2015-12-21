#ifndef CONSCIOUSNESS_H
#define CONSCIOUSNESS_H

#include <string>

class Consciousness
{
    public :

        Consciousness() ;

        void Change_State(std::string New_State) ;
        std::string Get_State() ;

//    private :

        std::string State ;

};

#endif // CONSCIOUSNESS_H
