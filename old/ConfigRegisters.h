#pragma once
#include "RegisterClass.h"
namespace max17851
{
    class ConfigGen0Register : public Register
    {
    public:
        Bits DEV_COUNT;
        ConfigGen0Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), DEV_COUNT(0, 6) {}
    };

    class ConfigGen1Register : public Register
    {
    public:
        Bits BAUD_RATE;
        Bits SINGLE_ENDED;
        ConfigGen1Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), BAUD_RATE(4, 3), SINGLE_ENDED(7, 1) {}
    };

    class ConfigGen2Register : public Register
    {
    public:
        Bits TX_NOPREAMBLE;
        Bits TX_NOSTOP;
        Bits TX_PAUSE;
        Bits TX_ODDPARITY;
        Bits TX_QUEUE;
        Bits TX_PREAMBLES;
        Bits TX_RAW_DATA;
        ConfigGen2Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                    TX_NOPREAMBLE(0, 1), TX_NOSTOP(1, 1), TX_PAUSE(2, 1), TX_ODDPARITY(3, 1), TX_QUEUE(4, 1), TX_PREAMBLES(5, 1), TX_RAW_DATA(6, 2) {}
    };

    class ConfigGen3Register : public Register
    {
    public:
        Bits ALRTPCKT_TIMING;
        Bits SPI_DOUT_EN;
        Bits TX_UNLIMITED;
        Bits TX_AUTO;
        ConfigGen3Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                    ALRTPCKT_TIMING(0, 4), SPI_DOUT_EN(5, 1), TX_UNLIMITED(6, 1), TX_AUTO(7, 1) {}
    };

    class ConfigGen4Register : public Register
    {
    public:
        Bits ALIVECOUNT_EN;
        Bits DC_EN;
        Bits MS_EN;
        Bits RXSWAP_EN;
        Bits CO_ALRTPCKTEN;
        ConfigGen4Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                    ALIVECOUNT_EN(0, 2), DC_EN(2, 2), MS_EN(5, 2), RXSWAP_EN(6, 1), CO_ALRTPCKTEN(7, 1) {}
    };

    class ConfigGen5Register : public Register
    {
    public:
        Bits SPI_SFTYCSB;
        Bits SPI_SFTYSDI;
        Bits SPI_SFTYSCLK;
        Bits ALRTPCKT_DBNC;
        Bits TX_HI_Z;
        Bits TX_START_SETUP;

        ConfigGen5Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                    SPI_SFTYCSB(0, 1), SPI_SFTYSDI(1, 1), SPI_SFTYSCLK(2, 1), ALRTPCKT_DBNC(3, 3), TX_HI_Z(6, 1), TX_START_SETUP(7, 1) {}
    };

    class ConfigSafeMon0Register : public Register
    {
    public:
        Bits GPIOREC_DLY;
        ConfigSafeMon0Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), GPIOREC_DLY(0, 8) {}
    };

    class ConfigSafeMon1Register : public Register
    {
    public:
        Bits CONT_TIMER_DLY;
        ConfigSafeMon1Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), CONT_TIMER_DLY(0, 8) {}
    };

    class ConfigSafeMon2Register : public Register
    {
    public:
        Bits SAFEMON_SCAN_DLY;
        ConfigSafeMon2Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), SAFEMON_SCAN_DLY(0, 1) {}
    };

    class ConfigSafeMon3Register : public Register
    {
    public:
        Bits SM_GPIO1_MASK;
        Bits SM_GPIO2_MASK;
        Bits SM_GPIO3_MASK;
        Bits SM_GPIO4_MASK;
        Bits NOMON;
        ConfigSafeMon3Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), SM_GPIO1_MASK(0, 1), SM_GPIO2_MASK(1, 1), SM_GPIO3_MASK(2, 1), SM_GPIO4_MASK(3, 1), NOMON(8, 1) {}
    };

    class ConfigSlpRegister : public Register
    {
    public:
        Bits SLP_CBNTFY;
        Bits SLP_ALRTPCKTEN;
        Bits SLP_SCAN_DLY;
        ConfigSlpRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), SLP_CBNTFY(0, 3), SLP_ALRTPCKTEN(3, 1), SLP_SCAN_DLY(4, 2) {}
    };

    class ConfigCommRegister : Register
    {
    public:
        Bits COMM_TO_DLY;
        Bits COMM_RTRY;
        ConfigCommRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), COMM_TO_DLY(0, 3), COMM_RTRY(4, 2) {}
    };

    class StatusDbncMaskRegister : Register
    {
    public:
        Bits STATUS_DBNC_MASK;
        StatusDbncMaskRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), STATUS_DBNC_MASK(0, 8) {}
    };

    class StatusErrorMaskRegister : Register
    {
    public:
        Bits STATUS_ERROR_MASK;
        StatusErrorMaskRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), STATUS_ERROR_MASK(0, 8) {}
    };

    class ConfigGpio12Register : public Register
    {
    public:
        Bits GPIO1_CFG;
        Bits GPIO2_CFG;
        ConfigGpio12Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), GPIO1_CFG(0, 3), GPIO2_CFG(4, 3) {}
    };

    class ConfigGpio34Register : public Register
    {
    public:
        Bits GPIO3_CFG;
        Bits GPIO4_CFG;
        ConfigGpio34Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), GPIO3_CFG(0, 3), GPIO4_CFG(4, 3) {}
    };

    class ConfigWd0Register : Register
    {
    public:
        Bits WD_CLO;
        Bits WD_OPN;
        ConfigWd0Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), WD_CLO(0, 4), WD_OPN(4, 4) {}
    };

    class ConfigWd1Register : public Register
    {
    public:
        Bits WD_DIV;
        Bits WD_1UD;
        ConfigWd1Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), WD_DIV(0, 5), WD_1UD(5, 3) {}
    };

    class ConfigWd2Register : public Register
    {
    public:
        Bits WD_DBNC;
        Bits WD_SWW;
        Bits WD_EN;
        ConfigWd2Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), WD_DBNC(0, 3), WD_SWW(3, 1), WD_EN(7, 1) {}
    };
}