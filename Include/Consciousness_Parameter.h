#ifndef CONSCIOUSNESS_PARAMETER_H
#define CONSCIOUSNESS_PARAMETER_H

#include <string>

class Consciousness_Parameter
{
    public :

        Consciousness_Parameter(std::string Name, std::string Weight);

        void Set_Parameter_Value(float Value) ;
        float Get_Parameter_Value() ;

    private :

        float Parameter_Value ;

        std::string Parameter_Name ;
        std::string Parameter_Weight ;
};

#endif // CONSCIOUSNESS_PARAMETER_H
