#include <settingManager.h>
#include <stdio.h>
using namespace AMD;
int main(int argc, char* argv[])
{
    SettingManager* pSettingMgr = new SettingManager(argc, argv);

    return pSettingMgr->Run();
}
