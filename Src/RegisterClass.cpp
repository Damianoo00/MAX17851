#include "../Inc/RegisterClass.h"

namespace max17851
{
    uint8_t Register::get(uint8_t startBit, uint8_t lengthBitSet)
    {
        const uint8_t mask = ((uint8_t)pow(2, lengthBitSet) - 1) << startBit;
        return (iRegister & mask) >> startBit;
    }
    void Register::set(uint8_t startBit, uint8_t lenghBitset, uint8_t val)
    {
        const uint8_t mask = ((uint8_t)pow(2, lenghBitset) - 1) << startBit;
        iRegister &= (~mask);
        iRegister |= val << startBit;
    }
}