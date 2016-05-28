#include <cmdParser.h>
#include <settingManager.h>
#include <gpuMonitor.h>
#include <sysMonitor.h>
#include <deviceManager.h>

namespace AMD
{
// constructor for SettingManager
SettingManager::SettingManager(int argumentCount, char** arguments)
{
    m_pCmdParser = new CmdParser(argumentCount, arguments);
}

int SettingManager::Run()
{
    if (m_pCmdParser->Invalid())
    {
        m_pCmdParser->Help();
        return 1;
    }

    m_pDeviceMgr = new DeviceManager();

    if (m_pCmdParser->MonitorGpu())
    {
        m_pGpuMonitor = new GpuMonitor(m_pDeviceMgr, m_pCmdParser);
        return m_pGpuMonitor->Run();
    }
    else if (m_pCmdParser->MonitorSys())
    {
        m_pSysMonitor = new SysMonitor(m_pDeviceMgr, m_pCmdParser);
        return m_pSysMonitor->Run();
    }
    else if (m_pCmdParser->Query())
    {
        return m_pDeviceMgr->Query(m_pCmdParser);
    }
    return 1;
}

};
