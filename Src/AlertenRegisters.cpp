#include "../Inc/AlertenRegisters.h"

namespace max17851
{
    uint8_t AlrtenRxRegister::get_RX_EMPTY_ALRTEN()
    {
        return get(0, 1);
    }
    void AlrtenRxRegister::set_RX_EMPTY_ALRTEN(uint8_t bitField)
    {
        set(0, 1, bitField);
    }

    uint8_t AlrtenRxRegister::get_RX_STOP_ALRTEN()
    {
        return get(1, 1);
    }
    void AlrtenRxRegister::set_RX_STOP_ALRTEN(uint8_t bitField)
    {
        set(1, 1, bitField);
    }

    uint8_t AlrtenRxRegister::get_RX_FULL_ALRTEN()
    {
        return get(2, 1);
    }
    void AlrtenRxRegister::set_RX_FULL_ALRTEN(uint8_t bitField)
    {
        set(2, 1, bitField);
    }

    uint8_t AlrtenRxRegister::get_RX_OVRFLW_ERR_ALRTEN()
    {
        return get(3, 1);
    }
    void AlrtenRxRegister::set_RX_OVRFLW_ERR_ALRTEN(uint8_t bitField)
    {
        set(3, 1, bitField);
    }

    uint8_t AlrtenRxRegister::get_RX_IDLE_ALRTEN()
    {
        return get(4, 1);
    }
    void AlrtenRxRegister::set_RX_IDLE_ALRTEN(uint8_t bitField)
    {
        set(4, 1, bitField);
    }

    uint8_t AlrtenRxRegister::get_RX_BUSY_ALRTEN()
    {
        return get(5, 1);
    }
    void AlrtenRxRegister::set_RX_BUSY_ALRTEN(uint8_t bitField)
    {
        set(5, 1, bitField);
    }

    uint8_t AlrtenRxRegister::get_RX_ERR_ALRTEN()
    {
        return get(7, 1);
    }
    void AlrtenRxRegister::set_RX_ERR_ALRTEN(uint8_t bitField)
    {
        set(7, 1, bitField);
    }

    uint8_t AlrtenTxRegister::get_TX_EMPTY_ALRTEN()
    {
        return get(0, 1);
    }
    void AlrtenTxRegister::set_TX_EMPTY_ALRTEN(uint8_t bitField)
    {
        set(0, 1, bitField);
    }

    uint8_t AlrtenTxRegister::get_TX_STOP_ALRTEN()
    {
        return get(1, 1);
    }
    void AlrtenTxRegister::set_TX_STOP_ALRTEN(uint8_t bitField)
    {
        set(1, 1, bitField);
    }

    uint8_t AlrtenTxRegister::get_TX_FULL_ALRTEN()
    {
        return get(2, 1);
    }
    void AlrtenTxRegister::set_TX_FULL_ALRTEN(uint8_t bitField)
    {
        set(2, 1, bitField);
    }

    uint8_t AlrtenTxRegister::get_TX_OVRFLW_ERR_ALRTEN()
    {
        return get(3, 1);
    }
    void AlrtenTxRegister::set_TX_OVRFLW_ERR_ALRTEN(uint8_t bitField)
    {
        set(3, 1, bitField);
    }

    uint8_t AlrtenTxRegister::get_TX_IDLE_ALRTEN()
    {
        return get(4, 1);
    }
    void AlrtenTxRegister::set_TX_IDLE_ALRTEN(uint8_t bitField)
    {
        set(4, 1, bitField);
    }

    uint8_t AlrtenTxRegister::get_TX_BUSY_ALRTEN()
    {
        return get(5, 1);
    }
    void AlrtenTxRegister::set_TX_BUSY_ALRTEN(uint8_t bitField)
    {
        set(5, 1, bitField);
    }

    uint8_t AlrtenTxRegister::get_TX_ERR_ALRTEN()
    {
        return get(7, 1);
    }
    void AlrtenTxRegister::set_TX_ERR_ALRTEN(uint8_t bitField)
    {
        set(7, 1, bitField);
    }
    uint8_t AlrtenLssmByteRegister::get_HW_ERR_ALRTEN()
    {
        return get(0, 1);
    }
    void AlrtenLssmByteRegister::set_HW_ERR_ALRTEN(uint8_t bitField)
    {
        set(0, 1, bitField);
    }

    uint8_t AlrtenLssmByteRegister::get_ALIVECOUNT_ERR_ALRTEN()
    {
        return get(1, 1);
    }
    void AlrtenLssmByteRegister::set_ALIVECOUNT_ERR_ALRTEN(uint8_t bitField)
    {
        set(1, 1, bitField);
    }

    uint8_t AlrtenLssmByteRegister::get_COMMAND_OP_ALRTEN()
    {
        return get(2, 1);
    }
    void AlrtenLssmByteRegister::set_COMMAND_OP_ALRTEN(uint8_t bitField)
    {
        set(2, 1, bitField);
    }

    uint8_t AlrtenLssmByteRegister::get_COMM_MSMTCH_ERR_ALRTEN()
    {
        return get(3, 1);
    }
    void AlrtenLssmByteRegister::set_COMM_MSMTCH_ERR_ALRTEN(uint8_t bitField)
    {
        set(3, 1, bitField);
    }

    uint8_t AlrtenLssmByteRegister::get_ALRTPCKT_ERR_ALRTEN()
    {
        return get(4, 1);
    }
    void AlrtenLssmByteRegister::set_ALRTPCKT_ERR_ALRTEN(uint8_t bitField)
    {
        set(4, 1, bitField);
    }

    uint8_t AlrtenLssmByteRegister::get_COMM_ERR_ALRTEN()
    {
        return get(5, 1);
    }
    void AlrtenLssmByteRegister::set_COMM_ERR_ALRTEN(uint8_t bitField)
    {
        set(5, 1, bitField);
    }

    uint8_t AlrtenLssmByteRegister::get_ALRTPCKT_STATUS_ERR_ALRTEN()
    {
        return get(6, 1);
    }
    void AlrtenLssmByteRegister::set_ALRTPCKT_STATUS_ERR_ALRTEN(uint8_t bitField)
    {
        set(6, 1, bitField);
    }

    uint8_t AlrtenLssmByteRegister::get_RX_READY_ALRTEN()
    {
        return get(7, 1);
    }
    void AlrtenLssmByteRegister::set_RX_READY_ALRTEN(uint8_t bitField)
    {
        set(7, 1, bitField);
    }

    uint8_t AlrtenGenRegister::get_ALRTPCKTBUF_HW_ERR_ALRTEN()
    {
        return get(0, 1);
    }
    void AlrtenGenRegister::set_ALRTPCKTBUF_HW_ERR_ALRTEN(uint8_t bitField)
    {
        set(0, 1, bitField);
    }

    uint8_t AlrtenGenRegister::get_ALRTPCKT_COMM_ERR_ALRTEN()
    {
        return get(1, 1);
    }
    void AlrtenGenRegister::set_ALRTPCKT_COMM_ERR_ALRTEN(uint8_t bitField)
    {
        set(1, 1, bitField);
    }

    uint8_t AlrtenGenRegister::get_DATAPATH_ERR_ALRTEN()
    {
        return get(3, 1);
    }
    void AlrtenGenRegister::set_DATAPATH_ERR_ALRTEN(uint8_t bitField)
    {
        set(3, 1, bitField);
    }

    uint8_t AlrtenGenRegister::get_GPIO_ERR_ALRTEN()
    {
        return get(4, 1);
    }
    void AlrtenGenRegister::set_GPIO_ERR_ALRTEN(uint8_t bitField)
    {
        set(4, 1, bitField);
    }

    uint8_t AlrtenGenRegister::get_WD_ERR_ALRTEN()
    {
        return get(5, 1);
    }
    void AlrtenGenRegister::set_WD_ERR_ALRTEN(uint8_t bitField)
    {
        set(5, 1, bitField);
    }

    uint8_t AlrtenGenRegister::get_DEV_COUNT_ERR_ALRTEN()
    {
        return get(6, 1);
    }
    void AlrtenGenRegister::set_DEV_COUNT_ERR_ALRTEN(uint8_t bitField)
    {
        set(6, 1, bitField);
    }

    uint8_t AlrtenGenRegister::get_HFOSC_HW_ERRB_ALRTEN()
    {
        return get(7, 1);
    }
    void AlrtenGenRegister::set_HFOSC_HW_ERRB_ALRTEN(uint8_t bitField)
    {
        set(7, 1, bitField);
    }
    uint8_t AlrtenOpstateRegister::get_SAFEMON_CONFIG_ERR_ALRTEN()
    {
        return get(0, 1);
    }
    void AlrtenOpstateRegister::set_SAFEMON_CONFIG_ERR_ALRTEN(uint8_t bitField)
    {
        set(0, 1, bitField);
    }
    uint8_t AlrtenOpstateRegister::get_SAFEMON_STATUS_ERR_ALRTEN()
    {
        return get(1, 1);
    }
    void AlrtenOpstateRegister::set_SAFEMON_STATUS_ERR_ALRTEN(uint8_t bitField)
    {
        set(1, 1, bitField);
    }
    uint8_t AlrtenOpstateRegister::get_SAFEMON_GPIO12_ALRTEN()
    {
        return get(2, 1);
    }
    void AlrtenOpstateRegister::set_SAFEMON_GPIO12_ALRTEN(uint8_t bitField)
    {
        set(2, 1, bitField);
    }
    uint8_t AlrtenOpstateRegister::get_SAFEMON_ALRTEN()
    {
        return get(3, 1);
    }
    void AlrtenOpstateRegister::set_SAFEMON_ALRTEN(uint8_t bitField)
    {
        set(3, 1, bitField);
    }
    uint8_t AlrtenOpstateRegister::get_SLP_STATUS_ERR_ALRTEN()
    {
        return get(4, 1);
    }
    void AlrtenOpstateRegister::set_SLP_STATUS_ERR_ALRTEN(uint8_t bitField)
    {
        set(4, 1, bitField);
    }
    uint8_t AlrtenOpstateRegister::get_SLP_ALRTEN()
    {
        return get(5, 1);
    }
    void AlrtenOpstateRegister::set_SLP_ALRTEN(uint8_t bitField)
    {
        set(5, 1, bitField);
    }
    uint8_t AlrtenBufRegister::get_LSSM_FULL_ALRTEN()
    {
        return get(3, 1);
    }
    void AlrtenBufRegister::set_LSSM_FULL_ALRTEN(uint8_t bitField)
    {
        set(3, 1, bitField);
    }

    uint8_t AlrtenBufRegister::get_ALRTPCKTBUF_FULL_ALRTEN()
    {
        return get(7, 1);
    }
    void AlrtenBufRegister::set_ALRTPCKTBUF_FULL_ALRTEN(uint8_t bitField)
    {
        set(7, 1, bitField);
    }
    uint8_t AlrtenWdRegister::get_WD_EXP_ERR_ALRTEN()
    {
        return get(0, 1);
    }
    void AlrtenWdRegister::set_WD_EXP_ERR_ALRTEN(uint8_t bitField)
    {
        set(0, 1, bitField);
    }

    uint8_t AlrtenWdRegister::get_WD_RJCT_ERR_ALRTEN()
    {
        return get(1, 1);
    }
    void AlrtenWdRegister::set_WD_RJCT_ERR_ALRTEN(uint8_t bitField)
    {
        set(1, 1, bitField);
    }

    uint8_t AlrtenWdRegister::get_WD_LFSR_ERR_ALRTEN()
    {
        return get(2, 1);
    }
    void AlrtenWdRegister::set_WD_LFSR_ERR_ALRTEN(uint8_t bitField)
    {
        set(2, 1, bitField);
    }

    uint8_t AlrtenWdRegister::get_WD_OPEN_ALRTEN()
    {
        return get(3, 1);
    }
    void AlrtenWdRegister::set_WD_OPEN_ALRTEN(uint8_t bitField)
    {
        set(3, 1, bitField);
    }

    uint8_t AlrtenWdRegister::get_WD_TO_ERR_ALRTEN()
    {
        return get(4, 1);
    }
    void AlrtenWdRegister::set_WD_TO_ERR_ALRTEN(uint8_t bitField)
    {
        set(4, 1, bitField);
    }
    uint8_t AlrtenGpioRegister::get_GPIO1_ERR_ALRTEN()
    {
        return get(0, 1);
    }
    void AlrtenGpioRegister::set_GPIO1_ERR_ALRTEN(uint8_t bitField)
    {
        set(0, 1, bitField);
    }

    uint8_t AlrtenGpioRegister::get_GPIO2_ERR_ALRTEN()
    {
        return get(1, 1);
    }
    void AlrtenGpioRegister::set_GPIO2_ERR_ALRTEN(uint8_t bitField)
    {
        set(1, 1, bitField);
    }

    uint8_t AlrtenGpioRegister::get_GPIO3_ERR_ALRTEN()
    {
        return get(2, 1);
    }
    void AlrtenGpioRegister::set_GPIO3_ERR_ALRTEN(uint8_t bitField)
    {
        set(2, 1, bitField);
    }

    uint8_t AlrtenGpioRegister::get_GPIO4_ERR_ALRTEN()
    {
        return get(3, 1);
    }
    void AlrtenGpioRegister::set_GPIO4_ERR_ALRTEN(uint8_t bitField)
    {
        set(3, 1, bitField);
    }

}