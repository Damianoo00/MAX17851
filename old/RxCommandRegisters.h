#pragma once
#include "RegisterClass.h"
namespace max17851
{
    class AlrtpcktbufRdPtrRegister : public Register
    {
    public:
        Bits ALRTPCKTBUF_RD_PTR;
        AlrtpcktbufRdPtrRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                          ALRTPCKTBUF_RD_PTR(0, 3) {}
    };

    class AlrtpcktbufRdMsgRegister : public Register
    {
    public:
        Bits ALRTPCKTBUF_RD_MSG;
        AlrtpcktbufRdMsgRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                          ALRTPCKTBUF_RD_MSG(0, 8) {}
    };

    class RxRdMsgRegister : public Register
    {
    public:
        Bits RX_RD_MSG;
        RxRdMsgRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                 RX_RD_MSG(0, 8) {}
    };

    class RxRdNxtMsgRegister : public Register
    {
    public:
        Bits RX_RD_NXT_MSG;
        RxRdNxtMsgRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                    RX_RD_NXT_MSG(0, 8) {}
    };

    class TxQueueSelRegister : public Register
    {
    public:
        Bits LD_Q;
        Bits TX_Q;
        TxQueueSelRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                    LD_Q(0, 1), TX_Q(1, 1) {}
    };

    class RxRdPtrRegister : public Register
    {
    public:
        Bits RX_RD_PTR;
        RxRdPtrRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                 RX_RD_PTR(0, 7) {}
    };

    class RxWrPtrRegister : public Register
    {
    public:
        Bits RX_WR_PTR;
        RxWrPtrRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                 RX_WR_PTR(0, 7) {}
    };

    class RxNxtMsgPtrRegister : public Register
    {
    public:
        Bits RX_NXT_MSG_PTR;
        RxNxtMsgPtrRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                     RX_NXT_MSG_PTR(0, 7) {}
    };

    class RxSpaceRegister : public Register
    {
    public:
        Bits RX_SPACE;
        RxSpaceRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                 RX_SPACE(0, 7) {}
    };

    class RxByteRegister : public Register
    {
    public:
        Bits RX_LAST_BYTE;
        Bits RX_BYTE_ERR;
        Bits RX_FIRST_BYTE;
        RxByteRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                RX_LAST_BYTE(0, 1), RX_BYTE_ERR(1, 1), RX_FIRST_BYTE(2, 1) {}
    };
}