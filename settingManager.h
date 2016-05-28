#pragma once
namespace AMD
{
class CmdParser;
class DeviceManager;
class SysMonitor;
class GpuMonitor;

class SettingManager
{
public:
    SettingManager(int argumentCount, char** arguments);
    ~SettingManager(){ }
    int Run();
private:
    CmdParser*      m_pCmdParser;
    DeviceManager*  m_pDeviceMgr;
    SysMonitor*     m_pSysMonitor;
    GpuMonitor*     m_pGpuMonitor;
};

}
