#include "Core.hpp"

int CPUSS::Core::m_CPUID = -1;

CPUSS::Core::Core()
{
    // Set our CoreID
    m_COREID = m_CPUID++;
}

void CPUSS::Core::SetProcess(CPUSS::Process* process)
{
    if(process) {
        m_Process = process;
    }
}

CPUSS::Process* CPUSS::Core::GetProcess()
{
    if(m_Process) {
        return m_Process;
    }
}

void CPUSS::Core::Update()
{
    if(m_Process) {
        // process does work
    } else {
        // This core has no process assigned to it
    }
}