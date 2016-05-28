#include <settingManager.h>
#include <stdio.h>
int main(int argc, char* argv[])
{
    SettingManager* pSettingMgr = new SettingManager(argc, &argv);

    return pSettingMgr->run();
}
