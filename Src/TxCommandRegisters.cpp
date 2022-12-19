#include "../Inc/TxCommandRegisters.h"

namespace max17851
{
    uint8_t NxtLdqRegister::get_NXT_LDQ()
    {
        return get(0, 8);
    }
    void NxtLdqRegister::set_NXT_LDQ(uint8_t bitField)
    {
        set(0, 8, bitField);
    }
    uint8_t LdqRegister::get_LDQ()
    {
        return get(0, 8);
    }
    void LdqRegister::set_LDQ(uint8_t bitField)
    {
        set(0, 8, bitField);
    }
    uint8_t LdqPtrRegister::get_LDQ_PTR()
    {
        return get(0, 5);
    }
    void LdqPtrRegister::set_LDQ_PTR(uint8_t bitField)
    {
        set(0, 5, bitField);
    }
    uint8_t ConfigqRegister::get_CONFIGQ()
    {
        return get(0, 8);
    }
    void ConfigqRegister::set_CONFIGQ(uint8_t bitField)
    {
        set(0, 8, bitField);
    }
    uint8_t ConfigPtrRegister::get_CONFIG_BYTE_PTR()
    {
        return get(0, 5);
    }
    void ConfigPtrRegister::set_CONFIG_BYTE_PTR(uint8_t bitField)
    {
        set(0, 5, bitField);
    }

    uint8_t ConfigPtrRegister::get_CONFIG_QUEUE_PTR()
    {
        return get(5, 2);
    }
    void ConfigPtrRegister::set_CONFIG_QUEUE_PTR(uint8_t bitField)
    {
        set(5, 2, bitField);
    }

}