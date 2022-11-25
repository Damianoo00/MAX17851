#include <RxCommandRegisters.h>
namespace max17851
{
    uint8_t AlrtpcktbufRdPtrRegister::get_ALRTPCKTBUF_RD_PTR()
    {
        return get(0, 3);
    }
    void AlrtpcktbufRdPtrRegister::set_ALRTPCKTBUF_RD_PTR(uint8_t bitField)
    {
        set(0, 3, bitField);
    }
    uint8_t AlrtpcktbufRdMsgRegister::get_ALRTPCKTBUF_RD_MSG()
    {
        return get(0, 8);
    }
    void AlrtpcktbufRdMsgRegister::set_ALRTPCKTBUF_RD_MSG(uint8_t bitField)
    {
        set(0, 8, bitField);
    }
    uint8_t RxRdMsgRegister::get_RX_RD_MSG()
    {
        return get(0, 8);
    }
    void RxRdMsgRegister::set_RX_RD_MSG(uint8_t bitField)
    {
        set(0, 8, bitField);
    }
    uint8_t RxRdNxtMsgRegister::get_RX_RD_NXT_MSG()
    {
        return get(0, 8);
    }
    void RxRdNxtMsgRegister::set_RX_RD_NXT_MSG(uint8_t bitField)
    {
        set(0, 8, bitField);
    }
    uint8_t TxQueueSelRegister::get_LD_Q()
    {
        return get(0, 1);
    }
    void TxQueueSelRegister::set_LD_Q(uint8_t bitField)
    {
        set(0, 1, bitField);
    }

    uint8_t TxQueueSelRegister::get_TX_Q()
    {
        return get(1, 1);
    }
    void TxQueueSelRegister::set_TX_Q(uint8_t bitField)
    {
        set(1, 1, bitField);
    }
    uint8_t RxRdPtrRegister::get_RX_RD_PTR()
    {
        return get(0, 7);
    }
    void RxRdPtrRegister::set_RX_RD_PTR(uint8_t bitField)
    {
        set(0, 7, bitField);
    }
    uint8_t RxWrPtrRegister::get_RX_WR_PTR()
    {
        return get(0, 7);
    }
    void RxWrPtrRegister::set_RX_WR_PTR(uint8_t bitField)
    {
        set(0, 7, bitField);
    }
    uint8_t RxNxtMsgPtrRegister::get_RX_NXT_MSG_PTR()
    {
        return get(0, 7);
    }
    void RxNxtMsgPtrRegister::set_RX_NXT_MSG_PTR(uint8_t bitField)
    {
        set(0, 7, bitField);
    }
    uint8_t RxSpaceRegister::get_RX_SPACE()
    {
        return get(0, 7);
    }
    void RxSpaceRegister::set_RX_SPACE(uint8_t bitField)
    {
        set(0, 7, bitField);
    }

    uint8_t RxByteRegister::get_RX_LAST_BYTE()
    {
        return get(0, 1);
    }
    void RxByteRegister::set_RX_LAST_BYTE(uint8_t bitField)
    {
        set(0, 1, bitField);
    }

    uint8_t RxByteRegister::get_RX_BYTE_ERR()
    {
        return get(1, 1);
    }
    void RxByteRegister::set_RX_BYTE_ERR(uint8_t bitField)
    {
        set(1, 1, bitField);
    }

    uint8_t RxByteRegister::get_RX_FIRST_BYTE()
    {
        return get(2, 1);
    }
    void RxByteRegister::set_RX_FIRST_BYTE(uint8_t bitField)
    {
        set(2, 1, bitField);
    }

} // namespace max17851
