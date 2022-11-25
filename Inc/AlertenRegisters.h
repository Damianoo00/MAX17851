#pragma once
#include "RegisterClass.h"
namespace max17851
{

    class AlrtenRxRegister : public Register
    {
    public:
        AlrtenRxRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static AlrtenRxRegister &Instance();

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

    class AlrtenTxRegister : public Register
    {
    public:
        AlrtenTxRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static AlrtenTxRegister &Instance();

        uint8_t get_TX_EMPTY_ALRTEN();
        void set_TX_EMPTY_ALRTEN(uint8_t);

        uint8_t get_TX_STOP_ALRTEN();
        void set_TX_STOP_ALRTEN(uint8_t);

        uint8_t get_TX_FULL_ALRTEN();
        void set_TX_FULL_ALRTEN(uint8_t);

        uint8_t get_TX_OVRFLW_ERR_ALRTEN();
        void set_TX_OVRFLW_ERR_ALRTEN(uint8_t);

        uint8_t get_TX_IDLE_ALRTEN();
        void set_TX_IDLE_ALRTEN(uint8_t);

        uint8_t get_TX_BUSY_ALRTEN();
        void set_TX_BUSY_ALRTEN(uint8_t);

        uint8_t get_TX_ERR_ALRTEN();
        void set_TX_ERR_ALRTEN(uint8_t);
    };

    class AlrtenLssmByteRegister : public Register
    {
    public:
        AlrtenLssmByteRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static AlrtenLssmByteRegister &Instance();

        uint8_t get_HW_ERR_ALRTEN();
        void set_HW_ERR_ALRTEN(uint8_t);

        uint8_t get_ALIVECOUNT_ERR_ALRTEN();
        void set_ALIVECOUNT_ERR_ALRTEN(uint8_t);

        uint8_t get_COMMAND_OP_ALRTEN();
        void set_COMMAND_OP_ALRTEN(uint8_t);

        uint8_t get_COMM_MSMTCH_ERR_ALRTEN();
        void set_COMM_MSMTCH_ERR_ALRTEN(uint8_t);

        uint8_t get_ALRTPCKT_ERR_ALRTEN();
        void set_ALRTPCKT_ERR_ALRTEN(uint8_t);

        uint8_t get_COMM_ERR_ALRTEN();
        void set_COMM_ERR_ALRTEN(uint8_t);

        uint8_t get_ALRTPCKT_STATUS_ERR_ALRTEN();
        void set_ALRTPCKT_STATUS_ERR_ALRTEN(uint8_t);

        uint8_t get_RX_READY_ALRTEN();
        void set_RX_READY_ALRTEN(uint8_t);
    };

    class AlrtenGenRegister : public Register
    {
    public:
        AlrtenGenRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static AlrtenGenRegister &Instance();

        uint8_t get_ALRTPCKTBUF_HW_ERR_ALRTEN();
        void set_ALRTPCKTBUF_HW_ERR_ALRTEN(uint8_t);

        uint8_t get_ALRTPCKT_COMM_ERR_ALRTEN();
        void set_ALRTPCKT_COMM_ERR_ALRTEN(uint8_t);

        uint8_t get_DATAPATH_ERR_ALRTEN();
        void set_DATAPATH_ERR_ALRTEN(uint8_t);

        uint8_t get_GPIO_ERR_ALRTEN();
        void set_GPIO_ERR_ALRTEN(uint8_t);

        uint8_t get_WD_ERR_ALRTEN();
        void set_WD_ERR_ALRTEN(uint8_t);

        uint8_t get_DEV_COUNT_ERR_ALRTEN();
        void set_DEV_COUNT_ERR_ALRTEN(uint8_t);

        uint8_t get_HFOSC_HW_ERRB_ALRTEN();
        void set_HFOSC_HW_ERRB_ALRTEN(uint8_t);
    };

    class AlrtenOpstateRegister : public Register
    {
    public:
        AlrtenOpstateRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static AlrtenOpstateRegister &Instance();

        uint8_t get_SLP_ALRTEN();
        void set_SLP_ALRTEN(uint8_t);

        uint8_t get_SLP_STATUS_ERR_ALRTEN();
        void set_SLP_STATUS_ERR_ALRTEN(uint8_t);

        uint8_t get_SAFEMON_ALRTEN();
        void set_SAFEMON_ALRTEN(uint8_t);

        uint8_t get_SAFEMON_GPIO12_ALRTEN();
        void set_SAFEMON_GPIO12_ALRTEN(uint8_t);

        uint8_t get_SAFEMON_STATUS_ERR_ALRTEN();
        void set_SAFEMON_STATUS_ERR_ALRTEN(uint8_t);

        uint8_t get_SAFEMON_CONFIG_ERR_ALRTEN();
        void set_SAFEMON_CONFIG_ERR_ALRTEN(uint8_t);
    };

    class AlrtenBufRegister : public Register
    {
    public:
        AlrtenBufRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static AlrtenBufRegister &Instance();

        uint8_t get_LSSM_FULL_ALRTEN();
        void set_LSSM_FULL_ALRTEN(uint8_t);

        uint8_t get_ALRTPCKTBUF_FULL_ALRTEN();
        void set_ALRTPCKTBUF_FULL_ALRTEN(uint8_t);
    };

    class AlrtenWdRegister : public Register
    {
    public:
        AlrtenWdRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static AlrtenWdRegister &Instance();

        uint8_t get_WD_EXP_ERR_ALRTEN();
        void set_WD_EXP_ERR_ALRTEN(uint8_t);

        uint8_t get_WD_RJCT_ERR_ALRTEN();
        void set_WD_RJCT_ERR_ALRTEN(uint8_t);

        uint8_t get_WD_LFSR_ERR_ALRTEN();
        void set_WD_LFSR_ERR_ALRTEN(uint8_t);

        uint8_t get_WD_OPEN_ALRTEN();
        void set_WD_OPEN_ALRTEN(uint8_t);

        uint8_t get_WD_TO_ERR_ALRTEN();
        void set_WD_TO_ERR_ALRTEN(uint8_t);
    };

    class AlrtenGpioRegister : public Register
    {
    public:
        AlrtenGpioRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static AlrtenGpioRegister &Instance();

        uint8_t get_GPIO1_ERR_ALRTEN();
        void set_GPIO1_ERR_ALRTEN(uint8_t);

        uint8_t get_GPIO2_ERR_ALRTEN();
        void set_GPIO2_ERR_ALRTEN(uint8_t);

        uint8_t get_GPIO3_ERR_ALRTEN();
        void set_GPIO3_ERR_ALRTEN(uint8_t);

        uint8_t get_GPIO4_ERR_ALRTEN();
        void set_GPIO4_ERR_ALRTEN(uint8_t);
    };
}