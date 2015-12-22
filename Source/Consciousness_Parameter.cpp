#include "../Include/Consciousness_Parameter.h"

#include <string>

Consciousness_Parameter::Consciousness_Parameter(std::string Name, std::string Weight)
{
    Parameter_Name = Name ;
    Parameter_Weight = Weight ;
}

void Consciousness_Parameter::Set_Parameter_Value(float Value)
{
    Parameter_Value = Value ;
}

float Consciousness_Parameter::Get_Parameter_Value()
{
    return Parameter_Value ;
}
