#pragma once
#include "RegisterClass.h"
namespace max17851
{
    class ClrTxbufRegister : public Register
    {
    public:
        ClrTxbufRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static ClrTxbufRegister &Instance();
    };

    class ClrRxbufRegister : public Register
    {
    public:
        ClrRxbufRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static ClrRxbufRegister &Instance();
    };

    class ClrLssmbufRegister : public Register
    {
    public:
        ClrLssmbufRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static ClrLssmbufRegister &Instance();
    };

    class ClrAlivecountSeedRegister : public Register
    {
    public:
        ClrAlivecountSeedRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static ClrAlivecountSeedRegister &Instance();
    };

    class SwporRegister : public Register
    {
    public:
        SwporRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static SwporRegister &Instance();

        uint8_t get_SWPOR();
        void set_SWPOR(uint8_t);
    };

    class SlpEnRegister : public Register
    {
    public:
        SlpEnRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static SlpEnRegister &Instance();

        uint8_t get_SLP_EN();
        void set_SLP_EN(uint8_t);
    };

    class VerConfigRegister : public Register
    {
    public:
        VerConfigRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static VerConfigRegister &Instance();

        uint8_t get_VER_CONFIG();
        void set_VER_CONFIG(uint8_t);
    };

    class LoadConfigRegister : public Register
    {
    public:
        LoadConfigRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static LoadConfigRegister &Instance();

        uint8_t get_LOAD_CONFIG();
        void set_LOAD_CONFIG(uint8_t);
    };

    class WdKeyRegister : public Register
    {
    public:
        WdKeyRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static WdKeyRegister &Instance();

        uint8_t get_WD_KEY();
        void set_WD_KEY(uint8_t);
    };

}