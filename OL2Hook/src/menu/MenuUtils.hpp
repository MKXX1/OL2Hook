#pragma once
#include "../pch.h"
#include "../console/console.hpp"

namespace Menu {
    std::string utf8_encode(const std::wstring& wstr);
    void PURPLE( );
    void AddText(std::string Text, FVector2D Position, bool WithIcon);
    bool WorldToScreen(APlayerController* pPC, const FVector& WorldLocation, FVector2D& ScreenLocation);
    void SendCheatMessage(const wchar_t* message, bool& cheatState, bool& prevState);
    void SendCheatMessage(const wchar_t* msg, ...);
    bool IsInMainMenu();
    bool IsInPauseMenu();

    /*
    inline FVector SubtractVectors(const FVector& A, const FVector& B)
    {
        FVector Result;
        Result.X = A.X - B.X;
        Result.Y = A.Y - B.Y;
        Result.Z = A.Z - B.Z;
        return Result;
    }

    inline float DotProduct(const FVector& A, const FVector& B)
    {
        return A.X * B.X + A.Y * B.Y + A.Z * B.Z;
    }

    inline void GetAxes(const FRotator& Rotation, FVector& AxisX, FVector& AxisY, FVector& AxisZ)
    {
        float Pitch = Rotation.Pitch * CONST_Pi / 180.0f;
        float Yaw = Rotation.Yaw * CONST_Pi / 180.0f;
        float Roll = Rotation.Roll * CONST_Pi / 180.0f;

        float SP = sinf(Pitch);
        float CP = cosf(Pitch);
        float SY = sinf(Yaw);
        float CY = cosf(Yaw);
        float SR = sinf(Roll);
        float CR = cosf(Roll);

        AxisX.X = CP * CY;
        AxisX.Y = CP * SY;
        AxisX.Z = SP;

        AxisY.X = -SR * SP * CY - CR * SY;
        AxisY.Y = -SR * SP * SY + CR * CY;
        AxisY.Z = SR * CP;

        AxisZ.X = CR * SP * CY - SR * SY;
        AxisZ.Y = CR * SP * SY + SR * CY;
        AxisZ.Z = -CR * CP;
    }

    inline FVector AddVectors(const FVector& A, const FVector& B)
    {
        FVector Result;
        Result.X = A.X + B.X;
        Result.Y = A.Y + B.Y;
        Result.Z = A.Z + B.Z;
        return Result;
    }

    inline FVector MultiplyVector(const FVector& A, float Scalar)
    {
        FVector Result;
        Result.X = A.X * Scalar;
        Result.Y = A.Y * Scalar;
        Result.Z = A.Z * Scalar;
        return Result;
    } */ // same
    //bool IsInMainMenu();
  
}

