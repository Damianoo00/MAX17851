#pragma once
#include "RegisterClass.h"

namespace max17851
{

    class ConfigGen0Register : public Register
    {
    public:
        ConfigGen0Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static ConfigGen0Register &Instance();

        uint8_t get_DEV_COUNT();
        void set_DEV_COUNT(uint8_t);
    };

    class ConfigGen1Register : public Register
    {
    public:
        ConfigGen1Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static ConfigGen1Register &Instance();

        uint8_t get_BAUD_RATE();
        void set_BAUD_RATE(uint8_t);

        uint8_t get_SINGLE_ENDED();
        void set_SINGLE_ENDED(uint8_t);
    };

    class ConfigGen2Register : public Register
    {
    public:
        ConfigGen2Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static ConfigGen2Register &Instance();

        uint8_t get_TX_NOPREAMBLE();
        void set_TX_NOPREAMBLE(uint8_t);

        uint8_t get_TX_NOSTOP();
        void set_TX_NOSTOP(uint8_t);

        uint8_t get_TX_PAUSE();
        void set_TX_PAUSE(uint8_t);

        uint8_t get_TX_ODDPARITY();
        void set_TX_ODDPARITY(uint8_t);

        uint8_t get_TX_QUEUE();
        void set_TX_QUEUE(uint8_t);

        uint8_t get_TX_PREAMBLES();
        void set_TX_PREAMBLES(uint8_t);

        uint8_t get_TX_RAW_DATA();
        void set_TX_RAW_DATA(uint8_t);
    };

    class ConfigGen3Register : public Register
    {
    public:
        ConfigGen3Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static ConfigGen3Register &Instance();

        uint8_t get_ALRTPCKT_TIMING();
        void set_ALRTPCKT_TIMING(uint8_t);

        uint8_t get_SPI_DOUT_EN();
        void set_SPI_DOUT_EN(uint8_t);

        uint8_t get_TX_UNLIMITED();
        void set_TX_UNLIMITED(uint8_t);

        uint8_t get_TX_AUTO();
        void set_TX_AUTO(uint8_t);
    };

    class ConfigGen4Register : public Register
    {
    public:
        ConfigGen4Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static ConfigGen4Register &Instance();

        uint8_t get_ALIVECOUNT_EN();
        void set_ALIVECOUNT_EN(uint8_t);

        uint8_t get_DC_EN();
        void set_DC_EN(uint8_t);

        uint8_t get_MS_EN();
        void set_MS_EN(uint8_t);

        uint8_t get_RXSWAP_EN();
        void set_RXSWAP_EN(uint8_t);

        uint8_t get_CO_ALRTPCKTEN();
        void set_CO_ALRTPCKTEN(uint8_t);
    };

    class ConfigGen5Register : public Register
    {
    public:
        ConfigGen5Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static ConfigGen5Register &Instance();

        uint8_t get_SPI_SFTYCSB();
        void set_SPI_SFTYCSB(uint8_t);

        uint8_t get_SPI_SFTYSDI();
        void set_SPI_SFTYSDI(uint8_t);

        uint8_t get_SPI_SFTYSCLK();
        void set_SPI_SFTYSCLK(uint8_t);

        uint8_t get_ALRTPCKT_DBNC();
        void set_ALRTPCKT_DBNC(uint8_t);

        uint8_t get_TX_HI_Z();
        void set_TX_HI_Z(uint8_t);

        uint8_t get_TX_START_SETUP();
        void set_TX_START_SETUP(uint8_t);
    };

    class ConfigSafeMon0Register : public Register
    {
    public:
        ConfigSafeMon0Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static ConfigSafeMon0Register &Instance();

        uint8_t get_GPIOREC_DLY();
        void set_GPIOREC_DLY(uint8_t);
    };

    class ConfigSafeMon1Register : public Register
    {
    public:
        ConfigSafeMon1Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static ConfigSafeMon1Register &Instance();

        uint8_t get_CONT_TIMER_DLY();
        void set_CONT_TIMER_DLY(uint8_t);
    };

    class ConfigSafeMon2Register : public Register
    {
    public:
        ConfigSafeMon2Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static ConfigSafeMon2Register &Instance();

        uint8_t get_SAFEMON_SCAN_DLY();
        void set_SAFEMON_SCAN_DLY(uint8_t);
    };

    class ConfigSafeMon3Register : public Register
    {
    public:
        ConfigSafeMon3Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static ConfigSafeMon3Register &Instance();

        uint8_t get_SM_GPIO1_MASK();
        void set_SM_GPIO1_MASK(uint8_t);

        uint8_t get_SM_GPIO2_MASK();
        void set_SM_GPIO2_MASK(uint8_t);

        uint8_t get_SM_GPIO3_MASK();
        void set_SM_GPIO3_MASK(uint8_t);

        uint8_t get_SM_GPIO4_MASK();
        void set_SM_GPIO4_MASK(uint8_t);

        uint8_t get_NOMON();
        void set_NOMON(uint8_t);
    };

    class ConfigSlpRegister : public Register
    {
    public:
        ConfigSlpRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static ConfigSlpRegister &Instance();

        uint8_t get_SLP_CBNTFY();
        void set_SLP_CBNTFY(uint8_t);

        uint8_t get_SLP_ALRTPCKTEN();
        void set_SLP_ALRTPCKTEN(uint8_t);

        uint8_t get_SLP_SCAN_DLY();
        void set_SLP_SCAN_DLY(uint8_t);
    };

    class ConfigCommRegister : public Register
    {
    public:
        ConfigCommRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static ConfigCommRegister &Instance();

        uint8_t get_COMM_TO_DLY();
        void set_COMM_TO_DLY(uint8_t);

        uint8_t get_COMM_RTRY();
        void set_COMM_RTRY(uint8_t);
    };

    class StatusDbncMaskRegister0 : public Register
    {
    public:
        StatusDbncMaskRegister0(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static StatusDbncMaskRegister0 &Instance();

        uint8_t get_STATUS_DBNC_MASK();
        void set_STATUS_DBNC_MASK(uint8_t);
    };

    class StatusDbncMaskRegister1 : public StatusDbncMaskRegister0
    {
    public:
        StatusDbncMaskRegister1(const uint8_t writeAddress, const uint8_t readAddress) : StatusDbncMaskRegister0(writeAddress, readAddress) {}
        static StatusDbncMaskRegister1 &Instance();
    };

    class StatusErrorMaskRegister0 : public Register
    {
    public:
        StatusErrorMaskRegister0(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static StatusErrorMaskRegister0 &Instance();

        uint8_t get_STATUS_ERROR_MASK();
        void set_STATUS_ERROR_MASK(uint8_t);
    };

    class StatusErrorMaskRegister1 : public StatusErrorMaskRegister0
    {
    public:
        StatusErrorMaskRegister1(const uint8_t writeAddress, const uint8_t readAddress) : StatusErrorMaskRegister0(writeAddress, readAddress) {}
        static StatusErrorMaskRegister1 &Instance();
    };

    class ConfigGpio12Register : public Register
    {
    public:
        ConfigGpio12Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static ConfigGpio12Register &Instance();

        uint8_t get_GPIO1_CFG();
        void set_GPIO1_CFG(uint8_t);

        uint8_t get_GPIO2_CFG();
        void set_GPIO2_CFG(uint8_t);
    };

    class ConfigGpio34Register : public Register
    {
    public:
        ConfigGpio34Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static ConfigGpio34Register &Instance();

        uint8_t get_GPIO3_CFG();
        void set_GPIO3_CFG(uint8_t);

        uint8_t get_GPIO4_CFG();
        void set_GPIO4_CFG(uint8_t);
    };

    class ConfigWd0Register : public Register
    {
    public:
        ConfigWd0Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static ConfigWd0Register &Instance();

        uint8_t get_WD_CLO();
        void set_WD_CLO(uint8_t);

        uint8_t get_WD_OPN();
        void set_WD_OPN(uint8_t);
    };

    class ConfigWd1Register : public Register
    {
    public:
        ConfigWd1Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static ConfigWd1Register &Instance();

        uint8_t get_WD_DIV();
        void set_WD_DIV(uint8_t);

        uint8_t get_WD_1UD();
        void set_WD_1UD(uint8_t);
    };

    class ConfigWd2Register : public Register
    {
    public:
        ConfigWd2Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static ConfigWd2Register &Instance();

        uint8_t get_WD_DBNC();
        void set_WD_DBNC(uint8_t);

        uint8_t get_WD_SWW();
        void set_WD_SWW(uint8_t);

        uint8_t get_WD_EN();
        void set_WD_EN(uint8_t);
    };

}