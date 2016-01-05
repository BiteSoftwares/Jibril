#ifndef CONSCIOUSNESS_PARAMETER_H
#define CONSCIOUSNESS_PARAMETER_H

#include <string>

class Consciousness_Parameter
{
    public :

        Consciousness_Parameter(std::string Name, std::string Weight, float Evolution);

        void Set_Parameter_Value(float Value) ;
        float Get_Parameter_Value() ;
        void Update_Parameter() ;

    private :

        float Parameter_Value ;
        float Parameter_Evolution ;

        std::string Parameter_Name ;
        std::string Parameter_Weight ;
};

#endif // CONSCIOUSNESS_PARAMETER_H
