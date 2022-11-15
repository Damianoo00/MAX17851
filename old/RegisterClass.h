#pragma once
#include <stdint.h>

namespace max17851
{
    class Bits
    {
    public:
        uint16_t startBit;
        uint16_t length;
        Bits(const uint16_t startBit, const uint16_t length) : startBit(startBit), length(length) {}
    };

    class Register
    {
    public:
        uint8_t iWriteAddress;
        uint8_t iReadAddress;
        Register(const uint8_t writeAddress, const uint8_t readAddress) : iWriteAddress(writeAddress), iReadAddress(readAddress) {}
    };
}