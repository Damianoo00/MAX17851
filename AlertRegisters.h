#pragma once
#include "RegisterClass.h"
namespace max17851
{

    class AlertRxRegister : public Register
    {
    public:
        AlertRxRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}

        uint8_t get_RX_EMPTY_ALRTEN();
        void set_RX_EMPTY_ALRTEN(uint8_t);

        uint8_t get_RX_STOP_ALRTEN();
        void set_RX_STOP_ALRTEN(uint8_t);

        uint8_t get_RX_FULL_ALRTEN();
        void set_RX_FULL_ALRTEN(uint8_t);

        uint8_t get_RX_OVRFLW_ERR_ALRTEN();
        void set_RX_OVRFLW_ERR_ALRTEN(uint8_t);

        uint8_t get_RX_IDLE_ALRTEN();
        void set_RX_IDLE_ALRTEN(uint8_t);

        uint8_t get_RX_BUSY_ALRTEN();
        void set_RX_BUSY_ALRTEN(uint8_t);

        uint8_t get_RX_ERR_ALRTEN();
        void set_RX_ERR_ALRTEN(uint8_t);
    };

    class AlertTxRegister : public Register
    {
    public:
        AlertTxRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}

        uint8_t get_TX_EMPTY_ALRT();
        void set_TX_EMPTY_ALRT(uint8_t);

        uint8_t get_TX_STOP_ALRT();
        void set_TX_STOP_ALRT(uint8_t);

        uint8_t get_TX_FULL_ALRT();
        void set_TX_FULL_ALRT(uint8_t);

        uint8_t get_TX_OVRFLW_ERR_ALRT();
        void set_TX_OVRFLW_ERR_ALRT(uint8_t);

        uint8_t get_TX_IDLE_ALRT();
        void set_TX_IDLE_ALRT(uint8_t);

        uint8_t get_TX_BUSY_ALRT();
        void set_TX_BUSY_ALRT(uint8_t);

        uint8_t get_TX_ERR_ALRT();
        void set_TX_ERR_ALRT(uint8_t);
    };

    class AlertLssmByteRegister : public Register
    {
    public:
        AlertLssmByteRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}

        uint8_t get_HW_ERR_ALRT();
        void set_HW_ERR_ALRT(uint8_t);

        uint8_t get_ALIVECOUNT_ERR_ALRT();
        void set_ALIVECOUNT_ERR_ALRT(uint8_t);

        uint8_t get_COMMAND_OP_ALRT();
        void set_COMMAND_OP_ALRT(uint8_t);

        uint8_t get_COMM_MSMTCH_ERR_ALRT();
        void set_COMM_MSMTCH_ERR_ALRT(uint8_t);

        uint8_t get_ALRTPCKT_ERR_ALRT();
        void set_ALRTPCKT_ERR_ALRT(uint8_t);

        uint8_t get_COMM_ERR_ALRT();
        void set_COMM_ERR_ALRT(uint8_t);

        uint8_t get_ALRTPCKT_STATUS_ERR_ALRT();
        void set_ALRTPCKT_STATUS_ERR_ALRT(uint8_t);

        uint8_t get_RX_READY_ALRT();
        void set_RX_READY_ALRT(uint8_t);
    };

    class AlertGenRegister : public Register
    {
    public:
        AlertGenRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}

        uint8_t get_ALRTPCKTBUF_HW_ERR_ALRT();
        void set_ALRTPCKTBUF_HW_ERR_ALRT(uint8_t);

        uint8_t get_ALRTPCKT_COMM_ERR_ALRT();
        void set_ALRTPCKT_COMM_ERR_ALRT(uint8_t);

        uint8_t get_DATAPATH_ERR_ALRT();
        void set_DATAPATH_ERR_ALRT(uint8_t);

        uint8_t get_GPIO_ERR_ALRT();
        void set_GPIO_ERR_ALRT(uint8_t);

        uint8_t get_WD_ERR_ALRT();
        void set_WD_ERR_ALRT(uint8_t);

        uint8_t get_DEV_COUNT_ERR_ALRT();
        void set_DEV_COUNT_ERR_ALRT(uint8_t);

        uint8_t get_HFOSC_HW_ERRB_ALRT();
        void set_HFOSC_HW_ERRB_ALRT(uint8_t);
    };

    class AlertOpstateRegister : public Register
    {
    public:
        AlertOpstateRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}

        uint8_t get_SAFEMON_ALRT();
        void set_SAFEMON_ALRT(uint8_t);
    };

    class AlertBufRegister : public Register
    {
    public:
        AlertBufRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}

        uint8_t get_LSSM_FULL_ALRT();
        void set_LSSM_FULL_ALRT(uint8_t);

        uint8_t get_ALRTPCKTBUF_FULL_ALRT();
        void set_ALRTPCKTBUF_FULL_ALRT(uint8_t);
    };

    class AlertWdRegister : public Register
    {
    public:
        AlertWdRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}

        uint8_t get_WD_EXP_ERR_ALRT();
        void set_WD_EXP_ERR_ALRT(uint8_t);

        uint8_t get_WD_RJCT_ERR_ALRT();
        void set_WD_RJCT_ERR_ALRT(uint8_t);

        uint8_t get_WD_LFSR_ERR_ALRT();
        void set_WD_LFSR_ERR_ALRT(uint8_t);

        uint8_t get_WD_OPEN_ALRT();
        void set_WD_OPEN_ALRT(uint8_t);

        uint8_t get_WD_TO_ERR_ALRT();
        void set_WD_TO_ERR_ALRT(uint8_t);
    };

    class AlertGpioRegister : public Register
    {
    public:
        AlertGpioRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}

        uint8_t get_GPIO1_ERR_ALRT();
        void set_GPIO1_ERR_ALRT(uint8_t);

        uint8_t get_GPIO2_ERR_ALRT();
        void set_GPIO2_ERR_ALRT(uint8_t);

        uint8_t get_GPIO3_ERR_ALRT();
        void set_GPIO3_ERR_ALRT(uint8_t);

        uint8_t get_GPIO4_ERR_ALRT();
        void set_GPIO4_ERR_ALRT(uint8_t);
    };

}