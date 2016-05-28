#pragma once
namespace AMD
{

class CmdParser
{
public:
    CmdParser(int argumentCount, char** ppArguments);
    ~CmdParser(){ }
    bool MonitorSys() { return false; }
    bool MonitorGpu() { return false; }
    bool Query()      { return false; }
    void Help()       { }
    bool Invalid()    { return false; }
};

}
