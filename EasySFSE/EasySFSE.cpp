////////////////////////////////////////////////////////////////////////////////
// EasySFSE.cpp: A short example that will use SFSE and Address Library
// Written by BitMage using CommonLibSF
////////////////////////////////////////////////////////////////////////////////
#include "pch.h"

SFSEPluginLoad(const SFSE::LoadInterface* sfse)
{
    Init(sfse);
    // The log will be named Plugin::Name
    // as defined in the header file. The path is
    // My Games\Starfield\SFSE\Logs\PluginName.log
    SFSE::log::info("Hello World!");
    return true;
}
