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

    Parameter_List.push_back(Consciousness_Parameter(Parameter_Name_List[0], "NORMAL", 1.0));
    Parameter_List.push_back(Consciousness_Parameter(Parameter_Name_List[1], "NORMAL", -1.0));
    Parameter_List.push_back(Consciousness_Parameter(Parameter_Name_List[2], "NORMAL", 0.0));
    Parameter_List.push_back(Consciousness_Parameter(Parameter_Name_List[3], "NORMAL", 0.0));

    for (unsigned int i = 0 ; i < Parameter_List.size() ; i++)
    {
        Parameter_List[i].Set_Parameter_Value(0.0) ;
    }

    Parameter_List[1].Set_Parameter_Value(50.0) ;
}

void Consciousness::Update_Parameters()
{
    for (unsigned int i = 0 ; i < Parameter_List.size() ; i++)
    {
        Parameter_List[i].Update_Parameter() ;
    }
}

void Consciousness::Update_State()
{
    std::string New_State = "" ;

    if (Parameter_List[0].Get_Parameter_Value() > Parameter_List[1].Get_Parameter_Value())
    {
        New_State = "Bored" ;
    }
    else if (Parameter_List[1].Get_Parameter_Value() > Parameter_List[0].Get_Parameter_Value() & Parameter_List[1].Get_Parameter_Value() > Parameter_List[2].Get_Parameter_Value() & Parameter_List[1].Get_Parameter_Value() > Parameter_List[3].Get_Parameter_Value())
    {
        New_State = "Happy" ;
    }
    else
    {
        New_State = "Idle" ;
    }

    Change_State(New_State) ;
}
