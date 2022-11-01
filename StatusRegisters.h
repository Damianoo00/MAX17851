#pragma once
#include "RegisterClass.h"
namespace max17851
{
    class StatusRxRegister : Register
    {
    public:
        Bits RX_EMPTY;
        Bits RX_STOP;
        Bits RX_FULL;
        Bits RX_OVRFLW_ERR;
        Bits RX_IDLE;
        Bits RX_BUSY;
        Bits RX_ERR;
        StatusRxRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                  RX_EMPTY(0, 1), RX_STOP(1, 1), RX_FULL(2, 1),
                                                                                  RX_OVRFLW_ERR(3, 1), RX_IDLE(4, 1), RX_BUSY(5, 1),
                                                                                  RX_ERR(7, 1) {}
    };

    class StatusTxRegister : Register
    {
    public:
        Bits TX_EMPTY;
        Bits TX_STOP;
        Bits TX_FULL;
        Bits TX_OVRFLW_ERR;
        Bits TX_IDLE;
        Bits TX_BUSY;
        Bits TX_ERR;
        StatusTxRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                  TX_EMPTY(0, 1), TX_STOP(1, 1), TX_FULL(2, 1),
                                                                                  TX_OVRFLW_ERR(3, 1), TX_IDLE(4, 1), TX_BUSY(5, 1),
                                                                                  TX_ERR(7, 1) {}
    };

    class StatusLssmByteRegister : Register
    {
    public:
        Bits HW_ERR;
        Bits ALIVECOUNT_ERR;
        Bits COMMAND_OP;
        Bits COMM_MSMTCH_ERR;
        Bits ALRTPCKT_ERR;
        Bits COMM_ERR;
        Bits ALRTPCKT_STATUS_ERR;
        Bits RX_READY;
        StatusLssmByteRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                        HW_ERR(0, 1), ALIVECOUNT_ERR(1, 1), COMMAND_OP(2, 1),
                                                                                        COMM_MSMTCH_ERR(3, 1), ALRTPCKT_ERR(4, 1), COMM_ERR(5, 1),
                                                                                        ALRTPCKT_STATUS_ERR(6, 1), RX_READY(7, 1) {}
    };

    class StatusGenRegister : Register
    {
    public:
        Bits ALRTPCKTBUF_HW_ERR;
        Bits ALRTPCKT_COMM_ERR;
        Bits DATAPATH_ERR;
        Bits GPIO_ERR;
        Bits WD_ERR;
        Bits DEV_COUNT_ERR;
        Bits HFOSC_HW_ERRB;
        StatusGenRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                   ALRTPCKTBUF_HW_ERR(0, 1), ALRTPCKT_COMM_ERR(1, 1), DATAPATH_ERR(3, 1),
                                                                                   GPIO_ERR(4, 1), WD_ERR(5, 1), DEV_COUNT_ERR(6, 1), HFOSC_HW_ERRB(7, 1) {}
    };

    class StatusOpstateRegister : Register
    {
    public:
        Bits SAFEMON;
        StatusOpstateRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                       SAFEMON(3, 1) {}
    };

    class StatusBufRegister : Register
    {
    public:
        Bits LSSM_FULL;
        Bits ALRTPCKTBUF_FULL;
        StatusBufRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                   LSSM_FULL(3, 1), ALRTPCKTBUF_FULL(7, 1) {}
    };

    class StatusWdRegister : Register
    {
    public:
        Bits WD_EXP_ERR;
        Bits WD_RJCT_ERR;
        Bits WD_LFSR_ERR;
        Bits WD_OPEN;
        Bits WD_TO_ERR;
        StatusWdRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                  WD_EXP_ERR(0, 1), WD_RJCT_ERR(1, 1), WD_LFSR_ERR(2, 1), WD_OPEN(3, 1), WD_TO_ERR(4, 1) {}
    };

    class StatusGpioRegister : Register
    {
    public:
        Bits GPIO1_ERR;
        Bits GPIO2_ERR;
        Bits GPIO3_ERR;
        Bits GPIO4_ERR;
        Bits GPIO1_RD;
        Bits GPIO2_RD;
        Bits GPIO3_RD;
        Bits GPIO4_RD;
        StatusGpioRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                    GPIO1_ERR(0, 1), GPIO2_ERR(1, 1), GPIO3_ERR(2, 1), GPIO4_ERR(3, 1),
                                                                                    GPIO1_RD(4, 1), GPIO2_RD(5, 1), GPIO3_RD(6, 1), GPIO4_RD(7, 1) {}
    };
}