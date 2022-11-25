#include <StatusRegisters.h>

namespace max17851
{
    uint8_t StatusRxRegister::get_RX_EMPTY()
    {
        return get(0, 1);
    }
    void StatusRxRegister::set_RX_EMPTY(uint8_t bitField)
    {
        set(0, 1, bitField);
    }

    uint8_t StatusRxRegister::get_RX_STOP()
    {
        return get(1, 1);
    }
    void StatusRxRegister::set_RX_STOP(uint8_t bitField)
    {
        set(1, 1, bitField);
    }

    uint8_t StatusRxRegister::get_RX_FULL()
    {
        return get(2, 1);
    }
    void StatusRxRegister::set_RX_FULL(uint8_t bitField)
    {
        set(2, 1, bitField);
    }

    uint8_t StatusRxRegister::get_RX_OVRFLW_ERR()
    {
        return get(3, 1);
    }
    void StatusRxRegister::set_RX_OVRFLW_ERR(uint8_t bitField)
    {
        set(3, 1, bitField);
    }

    uint8_t StatusRxRegister::get_RX_IDLE()
    {
        return get(4, 1);
    }
    void StatusRxRegister::set_RX_IDLE(uint8_t bitField)
    {
        set(4, 1, bitField);
    }

    uint8_t StatusRxRegister::get_RX_BUSY()
    {
        return get(5, 1);
    }
    void StatusRxRegister::set_RX_BUSY(uint8_t bitField)
    {
        set(5, 1, bitField);
    }

    uint8_t StatusRxRegister::get_RX_ERR()
    {
        return get(7, 1);
    }
    void StatusRxRegister::set_RX_ERR(uint8_t bitField)
    {
        set(7, 1, bitField);
    }
    uint8_t StatusTxRegister::get_TX_EMPTY()
    {
        return get(0, 1);
    }
    void StatusTxRegister::set_TX_EMPTY(uint8_t bitField)
    {
        set(0, 1, bitField);
    }

    uint8_t StatusTxRegister::get_TX_STOP()
    {
        return get(1, 1);
    }
    void StatusTxRegister::set_TX_STOP(uint8_t bitField)
    {
        set(1, 1, bitField);
    }

    uint8_t StatusTxRegister::get_TX_FULL()
    {
        return get(2, 1);
    }
    void StatusTxRegister::set_TX_FULL(uint8_t bitField)
    {
        set(2, 1, bitField);
    }

    uint8_t StatusTxRegister::get_TX_OVRFLW_ERR()
    {
        return get(3, 1);
    }
    void StatusTxRegister::set_TX_OVRFLW_ERR(uint8_t bitField)
    {
        set(3, 1, bitField);
    }

    uint8_t StatusTxRegister::get_TX_IDLE()
    {
        return get(4, 1);
    }
    void StatusTxRegister::set_TX_IDLE(uint8_t bitField)
    {
        set(4, 1, bitField);
    }

    uint8_t StatusTxRegister::get_TX_BUSY()
    {
        return get(5, 1);
    }
    void StatusTxRegister::set_TX_BUSY(uint8_t bitField)
    {
        set(5, 1, bitField);
    }

    uint8_t StatusTxRegister::get_TX_ERR()
    {
        return get(7, 1);
    }
    void StatusTxRegister::set_TX_ERR(uint8_t bitField)
    {
        set(7, 1, bitField);
    }
    uint8_t StatusLssmByteRegister::get_HW_ERR()
    {
        return get(0, 1);
    }
    void StatusLssmByteRegister::set_HW_ERR(uint8_t bitField)
    {
        set(0, 1, bitField);
    }

    uint8_t StatusLssmByteRegister::get_ALIVECOUNT_ERR()
    {
        return get(1, 1);
    }
    void StatusLssmByteRegister::set_ALIVECOUNT_ERR(uint8_t bitField)
    {
        set(1, 1, bitField);
    }

    uint8_t StatusLssmByteRegister::get_COMMAND_OP()
    {
        return get(2, 1);
    }
    void StatusLssmByteRegister::set_COMMAND_OP(uint8_t bitField)
    {
        set(2, 1, bitField);
    }

    uint8_t StatusLssmByteRegister::get_COMM_MSMTCH_ERR()
    {
        return get(3, 1);
    }
    void StatusLssmByteRegister::set_COMM_MSMTCH_ERR(uint8_t bitField)
    {
        set(3, 1, bitField);
    }

    uint8_t StatusLssmByteRegister::get_ALRTPCKT_ERR()
    {
        return get(4, 1);
    }
    void StatusLssmByteRegister::set_ALRTPCKT_ERR(uint8_t bitField)
    {
        set(4, 1, bitField);
    }

    uint8_t StatusLssmByteRegister::get_COMM_ERR()
    {
        return get(5, 1);
    }
    void StatusLssmByteRegister::set_COMM_ERR(uint8_t bitField)
    {
        set(5, 1, bitField);
    }

    uint8_t StatusLssmByteRegister::get_ALRTPCKT_STATUS_ERR()
    {
        return get(6, 1);
    }
    void StatusLssmByteRegister::set_ALRTPCKT_STATUS_ERR(uint8_t bitField)
    {
        set(6, 1, bitField);
    }

    uint8_t StatusLssmByteRegister::get_RX_READY()
    {
        return get(7, 1);
    }
    void StatusLssmByteRegister::set_RX_READY(uint8_t bitField)
    {
        set(7, 1, bitField);
    }
    uint8_t StatusGenRegister::get_ALRTPCKTBUF_HW_ERR()
    {
        return get(0, 1);
    }
    void StatusGenRegister::set_ALRTPCKTBUF_HW_ERR(uint8_t bitField)
    {
        set(0, 1, bitField);
    }

    uint8_t StatusGenRegister::get_ALRTPCKT_COMM_ERR()
    {
        return get(1, 1);
    }
    void StatusGenRegister::set_ALRTPCKT_COMM_ERR(uint8_t bitField)
    {
        set(1, 1, bitField);
    }

    uint8_t StatusGenRegister::get_DATAPATH_ERR()
    {
        return get(3, 1);
    }
    void StatusGenRegister::set_DATAPATH_ERR(uint8_t bitField)
    {
        set(3, 1, bitField);
    }

    uint8_t StatusGenRegister::get_GPIO_ERR()
    {
        return get(4, 1);
    }
    void StatusGenRegister::set_GPIO_ERR(uint8_t bitField)
    {
        set(4, 1, bitField);
    }

    uint8_t StatusGenRegister::get_WD_ERR()
    {
        return get(5, 1);
    }
    void StatusGenRegister::set_WD_ERR(uint8_t bitField)
    {
        set(5, 1, bitField);
    }

    uint8_t StatusGenRegister::get_DEV_COUNT_ERR()
    {
        return get(6, 1);
    }
    void StatusGenRegister::set_DEV_COUNT_ERR(uint8_t bitField)
    {
        set(6, 1, bitField);
    }

    uint8_t StatusGenRegister::get_HFOSC_HW_ERRB()
    {
        return get(7, 1);
    }
    void StatusGenRegister::set_HFOSC_HW_ERRB(uint8_t bitField)
    {
        set(7, 1, bitField);
    }
    uint8_t StatusOpstateRegister::get_SAFEMON()
    {
        return get(3, 1);
    }
    void StatusOpstateRegister::set_SAFEMON(uint8_t bitField)
    {
        set(3, 1, bitField);
    }
    uint8_t StatusBufRegister::get_LSSM_FULL()
    {
        return get(3, 1);
    }
    void StatusBufRegister::set_LSSM_FULL(uint8_t bitField)
    {
        set(3, 1, bitField);
    }

    uint8_t StatusBufRegister::get_ALRTPCKTBUF_FULL()
    {
        return get(7, 1);
    }
    void StatusBufRegister::set_ALRTPCKTBUF_FULL(uint8_t bitField)
    {
        set(7, 1, bitField);
    }
    uint8_t StatusWdRegister::get_WD_EXP_ERR()
    {
        return get(0, 1);
    }
    void StatusWdRegister::set_WD_EXP_ERR(uint8_t bitField)
    {
        set(0, 1, bitField);
    }

    uint8_t StatusWdRegister::get_WD_RJCT_ERR()
    {
        return get(1, 1);
    }
    void StatusWdRegister::set_WD_RJCT_ERR(uint8_t bitField)
    {
        set(1, 1, bitField);
    }

    uint8_t StatusWdRegister::get_WD_LFSR_ERR()
    {
        return get(2, 1);
    }
    void StatusWdRegister::set_WD_LFSR_ERR(uint8_t bitField)
    {
        set(2, 1, bitField);
    }

    uint8_t StatusWdRegister::get_WD_OPEN()
    {
        return get(3, 1);
    }
    void StatusWdRegister::set_WD_OPEN(uint8_t bitField)
    {
        set(3, 1, bitField);
    }

    uint8_t StatusWdRegister::get_WD_TO_ERR()
    {
        return get(4, 1);
    }
    void StatusWdRegister::set_WD_TO_ERR(uint8_t bitField)
    {
        set(4, 1, bitField);
    }
    uint8_t StatusGpioRegister::get_GPIO1_ERR()
    {
        return get(0, 1);
    }
    void StatusGpioRegister::set_GPIO1_ERR(uint8_t bitField)
    {
        set(0, 1, bitField);
    }

    uint8_t StatusGpioRegister::get_GPIO2_ERR()
    {
        return get(1, 1);
    }
    void StatusGpioRegister::set_GPIO2_ERR(uint8_t bitField)
    {
        set(1, 1, bitField);
    }

    uint8_t StatusGpioRegister::get_GPIO3_ERR()
    {
        return get(2, 1);
    }
    void StatusGpioRegister::set_GPIO3_ERR(uint8_t bitField)
    {
        set(2, 1, bitField);
    }

    uint8_t StatusGpioRegister::get_GPIO4_ERR()
    {
        return get(3, 1);
    }
    void StatusGpioRegister::set_GPIO4_ERR(uint8_t bitField)
    {
        set(3, 1, bitField);
    }

    uint8_t StatusGpioRegister::get_GPIO1_RD()
    {
        return get(4, 1);
    }
    void StatusGpioRegister::set_GPIO1_RD(uint8_t bitField)
    {
        set(4, 1, bitField);
    }

    uint8_t StatusGpioRegister::get_GPIO2_RD()
    {
        return get(5, 1);
    }
    void StatusGpioRegister::set_GPIO2_RD(uint8_t bitField)
    {
        set(5, 1, bitField);
    }

    uint8_t StatusGpioRegister::get_GPIO3_RD()
    {
        return get(6, 1);
    }
    void StatusGpioRegister::set_GPIO3_RD(uint8_t bitField)
    {
        set(6, 1, bitField);
    }

    uint8_t StatusGpioRegister::get_GPIO4_RD()
    {
        return get(7, 1);
    }
    void StatusGpioRegister::set_GPIO4_RD(uint8_t bitField)
    {
        set(7, 1, bitField);
    }

}