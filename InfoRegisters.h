#pragma once
#include "RegisterClass.h"
namespace max17851
{
    class StateRegister : public Register
    {
    public:
        Bits STATE;
        StateRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                               STATE(0, 3) {}
    };

    class CommRtryCntRegister : public Register
    {
    public:
        Bits COMM_RTRY_CNT;
        CommRtryCntRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                     COMM_RTRY_CNT(0, 4) {}
    };

    class AlrtpcktErrCntRegister : public Register
    {
    public:
        Bits ALRTPCKT_ERR_CNT;
        AlrtpcktErrCntRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                        ALRTPCKT_ERR_CNT(0, 8) {}
    };

    class WdFaultCntRegister : public Register
    {
    public:
        Bits WD_FAULT_CNT;
        WdFaultCntRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                    WD_FAULT_CNT(0, 8) {}
    };

    class AlivecountSeedRegister : public Register
    {
    public:
        Bits ALIVECOUNT_SEED;
        AlivecountSeedRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                        ALIVECOUNT_SEED(0, 8) {}
    };

    class AlivecountRetRegister : public Register
    {
    public:
        Bits ALIVECOUNT_RET;
        AlivecountRetRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                       ALIVECOUNT_RET(0, 8) {}
    };

    class AlivecountQRegister : public Register
    {
    public:
        Bits ALIVECOUNT_Q;
        AlivecountQRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                     ALIVECOUNT_Q(0, 3) {}
    };

    class FaultTimerRegister : public Register
    {
    public:
        Bits FAULT_TIMER;
        FaultTimerRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                    FAULT_TIMER(0, 8) {}
    };

    class SlpCbtimerRegister : public Register
    {
    public:
        Bits SLP_CBTIMER;
        SlpCbtimerRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                    SLP_CBTIMER(0, 8) {}
    };

    class VersionRegister : public Register
    {
    public:
        Bits VERSION;
        Bits MODEL;
        VersionRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                 VERSION(0, 4), MODEL(4, 4) {}
    };

    class ModelRegister : public Register
    {
    public:
        Bits MODEL;
        ModelRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                               MODEL(0, 8) {}
    };
}