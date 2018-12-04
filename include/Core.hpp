#ifndef CORE_HPP
#define CORE_HPP

#include "Process.hpp"

namespace CPUSS
{
class Core
{
public:

  Core();

  void SetProcess(Process* process);
  Process* GetProcess();

  void Update();

private:

  // CPU ID static across all cores
  // Incremented when new core is added
  static int m_CPUID;

  // The actual Core ID
  int m_COREID;

  // The Process object being executed on this core
  Process* m_Process;


};

}

#endif // PROCESS_HPP
