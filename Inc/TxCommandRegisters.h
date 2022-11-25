#pragma once
#include "RegisterClass.h"

namespace max17851
{

    class NxtLdqRegister : public Register
    {
    public:
        NxtLdqRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static NxtLdqRegister &Instance();

        uint8_t get_NXT_LDQ();
        void set_NXT_LDQ(uint8_t);
    };

    class LdqRegister : public Register
    {
    public:
        LdqRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static LdqRegister &Instance();

        uint8_t get_LDQ();
        void set_LDQ(uint8_t);
    };

    class LdqPtrRegister : public Register
    {
    public:
        LdqPtrRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static LdqPtrRegister &Instance();

        uint8_t get_LDQ_PTR();
        void set_LDQ_PTR(uint8_t);
    };

    class ConfigqRegister : public Register
    {
    public:
        ConfigqRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static ConfigqRegister &Instance();

        uint8_t get_CONFIGQ();
        void set_CONFIGQ(uint8_t);
    };

    class ConfigPtrRegister : public Register
    {
    public:
        ConfigPtrRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static ConfigPtrRegister &Instance();

        uint8_t get_CONFIG_BYTE_PTR();
        void set_CONFIG_BYTE_PTR(uint8_t);

        uint8_t get_CONFIG_QUEUE_PTR();
        void set_CONFIG_QUEUE_PTR(uint8_t);
    };

}