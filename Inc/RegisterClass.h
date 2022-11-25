#pragma once
#include <stdint.h>
#include <cmath>

namespace max17851
{
    class Register
    {
    public:
        uint8_t iWriteAddress;
        uint8_t iReadAddress;
        uint8_t iRegister;
        Register(const uint8_t writeAddress, const uint8_t readAddress) : iWriteAddress(writeAddress), iReadAddress(readAddress), iRegister(0) {}
        uint8_t get(uint8_t startBit, uint8_t lengthBitSet)
        {
            const uint8_t mask = ((uint8_t)pow(2, lengthBitSet) - 1) << startBit;
            return iRegister & mask >> startBit;
        }
        void set(uint8_t startBit, uint8_t lenghBitset, uint8_t val)
        {
            const uint8_t mask = ((uint8_t)pow(2, lenghBitset) - 1) << startBit;
            iRegister &= (~mask);
            iRegister |= val << startBit;
        }

    public:
        void sendRegister();
        void reciveRegister();
        static Register &Instance();
    };
}