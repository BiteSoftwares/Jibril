#include "../Include/Consciousness_Parameter.h"

#include <string>

Consciousness_Parameter::Consciousness_Parameter(std::string Name, std::string Weight, float Evolution)
{
    Parameter_Name = Name ;
    Parameter_Weight = Weight ;
    Parameter_Evolution = Evolution ;
}

void Consciousness_Parameter::Set_Parameter_Value(float Value)
{
    Parameter_Value = Value ;
}

float Consciousness_Parameter::Get_Parameter_Value()
{
    return Parameter_Value ;
}

void Consciousness_Parameter::Update_Parameter()
{
    Parameter_Value = Parameter_Value + Parameter_Evolution ;

    if (Parameter_Value < 0.0)
    {
        Parameter_Value = 0.0 ;
    }
}
