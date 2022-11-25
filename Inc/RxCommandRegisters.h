#pragma once
#include "RegisterClass.h"

namespace max17851
{
    class AlrtpcktbufRdPtrRegister : public Register
    {
    public:
        AlrtpcktbufRdPtrRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static AlrtpcktbufRdPtrRegister &Instance();

        uint8_t get_ALRTPCKTBUF_RD_PTR();
        void set_ALRTPCKTBUF_RD_PTR(uint8_t);
    };

    class AlrtpcktbufRdMsgRegister : public Register
    {
    public:
        AlrtpcktbufRdMsgRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static AlrtpcktbufRdMsgRegister &Instance();

        uint8_t get_ALRTPCKTBUF_RD_MSG();
        void set_ALRTPCKTBUF_RD_MSG(uint8_t);
    };

    class RxRdMsgRegister : public Register
    {
    public:
        RxRdMsgRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static RxRdMsgRegister &Instance();

        uint8_t get_RX_RD_MSG();
        void set_RX_RD_MSG(uint8_t);
    };

    class RxRdNxtMsgRegister : public Register
    {
    public:
        RxRdNxtMsgRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static RxRdNxtMsgRegister &Instance();

        uint8_t get_RX_RD_NXT_MSG();
        void set_RX_RD_NXT_MSG(uint8_t);
    };

    class TxQueueSelRegister : public Register
    {
    public:
        TxQueueSelRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static TxQueueSelRegister &Instance();

        uint8_t get_LD_Q();
        void set_LD_Q(uint8_t);

        uint8_t get_TX_Q();
        void set_TX_Q(uint8_t);
    };

    class RxRdPtrRegister : public Register
    {
    public:
        RxRdPtrRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static RxRdPtrRegister &Instance();

        uint8_t get_RX_RD_PTR();
        void set_RX_RD_PTR(uint8_t);
    };

    class RxWrPtrRegister : public Register
    {
    public:
        RxWrPtrRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static RxWrPtrRegister &Instance();

        uint8_t get_RX_WR_PTR();
        void set_RX_WR_PTR(uint8_t);
    };

    class RxNxtMsgPtrRegister : public Register
    {
    public:
        RxNxtMsgPtrRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static RxNxtMsgPtrRegister &Instance();

        uint8_t get_RX_NXT_MSG_PTR();
        void set_RX_NXT_MSG_PTR(uint8_t);
    };

    class RxSpaceRegister : public Register
    {
    public:
        RxSpaceRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static RxSpaceRegister &Instance();

        uint8_t get_RX_SPACE();
        void set_RX_SPACE(uint8_t);
    };

    class RxByteRegister : public Register
    {
    public:
        RxByteRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static RxByteRegister &Instance();

        uint8_t get_RX_LAST_BYTE();
        void set_RX_LAST_BYTE(uint8_t);

        uint8_t get_RX_BYTE_ERR();
        void set_RX_BYTE_ERR(uint8_t);

        uint8_t get_RX_FIRST_BYTE();
        void set_RX_FIRST_BYTE(uint8_t);
    };

}
