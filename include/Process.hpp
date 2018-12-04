#ifndef PROCESS_HPP
#define PROCESS_HPP

#include <vector>

#include "Burst.hpp"

namespace CPUSS
{
class Process
{
public:

    Process(int processID, int numBursts, int arrivalTime, std::vector<Burst> burst);

    int GetProcessID();
    int GetArrivalTime();
    int GetNumBursts();
    int GetResponseTime();

    int GetStartTime();
    void SetStartTime(int startTime);

    int GetEndTime();
    void SetEndTime(int endTime);

    int GetWaitingTime();
    void SetWaitingTime(int waitingTime);

    int GetPriority();
    int SetPriority(int priority);

    int GetQuantumRemaining();
    void SetQuantumRemaining(int quantumRemaining);

    int GetCurrentQueue();
    void SetCurrentQueue(int currentQueue);

private:

    // Only set in constructor
    int m_ProcessID;
    int m_ArrivalTime;
    int m_NumBursts;
    int m_ResponseTime;

    int m_StartTime;
    int m_EndTime;
    int m_WaitingTime;
    int m_Priority;
    int m_QuantumRemaining;
    int m_CurrentQueue;

    std::vector<Burst> m_Bursts;

};


}

#endif // PROCESS_HPP