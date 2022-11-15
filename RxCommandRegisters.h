#pragma once
#include "RegisterClass.h"

namespace max17851
{
class AlrtpcktbufRdPtrRegister : public Register
{
public:
    AlrtpcktbufRdPtrRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
    
    uint8_t get_ALRTPCKTBUF_RD_PTR();
    void set_ALRTPCKTBUF_RD_PTR(uint8_t);
    
};


uint8_t AlrtpcktbufRdPtrRegister::get_ALRTPCKTBUF_RD_PTR()
{
    return get(0, 3);
}
void AlrtpcktbufRdPtrRegister::set_ALRTPCKTBUF_RD_PTR(uint8_t bitField)
{
    set(0, 3, bitField);
}

class AlrtpcktbufRdMsgRegister : public Register
{
public:
    AlrtpcktbufRdMsgRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
    
    uint8_t get_ALRTPCKTBUF_RD_MSG();
    void set_ALRTPCKTBUF_RD_MSG(uint8_t);
    
};


uint8_t AlrtpcktbufRdMsgRegister::get_ALRTPCKTBUF_RD_MSG()
{
    return get(0, 8);
}
void AlrtpcktbufRdMsgRegister::set_ALRTPCKTBUF_RD_MSG(uint8_t bitField)
{
    set(0, 8, bitField);
}

class RxRdMsgRegister : public Register
{
public:
    RxRdMsgRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
    
    uint8_t get_RX_RD_MSG();
    void set_RX_RD_MSG(uint8_t);
    
};


uint8_t RxRdMsgRegister::get_RX_RD_MSG()
{
    return get(0, 8);
}
void RxRdMsgRegister::set_RX_RD_MSG(uint8_t bitField)
{
    set(0, 8, bitField);
}

class RxRdNxtMsgRegister : public Register
{
public:
    RxRdNxtMsgRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
    
    uint8_t get_RX_RD_NXT_MSG();
    void set_RX_RD_NXT_MSG(uint8_t);
    
};


uint8_t RxRdNxtMsgRegister::get_RX_RD_NXT_MSG()
{
    return get(0, 8);
}
void RxRdNxtMsgRegister::set_RX_RD_NXT_MSG(uint8_t bitField)
{
    set(0, 8, bitField);
}

class TxQueueSelRegister : public Register
{
public:
    TxQueueSelRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
    
    uint8_t get_LD_Q();
    void set_LD_Q(uint8_t);
    
    uint8_t get_TX_Q();
    void set_TX_Q(uint8_t);
    
};


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

class RxRdPtrRegister : public Register
{
public:
    RxRdPtrRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
    
    uint8_t get_RX_RD_PTR();
    void set_RX_RD_PTR(uint8_t);
    
};


uint8_t RxRdPtrRegister::get_RX_RD_PTR()
{
    return get(0, 7);
}
void RxRdPtrRegister::set_RX_RD_PTR(uint8_t bitField)
{
    set(0, 7, bitField);
}

class RxWrPtrRegister : public Register
{
public:
    RxWrPtrRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
    
    uint8_t get_RX_WR_PTR();
    void set_RX_WR_PTR(uint8_t);
    
};


uint8_t RxWrPtrRegister::get_RX_WR_PTR()
{
    return get(0, 7);
}
void RxWrPtrRegister::set_RX_WR_PTR(uint8_t bitField)
{
    set(0, 7, bitField);
}

class RxNxtMsgPtrRegister : public Register
{
public:
    RxNxtMsgPtrRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
    
    uint8_t get_RX_NXT_MSG_PTR();
    void set_RX_NXT_MSG_PTR(uint8_t);
    
};


uint8_t RxNxtMsgPtrRegister::get_RX_NXT_MSG_PTR()
{
    return get(0, 7);
}
void RxNxtMsgPtrRegister::set_RX_NXT_MSG_PTR(uint8_t bitField)
{
    set(0, 7, bitField);
}

class RxSpaceRegister : public Register
{
public:
    RxSpaceRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
    
    uint8_t get_RX_SPACE();
    void set_RX_SPACE(uint8_t);
    
};


uint8_t RxSpaceRegister::get_RX_SPACE()
{
    return get(0, 7);
}
void RxSpaceRegister::set_RX_SPACE(uint8_t bitField)
{
    set(0, 7, bitField);
}

class RxByteRegister : public Register
{
public:
    RxByteRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
    
    uint8_t get_RX_LAST_BYTE();
    void set_RX_LAST_BYTE(uint8_t);
    
    uint8_t get_RX_BYTE_ERR();
    void set_RX_BYTE_ERR(uint8_t);
    
    uint8_t get_RX_FIRST_BYTE();
    void set_RX_FIRST_BYTE(uint8_t);
    
};


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
}
