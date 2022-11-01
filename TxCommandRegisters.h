#pragma once
#include "RegisterClass.h"
namespace max17851
{
    class NxtLdqRegister : public Register
    {
    public:
        Bits NXT_LDQ;
        NxtLdqRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                NXT_LDQ(0, 8) {}
    };

    class LdqRegister : public Register
    {
    public:
        Bits LDQ;
        LdqRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                             LDQ(0, 8) {}
    };

    class LdqPtrRegister : public Register
    {
    public:
        Bits LDQ_PTR;
        LdqPtrRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                LDQ_PTR(0, 5) {}
    };

    class ConfigqRegister : public Register
    {
    public:
        Bits CONFIGQ;
        ConfigqRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                 CONFIGQ(0, 8) {}
    };

    class ConfigPtrRegister : public Register
    {
    public:
        Bits CONFIG_BYTE_PTR;
        Bits CONFIG_QUEUE_PTR;
        ConfigPtrRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                   CONFIG_BYTE_PTR(0, 5), CONFIG_QUEUE_PTR(5, 2) {}
    };
}