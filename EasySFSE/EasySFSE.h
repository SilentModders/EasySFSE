// Plugin header
#pragma once
#include "pch.h"

#define SFSEPluginVer extern "C" [[maybe_unused]] __declspec(dllexport) constinit SFSE::PluginVersionData SFSEPlugin_Version

namespace Plugin
{
    using namespace std::string_view_literals;

    static constexpr auto Name{ "PluginName"sv };
    static constexpr auto Author{ "AuthorName"sv };
    static constexpr auto Version{
        REL::Version{0, 0, 0, 0}
    };
}

SFSEPluginVer = []() noexcept {
    SFSE::PluginVersionData data{};
    data.PluginVersion(Plugin::Version.pack());
    data.PluginName(Plugin::Name);
    data.AuthorName(Plugin::Author);
    data.UsesAddressLibrary(true);
    data.CompatibleVersions({ SFSE::RUNTIME_LATEST });
    return data;
}();
