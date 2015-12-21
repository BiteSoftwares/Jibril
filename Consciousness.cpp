#include "Consciousness.h"

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
