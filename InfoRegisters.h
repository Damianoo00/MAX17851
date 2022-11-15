#pragma once
#include "RegisterClass.h"

namespace max17851
{

class StateRegister : public Register
{
public:
    StateRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
    
    uint8_t get_STATE();
    void set_STATE(uint8_t);
    
};


uint8_t StateRegister::get_STATE()
{
    return get(0, 3);
}
void StateRegister::set_STATE(uint8_t bitField)
{
    set(0, 3, bitField);
}

class CommRtryCntRegister : public Register
{
public:
    CommRtryCntRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
    
    uint8_t get_COMM_RTRY_CNT();
    void set_COMM_RTRY_CNT(uint8_t);
    
};


uint8_t CommRtryCntRegister::get_COMM_RTRY_CNT()
{
    return get(0, 4);
}
void CommRtryCntRegister::set_COMM_RTRY_CNT(uint8_t bitField)
{
    set(0, 4, bitField);
}

class AlrtpcktErrCntRegister : public Register
{
public:
    AlrtpcktErrCntRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
    
    uint8_t get_ALRTPCKT_ERR_CNT();
    void set_ALRTPCKT_ERR_CNT(uint8_t);
    
};


uint8_t AlrtpcktErrCntRegister::get_ALRTPCKT_ERR_CNT()
{
    return get(0, 8);
}
void AlrtpcktErrCntRegister::set_ALRTPCKT_ERR_CNT(uint8_t bitField)
{
    set(0, 8, bitField);
}

class WdFaultCntRegister : public Register
{
public:
    WdFaultCntRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
    
    uint8_t get_WD_FAULT_CNT();
    void set_WD_FAULT_CNT(uint8_t);
    
};


uint8_t WdFaultCntRegister::get_WD_FAULT_CNT()
{
    return get(0, 8);
}
void WdFaultCntRegister::set_WD_FAULT_CNT(uint8_t bitField)
{
    set(0, 8, bitField);
}

class AlivecountSeedRegister : public Register
{
public:
    AlivecountSeedRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
    
    uint8_t get_ALIVECOUNT_SEED();
    void set_ALIVECOUNT_SEED(uint8_t);
    
};


uint8_t AlivecountSeedRegister::get_ALIVECOUNT_SEED()
{
    return get(0, 8);
}
void AlivecountSeedRegister::set_ALIVECOUNT_SEED(uint8_t bitField)
{
    set(0, 8, bitField);
}

class AlivecountRetRegister : public Register
{
public:
    AlivecountRetRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
    
    uint8_t get_ALIVECOUNT_RET();
    void set_ALIVECOUNT_RET(uint8_t);
    
};


uint8_t AlivecountRetRegister::get_ALIVECOUNT_RET()
{
    return get(0, 8);
}
void AlivecountRetRegister::set_ALIVECOUNT_RET(uint8_t bitField)
{
    set(0, 8, bitField);
}

class AlivecountQRegister : public Register
{
public:
    AlivecountQRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
    
    uint8_t get_ALIVECOUNT_Q();
    void set_ALIVECOUNT_Q(uint8_t);
    
};


uint8_t AlivecountQRegister::get_ALIVECOUNT_Q()
{
    return get(0, 3);
}
void AlivecountQRegister::set_ALIVECOUNT_Q(uint8_t bitField)
{
    set(0, 3, bitField);
}

class FaultTimerRegister : public Register
{
public:
    FaultTimerRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
    
    uint8_t get_FAULT_TIMER();
    void set_FAULT_TIMER(uint8_t);
    
};


uint8_t FaultTimerRegister::get_FAULT_TIMER()
{
    return get(0, 8);
}
void FaultTimerRegister::set_FAULT_TIMER(uint8_t bitField)
{
    set(0, 8, bitField);
}

class SlpCbtimerRegister : public Register
{
public:
    SlpCbtimerRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
    
    uint8_t get_SLP_CBTIMER();
    void set_SLP_CBTIMER(uint8_t);
    
};


uint8_t SlpCbtimerRegister::get_SLP_CBTIMER()
{
    return get(0, 8);
}
void SlpCbtimerRegister::set_SLP_CBTIMER(uint8_t bitField)
{
    set(0, 8, bitField);
}

class VersionRegister : public Register
{
public:
    VersionRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
    
    uint8_t get_VERSION();
    void set_VERSION(uint8_t);
    
    uint8_t get_MODEL();
    void set_MODEL(uint8_t);
    
};


uint8_t VersionRegister::get_VERSION()
{
    return get(0, 4);
}
void VersionRegister::set_VERSION(uint8_t bitField)
{
    set(0, 4, bitField);
}

uint8_t VersionRegister::get_MODEL()
{
    return get(4, 4);
}
void VersionRegister::set_MODEL(uint8_t bitField)
{
    set(4, 4, bitField);
}

class ModelRegister : public Register
{
public:
    ModelRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
    
    uint8_t get_MODEL();
    void set_MODEL(uint8_t);
    
};


uint8_t ModelRegister::get_MODEL()
{
    return get(0, 8);
}
void ModelRegister::set_MODEL(uint8_t bitField)
{
    set(0, 8, bitField);
}

}