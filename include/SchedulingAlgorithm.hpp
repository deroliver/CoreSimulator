#ifndef SCHEDULINGALGORITHM_HPP
#define SCHEDULINGALGORITHM_HPP

#include <vector>
#include <string>

#include "Process.hpp"
#include "Core.hpp"

namespace CPUSS
{
class SchedulingAlgorithm
{
public:

    SchedulingAlgorithm();

    Process* GetNextProcess() = 0;
    void AddNewProcess() = 0;
    void MoveFromWaitingToReady() = 0;
    void MoveFromReadyToRunning() = 0;
    void MoveFromRunningToWaiting() = 0;
    void UpdateProcessState() = 0;
    void Run(std::vector<Core> cores, std::string filename) = 0;

    int NumberOfIncomingProcesses();
    int ArrivalTimeCompare(Process* P1, Process* P2);
    int ProcessIDComparor(Process* P1, Process* P2);
    int NumberOfCurrentRunningProcesses();
    int TotalExpectedProcesses();
    void LoadProcesses(std::string filename);


private:

    std::vector<Process> m_PreReadyQueue;
    std::vector<Process> m_Processes;
    std::vector<Process> m_ReadyQueue;
    std::vector<Process> m_WaitingQueue;

    int m_NextProcess;

    std::vector<Core> m_Cores;

    int m_Ticks;
    int m_QuantumTime;
    int m_ContextSwitch;
    int m_TotalWaitingTime;
    int m_TotalResponseTime;
    int m_TotalTurnaroundTime;
    int m_CPUUtilizationTicks


}

}








#endif // SCHEDULINGALGORITHM_HPP