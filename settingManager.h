#pragma once
namespace AMD
{
class CmdParser;
class SettingManager
{
public:
    SettingManager(int argumentCount, char** arguments);
    ~SettingManager(){ }
    int Run();
private:
    CmdParser* m_pParser;
};

}
