#pragma once
#include "RegisterClass.h"
namespace max17851
{
    class AlertRxRegister : Register
    {
    public:
        Bits RX_EMPTY_ALRTEN;
        Bits RX_STOP_ALRTEN;
        Bits RX_FULL_ALRTEN;
        Bits RX_OVRFLW_ERR_ALRTEN;
        Bits RX_IDLE_ALRTEN;
        Bits RX_BUSY_ALRTEN;
        Bits RX_ERR_ALRTEN;
        AlertRxRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                 RX_EMPTY_ALRTEN(0, 1), RX_STOP_ALRTEN(1, 1), RX_FULL_ALRTEN(2, 1),
                                                                                 RX_OVRFLW_ERR_ALRTEN(3, 1), RX_IDLE_ALRTEN(4, 1), RX_BUSY_ALRTEN(5, 1),
                                                                                 RX_ERR_ALRTEN(7, 1) {}
    };

    class AlertTxRegister : Register
    {
    public:
        Bits TX_EMPTY_ALRT;
        Bits TX_STOP_ALRT;
        Bits TX_FULL_ALRT;
        Bits TX_OVRFLW_ERR_ALRT;
        Bits TX_IDLE_ALRT;
        Bits TX_BUSY_ALRT;
        Bits TX_ERR_ALRT;
        AlertTxRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                 TX_EMPTY_ALRT(0, 1), TX_STOP_ALRT(1, 1), TX_FULL_ALRT(2, 1),
                                                                                 TX_OVRFLW_ERR_ALRT(3, 1), TX_IDLE_ALRT(4, 1), TX_BUSY_ALRT(5, 1),
                                                                                 TX_ERR_ALRT(7, 1) {}
    };

    class AlertLssmByteRegister : Register
    {
    public:
        Bits HW_ERR_ALRT;
        Bits ALIVECOUNT_ERR_ALRT;
        Bits COMMAND_OP_ALRT;
        Bits COMM_MSMTCH_ERR_ALRT;
        Bits ALRTPCKT_ERR_ALRT;
        Bits COMM_ERR_ALRT;
        Bits ALRTPCKT_STATUS_ERR_ALRT;
        Bits RX_READY_ALRT;
        AlertLssmByteRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                       HW_ERR_ALRT(0, 1), ALIVECOUNT_ERR_ALRT(1, 1), COMMAND_OP_ALRT(2, 1),
                                                                                       COMM_MSMTCH_ERR_ALRT(3, 1), ALRTPCKT_ERR_ALRT(4, 1), COMM_ERR_ALRT(5, 1),
                                                                                       ALRTPCKT_STATUS_ERR_ALRT(6, 1), RX_READY_ALRT(7, 1) {}
    };

    class AlertGenRegister : Register
    {
    public:
        Bits ALRTPCKTBUF_HW_ERR_ALRT;
        Bits ALRTPCKT_COMM_ERR_ALRT;
        Bits DATAPATH_ERR_ALRT;
        Bits GPIO_ERR_ALRT;
        Bits WD_ERR_ALRT;
        Bits DEV_COUNT_ERR_ALRT;
        Bits HFOSC_HW_ERRB_ALRT;
        AlertGenRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                  ALRTPCKTBUF_HW_ERR_ALRT(0, 1), ALRTPCKT_COMM_ERR_ALRT(1, 1), DATAPATH_ERR_ALRT(3, 1),
                                                                                  GPIO_ERR_ALRT(4, 1), WD_ERR_ALRT(5, 1), DEV_COUNT_ERR_ALRT(6, 1), HFOSC_HW_ERRB_ALRT(7, 1) {}
    };

    class AlertOpstateRegister : Register
    {
    public:
        Bits SAFEMON_ALRT;
        AlertOpstateRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                      SAFEMON_ALRT(3, 1) {}
    };

    class AlertBufRegister : Register
    {
    public:
        Bits LSSM_FULL_ALRT;
        Bits ALRTPCKTBUF_FULL_ALRT;
        AlertBufRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                  LSSM_FULL_ALRT(3, 1), ALRTPCKTBUF_FULL_ALRT(7, 1) {}
    };

    class AlertWdRegister : Register
    {
    public:
        Bits WD_EXP_ERR_ALRT;
        Bits WD_RJCT_ERR_ALRT;
        Bits WD_LFSR_ERR_ALRT;
        Bits WD_OPEN_ALRT;
        Bits WD_TO_ERR_ALRT;
        AlertWdRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                 WD_EXP_ERR_ALRT(0, 1), WD_RJCT_ERR_ALRT(1, 1), WD_LFSR_ERR_ALRT(2, 1), WD_OPEN_ALRT(3, 1), WD_TO_ERR_ALRT(4, 1) {}
    };

    class AlertGpioRegister : Register
    {
    public:
        Bits GPIO1_ERR_ALRT;
        Bits GPIO2_ERR_ALRT;
        Bits GPIO3_ERR_ALRT;
        Bits GPIO4_ERR_ALRT;
        AlertGpioRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                   GPIO1_ERR_ALRT(0, 1), GPIO2_ERR_ALRT(1, 1), GPIO3_ERR_ALRT(2, 1), GPIO4_ERR_ALRT(3, 1) {}
    };
}