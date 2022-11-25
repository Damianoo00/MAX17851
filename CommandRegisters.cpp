#include <CommandRegisters.h>

namespace max17851
{
    uint8_t SwporRegister::get_SWPOR()
    {
        return get(0, 1);
    }
    void SwporRegister::set_SWPOR(uint8_t bitField)
    {
        set(0, 1, bitField);
    }
    uint8_t SlpEnRegister::get_SLP_EN()
    {
        return get(0, 1);
    }
    void SlpEnRegister::set_SLP_EN(uint8_t bitField)
    {
        set(0, 1, bitField);
    }
    uint8_t VerConfigRegister::get_VER_CONFIG()
    {
        return get(0, 1);
    }
    void VerConfigRegister::set_VER_CONFIG(uint8_t bitField)
    {
        set(0, 1, bitField);
    }
    uint8_t LoadConfigRegister::get_LOAD_CONFIG()
    {
        return get(0, 1);
    }
    void LoadConfigRegister::set_LOAD_CONFIG(uint8_t bitField)
    {
        set(0, 1, bitField);
    }
    uint8_t WdKeyRegister::get_WD_KEY()
    {
        return get(0, 8);
    }
    void WdKeyRegister::set_WD_KEY(uint8_t bitField)
    {
        set(0, 8, bitField);
    }

}