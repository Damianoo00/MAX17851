#pragma once
#include "RegisterClass.h"

namespace max17851
{

    class StateRegister : public Register
    {
    public:
        StateRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static StateRegister &Instance();

        uint8_t get_STATE();
        void set_STATE(uint8_t);
    };

    class CommRtryCntRegister : public Register
    {
    public:
        CommRtryCntRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static CommRtryCntRegister &Instance();

        uint8_t get_COMM_RTRY_CNT();
        void set_COMM_RTRY_CNT(uint8_t);
    };

    class AlrtpcktErrCntRegister : public Register
    {
    public:
        AlrtpcktErrCntRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static AlrtpcktErrCntRegister &Instance();

        uint8_t get_ALRTPCKT_ERR_CNT();
        void set_ALRTPCKT_ERR_CNT(uint8_t);
    };

    class WdFaultCntRegister : public Register
    {
    public:
        WdFaultCntRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static WdFaultCntRegister &Instance();

        uint8_t get_WD_FAULT_CNT();
        void set_WD_FAULT_CNT(uint8_t);
    };

    class AlivecountSeedRegister : public Register
    {
    public:
        AlivecountSeedRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static AlivecountSeedRegister &Instance();

        uint8_t get_ALIVECOUNT_SEED();
        void set_ALIVECOUNT_SEED(uint8_t);
    };

    class AlivecountRetRegister : public Register
    {
    public:
        AlivecountRetRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static AlivecountRetRegister &Instance();

        uint8_t get_ALIVECOUNT_RET();
        void set_ALIVECOUNT_RET(uint8_t);
    };

    class AlivecountQRegister : public Register
    {
    public:
        AlivecountQRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static AlivecountQRegister &Instance();

        uint8_t get_ALIVECOUNT_Q();
        void set_ALIVECOUNT_Q(uint8_t);
    };

    class FaultTimerRegister0 : public Register
    {
    public:
        FaultTimerRegister0(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static FaultTimerRegister0 &Instance();

        uint8_t get_FAULT_TIMER();
        void set_FAULT_TIMER(uint8_t);
    };

    class FaultTimerRegister1 : public FaultTimerRegister0
    {
    public:
        FaultTimerRegister1(const uint8_t writeAddress, const uint8_t readAddress) : FaultTimerRegister0(writeAddress, readAddress) {}
        static FaultTimerRegister1 &Instance();
    };

    class SlpCbtimerRegister0 : public Register
    {
    public:
        SlpCbtimerRegister0(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static SlpCbtimerRegister0 &Instance();

        uint8_t get_SLP_CBTIMER();
        void set_SLP_CBTIMER(uint8_t);
    };

    class SlpCbtimerRegister1 : public SlpCbtimerRegister0
    {
    public:
        SlpCbtimerRegister1(const uint8_t writeAddress, const uint8_t readAddress) : SlpCbtimerRegister0(writeAddress, readAddress) {}
        static SlpCbtimerRegister1 &Instance();
    };

    class VersionRegister : public Register
    {
    public:
        VersionRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static VersionRegister &Instance();

        uint8_t get_VERSION();
        void set_VERSION(uint8_t);

        uint8_t get_MODEL();
        void set_MODEL(uint8_t);
    };

    class ModelRegister : public Register
    {
    public:
        ModelRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress) {}
        static ModelRegister &Instance();

        uint8_t get_MODEL();
        void set_MODEL(uint8_t);
    };

}