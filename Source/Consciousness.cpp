#include "../Include/Consciousness.h"

#include <string>

Consciousness::Consciousness()
{
    State = "Starting" ;
}

void Consciousness::Change_State(std::string New_State)
{
    State = New_State ;
}

std::string Consciousness::Get_State()
{
    return State ;
}

void Consciousness::Initialize_Parameters()
{
    Parameter_Name_List.push_back("Boredom") ;
    Parameter_Name_List.push_back("Joy") ;
    Parameter_Name_List.push_back("Anger") ;
    Parameter_Name_List.push_back("Fear") ;

    for (unsigned int i = 0 ; i < Parameter_Name_List.size() ; i++)
    {
        Consciousness_Parameter TMP(Parameter_Name_List[i], std::string("NORMAL")) ;
        Parameter_List.push_back(TMP) ;
        Parameter_List[i].Set_Parameter_Value(float(0.0)) ;
    }
}
