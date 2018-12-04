#include "Burst.hpp"

CPUSS::Burst::Burst(int length, int step)
{
    m_Length = length;
    m_Step = step;
}

int CPUSS::Burst::GetLength()
{
    return m_Length;
}

void CPUSS::Burst::SetLength(int length)
{
    m_Length = length;
}

int CPUSS::Burst::GetStep()
{
    return m_Step;
}

void CPUSS::Burst::SetStep(int step)
{
    m_Step = step;
}