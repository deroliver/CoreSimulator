#ifndef BURST_HPP
#define BURST_HPP

namespace CPUSS
{
class Burst
{
public:

    Burst(int length, int step);

    int GetLength();
    void SetLength(int length);

    int GetStep();
    void SetStep(int step);

private:

    int m_Length;
    int m_Step;

};

}


#endif // BURST_HPP