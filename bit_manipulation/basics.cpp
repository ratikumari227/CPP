#include <iostream>
using namespace std;
int getBit(int n,int pos)
{
    return ((n & (1<<pos)) !=0);
}
int setBit(int n,int pos)
{
    return ((n | (1<<pos)));
}
int clearBit(int n,int pos)
{
    int mask= ~(1<<pos);
    return (n & mask);
}
int updateBit(int n,int pos,int value)
{
    int mask= ~(1<<pos);
    n=n&mask;
    return (n | value<<pos);
}
int main()
{
    // 1010
    // 1000
    cout<<getBit(10,3)<<endl;
    cout<<setBit(10,2)<<endl;
    cout<<clearBit(10,1)<<endl;
    cout<<updateBit(10,1,0)<<endl;
    return 0;
}