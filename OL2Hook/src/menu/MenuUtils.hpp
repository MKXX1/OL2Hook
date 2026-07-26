#pragma once
#include "../pch.h"
#include "../console/console.hpp"

namespace Menu {
    std::string utf8_encode(const std::wstring& wstr);
    std::wstring utf8_decode(const std::string& str);
    void PURPLE( );
    void SendCheatMessage(const wchar_t* message, bool& cheatState, bool& prevState);
    void SendCheatMessage(const wchar_t* message);
    void SendCheatMessage(const wchar_t* message, const std::wstring& FMessage);
    //bool IsInMainMenu();
  
}

