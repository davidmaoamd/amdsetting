#pragma once
namespace AMD
{

class GpuMonitor
{
public:
    GpuMonitor(DeviceManager* pDeviceMgr, CmdParser* pCmdParser) { }
    ~GpuMonitor();

    int Run() { return 1; }
};

}
