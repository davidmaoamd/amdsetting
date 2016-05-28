#pragma once
namespace AMD
{

class DeviceManager
{
public:
    DeviceManager() { }
    ~DeviceManager() { }

    int Query(CmdParser* pCmdParser) { return 1; }
};

}
