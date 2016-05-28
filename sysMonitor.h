#pragma once
namespace AMD
{

class SysMonitor
{
public:
    SysMonitor(DeviceManager* pDeviceMgr, CmdParser* pCmdParser) { }
    ~SysMonitor();

    int Run() { return 1; }
};

}
