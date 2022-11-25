#include <AlertRegisters.h>

namespace max17851
{
    uint8_t AlertRxRegister::get_RX_EMPTY_ALRTEN()
    {
        return get(0, 1);
    }
    void AlertRxRegister::set_RX_EMPTY_ALRTEN(uint8_t bitField)
    {
        set(0, 1, bitField);
    }

    uint8_t AlertRxRegister::get_RX_STOP_ALRTEN()
    {
        return get(1, 1);
    }
    void AlertRxRegister::set_RX_STOP_ALRTEN(uint8_t bitField)
    {
        set(1, 1, bitField);
    }

    uint8_t AlertRxRegister::get_RX_FULL_ALRTEN()
    {
        return get(2, 1);
    }
    void AlertRxRegister::set_RX_FULL_ALRTEN(uint8_t bitField)
    {
        set(2, 1, bitField);
    }

    uint8_t AlertRxRegister::get_RX_OVRFLW_ERR_ALRTEN()
    {
        return get(3, 1);
    }
    void AlertRxRegister::set_RX_OVRFLW_ERR_ALRTEN(uint8_t bitField)
    {
        set(3, 1, bitField);
    }

    uint8_t AlertRxRegister::get_RX_IDLE_ALRTEN()
    {
        return get(4, 1);
    }
    void AlertRxRegister::set_RX_IDLE_ALRTEN(uint8_t bitField)
    {
        set(4, 1, bitField);
    }

    uint8_t AlertRxRegister::get_RX_BUSY_ALRTEN()
    {
        return get(5, 1);
    }
    void AlertRxRegister::set_RX_BUSY_ALRTEN(uint8_t bitField)
    {
        set(5, 1, bitField);
    }

    uint8_t AlertRxRegister::get_RX_ERR_ALRTEN()
    {
        return get(7, 1);
    }
    void AlertRxRegister::set_RX_ERR_ALRTEN(uint8_t bitField)
    {
        set(7, 1, bitField);
    }

    uint8_t AlertTxRegister::get_TX_EMPTY_ALRT()
    {
        return get(0, 1);
    }
    void AlertTxRegister::set_TX_EMPTY_ALRT(uint8_t bitField)
    {
        set(0, 1, bitField);
    }

    uint8_t AlertTxRegister::get_TX_STOP_ALRT()
    {
        return get(1, 1);
    }
    void AlertTxRegister::set_TX_STOP_ALRT(uint8_t bitField)
    {
        set(1, 1, bitField);
    }

    uint8_t AlertTxRegister::get_TX_FULL_ALRT()
    {
        return get(2, 1);
    }
    void AlertTxRegister::set_TX_FULL_ALRT(uint8_t bitField)
    {
        set(2, 1, bitField);
    }

    uint8_t AlertTxRegister::get_TX_OVRFLW_ERR_ALRT()
    {
        return get(3, 1);
    }
    void AlertTxRegister::set_TX_OVRFLW_ERR_ALRT(uint8_t bitField)
    {
        set(3, 1, bitField);
    }

    uint8_t AlertTxRegister::get_TX_IDLE_ALRT()
    {
        return get(4, 1);
    }
    void AlertTxRegister::set_TX_IDLE_ALRT(uint8_t bitField)
    {
        set(4, 1, bitField);
    }

    uint8_t AlertTxRegister::get_TX_BUSY_ALRT()
    {
        return get(5, 1);
    }
    void AlertTxRegister::set_TX_BUSY_ALRT(uint8_t bitField)
    {
        set(5, 1, bitField);
    }

    uint8_t AlertTxRegister::get_TX_ERR_ALRT()
    {
        return get(7, 1);
    }
    void AlertTxRegister::set_TX_ERR_ALRT(uint8_t bitField)
    {
        set(7, 1, bitField);
    }
    uint8_t AlertLssmByteRegister::get_HW_ERR_ALRT()
    {
        return get(0, 1);
    }
    void AlertLssmByteRegister::set_HW_ERR_ALRT(uint8_t bitField)
    {
        set(0, 1, bitField);
    }

    uint8_t AlertLssmByteRegister::get_ALIVECOUNT_ERR_ALRT()
    {
        return get(1, 1);
    }
    void AlertLssmByteRegister::set_ALIVECOUNT_ERR_ALRT(uint8_t bitField)
    {
        set(1, 1, bitField);
    }

    uint8_t AlertLssmByteRegister::get_COMMAND_OP_ALRT()
    {
        return get(2, 1);
    }
    void AlertLssmByteRegister::set_COMMAND_OP_ALRT(uint8_t bitField)
    {
        set(2, 1, bitField);
    }

    uint8_t AlertLssmByteRegister::get_COMM_MSMTCH_ERR_ALRT()
    {
        return get(3, 1);
    }
    void AlertLssmByteRegister::set_COMM_MSMTCH_ERR_ALRT(uint8_t bitField)
    {
        set(3, 1, bitField);
    }

    uint8_t AlertLssmByteRegister::get_ALRTPCKT_ERR_ALRT()
    {
        return get(4, 1);
    }
    void AlertLssmByteRegister::set_ALRTPCKT_ERR_ALRT(uint8_t bitField)
    {
        set(4, 1, bitField);
    }

    uint8_t AlertLssmByteRegister::get_COMM_ERR_ALRT()
    {
        return get(5, 1);
    }
    void AlertLssmByteRegister::set_COMM_ERR_ALRT(uint8_t bitField)
    {
        set(5, 1, bitField);
    }

    uint8_t AlertLssmByteRegister::get_ALRTPCKT_STATUS_ERR_ALRT()
    {
        return get(6, 1);
    }
    void AlertLssmByteRegister::set_ALRTPCKT_STATUS_ERR_ALRT(uint8_t bitField)
    {
        set(6, 1, bitField);
    }

    uint8_t AlertLssmByteRegister::get_RX_READY_ALRT()
    {
        return get(7, 1);
    }
    void AlertLssmByteRegister::set_RX_READY_ALRT(uint8_t bitField)
    {
        set(7, 1, bitField);
    }
    uint8_t AlertGenRegister::get_ALRTPCKTBUF_HW_ERR_ALRT()
    {
        return get(0, 1);
    }
    void AlertGenRegister::set_ALRTPCKTBUF_HW_ERR_ALRT(uint8_t bitField)
    {
        set(0, 1, bitField);
    }

    uint8_t AlertGenRegister::get_ALRTPCKT_COMM_ERR_ALRT()
    {
        return get(1, 1);
    }
    void AlertGenRegister::set_ALRTPCKT_COMM_ERR_ALRT(uint8_t bitField)
    {
        set(1, 1, bitField);
    }

    uint8_t AlertGenRegister::get_DATAPATH_ERR_ALRT()
    {
        return get(3, 1);
    }
    void AlertGenRegister::set_DATAPATH_ERR_ALRT(uint8_t bitField)
    {
        set(3, 1, bitField);
    }

    uint8_t AlertGenRegister::get_GPIO_ERR_ALRT()
    {
        return get(4, 1);
    }
    void AlertGenRegister::set_GPIO_ERR_ALRT(uint8_t bitField)
    {
        set(4, 1, bitField);
    }

    uint8_t AlertGenRegister::get_WD_ERR_ALRT()
    {
        return get(5, 1);
    }
    void AlertGenRegister::set_WD_ERR_ALRT(uint8_t bitField)
    {
        set(5, 1, bitField);
    }

    uint8_t AlertGenRegister::get_DEV_COUNT_ERR_ALRT()
    {
        return get(6, 1);
    }
    void AlertGenRegister::set_DEV_COUNT_ERR_ALRT(uint8_t bitField)
    {
        set(6, 1, bitField);
    }

    uint8_t AlertGenRegister::get_HFOSC_HW_ERRB_ALRT()
    {
        return get(7, 1);
    }
    void AlertGenRegister::set_HFOSC_HW_ERRB_ALRT(uint8_t bitField)
    {
        set(7, 1, bitField);
    }
    uint8_t AlertOpstateRegister::get_SAFEMON_ALRT()
    {
        return get(3, 1);
    }
    void AlertOpstateRegister::set_SAFEMON_ALRT(uint8_t bitField)
    {
        set(3, 1, bitField);
    }
    uint8_t AlertBufRegister::get_LSSM_FULL_ALRT()
    {
        return get(3, 1);
    }
    void AlertBufRegister::set_LSSM_FULL_ALRT(uint8_t bitField)
    {
        set(3, 1, bitField);
    }

    uint8_t AlertBufRegister::get_ALRTPCKTBUF_FULL_ALRT()
    {
        return get(7, 1);
    }
    void AlertBufRegister::set_ALRTPCKTBUF_FULL_ALRT(uint8_t bitField)
    {
        set(7, 1, bitField);
    }
    uint8_t AlertWdRegister::get_WD_EXP_ERR_ALRT()
    {
        return get(0, 1);
    }
    void AlertWdRegister::set_WD_EXP_ERR_ALRT(uint8_t bitField)
    {
        set(0, 1, bitField);
    }

    uint8_t AlertWdRegister::get_WD_RJCT_ERR_ALRT()
    {
        return get(1, 1);
    }
    void AlertWdRegister::set_WD_RJCT_ERR_ALRT(uint8_t bitField)
    {
        set(1, 1, bitField);
    }

    uint8_t AlertWdRegister::get_WD_LFSR_ERR_ALRT()
    {
        return get(2, 1);
    }
    void AlertWdRegister::set_WD_LFSR_ERR_ALRT(uint8_t bitField)
    {
        set(2, 1, bitField);
    }

    uint8_t AlertWdRegister::get_WD_OPEN_ALRT()
    {
        return get(3, 1);
    }
    void AlertWdRegister::set_WD_OPEN_ALRT(uint8_t bitField)
    {
        set(3, 1, bitField);
    }

    uint8_t AlertWdRegister::get_WD_TO_ERR_ALRT()
    {
        return get(4, 1);
    }
    void AlertWdRegister::set_WD_TO_ERR_ALRT(uint8_t bitField)
    {
        set(4, 1, bitField);
    }
    uint8_t AlertGpioRegister::get_GPIO1_ERR_ALRT()
    {
        return get(0, 1);
    }
    void AlertGpioRegister::set_GPIO1_ERR_ALRT(uint8_t bitField)
    {
        set(0, 1, bitField);
    }

    uint8_t AlertGpioRegister::get_GPIO2_ERR_ALRT()
    {
        return get(1, 1);
    }
    void AlertGpioRegister::set_GPIO2_ERR_ALRT(uint8_t bitField)
    {
        set(1, 1, bitField);
    }

    uint8_t AlertGpioRegister::get_GPIO3_ERR_ALRT()
    {
        return get(2, 1);
    }
    void AlertGpioRegister::set_GPIO3_ERR_ALRT(uint8_t bitField)
    {
        set(2, 1, bitField);
    }

    uint8_t AlertGpioRegister::get_GPIO4_ERR_ALRT()
    {
        return get(3, 1);
    }
    void AlertGpioRegister::set_GPIO4_ERR_ALRT(uint8_t bitField)
    {
        set(3, 1, bitField);
    }

}