#pragma once

#include "CoreMinimal.h"
#include "Core/Public/Containers/StringConv.h"
#include <string>

class FMiniCodeConvert {
public:
    static std::string WideCharToMultiByte(const TCHAR* WChar);
    static FString MultiByteToWideChar(const char* MultiByteChar);
};
