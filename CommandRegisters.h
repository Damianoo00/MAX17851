#pragma once
#include "RegisterClass.h"
namespace max17851
{

class SwporRegister : public Register
{
public:
    SwporRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
    
    uint8_t get_SWPOR();
    void set_SWPOR(uint8_t);
    
};


uint8_t SwporRegister::get_SWPOR()
{
    return get(0, 1);
}
void SwporRegister::set_SWPOR(uint8_t bitField)
{
    set(0, 1, bitField);
}

class SlpEnRegister : public Register
{
public:
    SlpEnRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
    
    uint8_t get_SLP_EN();
    void set_SLP_EN(uint8_t);
    
};


uint8_t SlpEnRegister::get_SLP_EN()
{
    return get(0, 1);
}
void SlpEnRegister::set_SLP_EN(uint8_t bitField)
{
    set(0, 1, bitField);
}

class VerConfigRegister : public Register
{
public:
    VerConfigRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
    
    uint8_t get_VER_CONFIG();
    void set_VER_CONFIG(uint8_t);
    
};


uint8_t VerConfigRegister::get_VER_CONFIG()
{
    return get(0, 1);
}
void VerConfigRegister::set_VER_CONFIG(uint8_t bitField)
{
    set(0, 1, bitField);
}

class LoadConfigRegister : public Register
{
public:
    LoadConfigRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
    
    uint8_t get_LOAD_CONFIG();
    void set_LOAD_CONFIG(uint8_t);
    
};


uint8_t LoadConfigRegister::get_LOAD_CONFIG()
{
    return get(0, 1);
}
void LoadConfigRegister::set_LOAD_CONFIG(uint8_t bitField)
{
    set(0, 1, bitField);
}

class WdKeyRegister : public Register
{
public:
    WdKeyRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
    
    uint8_t get_WD_KEY();
    void set_WD_KEY(uint8_t);
    
};


uint8_t WdKeyRegister::get_WD_KEY()
{
    return get(0, 8);
}
void WdKeyRegister::set_WD_KEY(uint8_t bitField)
{
    set(0, 8, bitField);
}

}