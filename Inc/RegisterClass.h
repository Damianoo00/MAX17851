#pragma once
#include <stdint.h>
#include <cmath>

namespace max17851
{
    class Register
    {
    public:
        uint8_t iWriteAddress{0};
        uint8_t iReadAddress{0};
        uint8_t iRegister{0};
        Register(const uint8_t writeAddress, const uint8_t readAddress) : iWriteAddress(writeAddress), iReadAddress(readAddress), iRegister(0) {}

    public:
        uint8_t get(uint8_t startBit, uint8_t lengthBitSet);
        void set(uint8_t startBit, uint8_t lenghBitset, uint8_t val);

    public:
        void sendRegister();
        void reciveRegister();
        static Register &Instance();
    };
}