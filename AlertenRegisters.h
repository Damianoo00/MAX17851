#pragma once
#include "RegisterClass.h"
namespace max17851
{
    class AlrtenRxRegister : Register
    {
    public:
        Bits RX_EMPTY_ALRTEN;
        Bits RX_STOP_ALRTEN;
        Bits RX_FULL_ALRTEN;
        Bits RX_OVRFLW_ERR_ALRTEN;
        Bits RX_IDLE_ALRTEN;
        Bits RX_BUSY_ALRTEN;
        Bits RX_ERR_ALRTEN;
        AlrtenRxRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                  RX_EMPTY_ALRTEN(0, 1), RX_STOP_ALRTEN(1, 1), RX_FULL_ALRTEN(2, 1),
                                                                                  RX_OVRFLW_ERR_ALRTEN(3, 1), RX_IDLE_ALRTEN(4, 1), RX_BUSY_ALRTEN(5, 1),
                                                                                  RX_ERR_ALRTEN(7, 1) {}
    };

    class AlrtenTxRegister : Register
    {
    public:
        Bits TX_EMPTY_ALRTEN;
        Bits TX_STOP_ALRTEN;
        Bits TX_FULL_ALRTEN;
        Bits TX_OVRFLW_ERR_ALRTEN;
        Bits TX_IDLE_ALRTEN;
        Bits TX_BUSY_ALRTEN;
        Bits TX_ERR_ALRTEN;
        AlrtenTxRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                  TX_EMPTY_ALRTEN(0, 1), TX_STOP_ALRTEN(1, 1), TX_FULL_ALRTEN(2, 1),
                                                                                  TX_OVRFLW_ERR_ALRTEN(3, 1), TX_IDLE_ALRTEN(4, 1), TX_BUSY_ALRTEN(5, 1),
                                                                                  TX_ERR_ALRTEN(7, 1) {}
    };

    class AlrtenLssmByteRegister : Register
    {
    public:
        Bits HW_ERR_ALRTEN;
        Bits ALIVECOUNT_ERR_ALRTEN;
        Bits COMMAND_OP_ALRTEN;
        Bits COMM_MSMTCH_ERR_ALRTEN;
        Bits ALRTPCKT_ERR_ALRTEN;
        Bits COMM_ERR_ALRTEN;
        Bits ALRTPCKT_STATUS_ERR_ALRTEN;
        Bits RX_READY_ALRTEN;
        AlrtenLssmByteRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                        HW_ERR_ALRTEN(0, 1), ALIVECOUNT_ERR_ALRTEN(1, 1), COMMAND_OP_ALRTEN(2, 1),
                                                                                        COMM_MSMTCH_ERR_ALRTEN(3, 1), ALRTPCKT_ERR_ALRTEN(4, 1), COMM_ERR_ALRTEN(5, 1),
                                                                                        ALRTPCKT_STATUS_ERR_ALRTEN(6, 1), RX_READY_ALRTEN(7, 1) {}
    };

    class AlrtenGenRegister : Register
    {
    public:
        Bits ALRTPCKTBUF_HW_ERR_ALRTEN;
        Bits ALRTPCKT_COMM_ERR_ALRTEN;
        Bits DATAPATH_ERR_ALRTEN;
        Bits GPIO_ERR_ALRTEN;
        Bits WD_ERR_ALRTEN;
        Bits DEV_COUNT_ERR_ALRTEN;
        Bits HFOSC_HW_ERRB_ALRTEN;
        AlrtenGenRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                   ALRTPCKTBUF_HW_ERR_ALRTEN(0, 1), ALRTPCKT_COMM_ERR_ALRTEN(1, 1), DATAPATH_ERR_ALRTEN(3, 1),
                                                                                   GPIO_ERR_ALRTEN(4, 1), WD_ERR_ALRTEN(5, 1), DEV_COUNT_ERR_ALRTEN(6, 1), HFOSC_HW_ERRB_ALRTEN(7, 1) {}
    };

    class AlrtenOpstateRegister : Register
    {
    public:
        Bits SAFEMON_ALRTEN;
        AlrtenOpstateRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                       SAFEMON_ALRTEN(3, 1) {}
    };

    class AlrtenBufRegister : Register
    {
    public:
        Bits LSSM_FULL_ALRTEN;
        Bits ALRTPCKTBUF_FULL_ALRTEN;
        AlrtenBufRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                   LSSM_FULL_ALRTEN(3, 1), ALRTPCKTBUF_FULL_ALRTEN(7, 1) {}
    };

    class AlrtenWdRegister : Register
    {
    public:
        Bits WD_EXP_ERR_ALRTEN;
        Bits WD_RJCT_ERR_ALRTEN;
        Bits WD_LFSR_ERR_ALRTEN;
        Bits WD_OPEN_ALRTEN;
        Bits WD_TO_ERR_ALRTEN;
        AlrtenWdRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                  WD_EXP_ERR_ALRTEN(0, 1), WD_RJCT_ERR_ALRTEN(1, 1), WD_LFSR_ERR_ALRTEN(2, 1), WD_OPEN_ALRTEN(3, 1), WD_TO_ERR_ALRTEN(4, 1) {}
    };

    class AlrtenGpioRegister : Register
    {
    public:
        Bits GPIO1_ERR_ALRTEN;
        Bits GPIO2_ERR_ALRTEN;
        Bits GPIO3_ERR_ALRTEN;
        Bits GPIO4_ERR_ALRTEN;
        AlrtenGpioRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                    GPIO1_ERR_ALRTEN(0, 1), GPIO2_ERR_ALRTEN(1, 1), GPIO3_ERR_ALRTEN(2, 1), GPIO4_ERR_ALRTEN(3, 1) {}
    };
}
