#pragma once
#include "RegisterClass.h"
namespace max17851
{
    class SwporRegister : public Register
    {
    public:
        Bits SWPOR;
        SwporRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), SWPOR(0, 1) {}
    };
    class SlpEnRegister : public Register
    {
    public:
        Bits SLP_EN;
        SlpEnRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), SLP_EN(0, 1) {}
    };

    class VerConfigRegister : public Register
    {
    public:
        Bits VER_CONFIG;
        VerConfigRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), VER_CONFIG(0, 1) {}
    };

    class LoadConfigRegister : public Register
    {
    public:
        Bits LOAD_CONFIG;
        LoadConfigRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), LOAD_CONFIG(0, 1) {}
    };

    class WdKeyRegister : public Register
    {
    public:
        Bits WD_KEY;
        WdKeyRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), WD_KEY(0, 8) {}
    };
}