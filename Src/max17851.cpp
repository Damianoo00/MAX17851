#include "../Inc/max17851.h"

namespace max17851
{
    StatusRxRegister &StatusRxRegister::Instance()
    {
        static StatusRxRegister _instance(0x00, 0x01);
        return _instance;
    }
    StatusTxRegister &StatusTxRegister::Instance()
    {
        static StatusTxRegister _instance(0x02, 0x03);
        return _instance;
    }
    StatusLssmByteRegister &StatusLssmByteRegister::Instance()
    {
        static StatusLssmByteRegister _instance(0x04, 0x05);
        return _instance;
    }
    StatusGenRegister &StatusGenRegister::Instance()
    {
        static StatusGenRegister _instance(0x06, 0x07);
        return _instance;
    }
    StatusOpstateRegister &StatusOpstateRegister::Instance()
    {
        static StatusOpstateRegister _instance(0x08, 0x09);
        return _instance;
    }
    StatusBufRegister &StatusBufRegister::Instance()
    {
        static StatusBufRegister _instance(0x0A, 0x0B);
        return _instance;
    }
    StatusWdRegister &StatusWdRegister::Instance()
    {
        static StatusWdRegister _instance(0x0C, 0x0D);
        return _instance;
    }
    StatusGpioRegister &StatusGpioRegister::Instance()
    {
        static StatusGpioRegister _instance(0x0E, 0x0F);
        return _instance;
    }
    AlertRxRegister &AlertRxRegister::Instance()
    {
        static AlertRxRegister _instance(0x10, 0x11);
        return _instance;
    }
    AlertTxRegister &AlertTxRegister::Instance()
    {
        static AlertTxRegister _instance(0x12, 0x13);
        return _instance;
    }
    AlertLssmByteRegister &AlertLssmByteRegister::Instance()
    {
        static AlertLssmByteRegister _instance(0x14, 0x15);
        return _instance;
    }
    AlertGenRegister &AlertGenRegister::Instance()
    {
        static AlertGenRegister _instance(0x16, 0x17);
        return _instance;
    }
    AlertOpstateRegister &AlertOpstateRegister::Instance()
    {
        static AlertOpstateRegister _instance(0x18, 0x19);
        return _instance;
    }
    AlertBufRegister &AlertBufRegister::Instance()
    {
        static AlertBufRegister _instance(0x1A, 0x1B);
        return _instance;
    }
    AlertWdRegister &AlertWdRegister::Instance()
    {
        static AlertWdRegister _instance(0x1C, 0x1D);
        return _instance;
    }
    AlertGpioRegister &AlertGpioRegister::Instance()
    {
        static AlertGpioRegister _instance(0x1E, 0x1F);
        return _instance;
    }
    AlrtenRxRegister &AlrtenRxRegister::Instance()
    {
        static AlrtenRxRegister _instance(0x20, 0x21);
        return _instance;
    }
    AlrtenTxRegister &AlrtenTxRegister::Instance()
    {
        static AlrtenTxRegister _instance(0x22, 0x23);
        return _instance;
    }
    AlrtenLssmByteRegister &AlrtenLssmByteRegister::Instance()
    {
        static AlrtenLssmByteRegister _instance(0x24, 0x25);
        return _instance;
    }
    AlrtenGenRegister &AlrtenGenRegister::Instance()
    {
        static AlrtenGenRegister _instance(0x26, 0x27);
        return _instance;
    }
    AlrtenOpstateRegister &AlrtenOpstateRegister::Instance()
    {
        static AlrtenOpstateRegister _instance(0x28, 0x29);
        return _instance;
    }
    AlrtenBufRegister &AlrtenBufRegister::Instance()
    {
        static AlrtenBufRegister _instance(0x2A, 0x2B);
        return _instance;
    }
    AlrtenWdRegister &AlrtenWdRegister::Instance()
    {
        static AlrtenWdRegister _instance(0x2C, 0x2D);
        return _instance;
    }
    AlrtenGpioRegister &AlrtenGpioRegister::Instance()
    {
        static AlrtenGpioRegister _instance(0x2E, 0x2F);
        return _instance;
    }
    ClrTxbufRegister &ClrTxbufRegister::Instance()
    {
        static ClrTxbufRegister _instance(0x40, 0x41);
        return _instance;
    }
    ClrRxbufRegister &ClrRxbufRegister::Instance()
    {
        static ClrRxbufRegister _instance(0x42, 0x43);
        return _instance;
    }
    ClrLssmbufRegister &ClrLssmbufRegister::Instance()
    {
        static ClrLssmbufRegister _instance(0x44, 0x45);
        return _instance;
    }
    ClrAlivecountSeedRegister &ClrAlivecountSeedRegister::Instance()
    {
        static ClrAlivecountSeedRegister _instance(0x46, 0x47);
        return _instance;
    }
    SwporRegister &SwporRegister::Instance()
    {
        static SwporRegister _instance(0x4A, 0x4B);
        return _instance;
    }
    SlpEnRegister &SlpEnRegister::Instance()
    {
        static SlpEnRegister _instance(0x4C, 0x4D);
        return _instance;
    }
    VerConfigRegister &VerConfigRegister::Instance()
    {
        static VerConfigRegister _instance(0x4E, 0x4F);
        return _instance;
    }
    LoadConfigRegister &LoadConfigRegister::Instance()
    {
        static LoadConfigRegister _instance(0x50, 0x51);
        return _instance;
    }
    WdKeyRegister &WdKeyRegister::Instance()
    {
        static WdKeyRegister _instance(0x52, 0x53);
        return _instance;
    }
    ConfigGen0Register &ConfigGen0Register::Instance()
    {
        static ConfigGen0Register _instance(0x60, 0x61);
        return _instance;
    }
    ConfigGen1Register &ConfigGen1Register::Instance()
    {
        static ConfigGen1Register _instance(0x62, 0x63);
        return _instance;
    }
    ConfigGen2Register &ConfigGen2Register::Instance()
    {
        static ConfigGen2Register _instance(0x64, 0x65);
        return _instance;
    }
    ConfigGen3Register &ConfigGen3Register::Instance()
    {
        static ConfigGen3Register _instance(0x66, 0x67);
        return _instance;
    }
    ConfigGen4Register &ConfigGen4Register::Instance()
    {
        static ConfigGen4Register _instance(0x68, 0x69);
        return _instance;
    }
    ConfigGen5Register &ConfigGen5Register::Instance()
    {
        static ConfigGen5Register _instance(0x6A, 0x6B);
        return _instance;
    }
    ConfigSafeMon0Register &ConfigSafeMon0Register::Instance()
    {
        static ConfigSafeMon0Register _instance(0x6C, 0x6D);
        return _instance;
    }
    ConfigSafeMon1Register &ConfigSafeMon1Register::Instance()
    {
        static ConfigSafeMon1Register _instance(0x6E, 0x6F);
        return _instance;
    }
    ConfigSafeMon2Register &ConfigSafeMon2Register::Instance()
    {
        static ConfigSafeMon2Register _instance(0x70, 0x71);
        return _instance;
    }
    ConfigSafeMon3Register &ConfigSafeMon3Register::Instance()
    {
        static ConfigSafeMon3Register _instance(0x72, 0x73);
        return _instance;
    }
    ConfigSlpRegister &ConfigSlpRegister::Instance()
    {
        static ConfigSlpRegister _instance(0x74, 0x75);
        return _instance;
    }
    ConfigCommRegister &ConfigCommRegister::Instance()
    {
        static ConfigCommRegister _instance(0x76, 0x77);
        return _instance;
    }
    StatusDbncMaskRegister0 &StatusDbncMaskRegister0::Instance()
    {
        static StatusDbncMaskRegister0 _instance(0x78, 0x79);
        return _instance;
    }
    StatusDbncMaskRegister1 &StatusDbncMaskRegister1::Instance()
    {
        static StatusDbncMaskRegister1 _instance(0x7A, 0x7B);
        return _instance;
    }
    StatusErrorMaskRegister0 &StatusErrorMaskRegister0::Instance()
    {
        static StatusErrorMaskRegister0 _instance(0x7C, 0x7D);
        return _instance;
    }
    StatusErrorMaskRegister1 &StatusErrorMaskRegister1::Instance()
    {
        static StatusErrorMaskRegister1 _instance(0x7E, 0x7F);
        return _instance;
    }
    ConfigGpio12Register &ConfigGpio12Register::Instance()
    {
        static ConfigGpio12Register _instance(0x80, 0x81);
        return _instance;
    }
    ConfigGpio34Register &ConfigGpio34Register::Instance()
    {
        static ConfigGpio34Register _instance(0x82, 0x83);
        return _instance;
    }
    ConfigWd0Register &ConfigWd0Register::Instance()
    {
        static ConfigWd0Register _instance(0x84, 0x85);
        return _instance;
    }
    ConfigWd1Register &ConfigWd1Register::Instance()
    {
        static ConfigWd1Register _instance(0x86, 0x87);
        return _instance;
    }
    ConfigWd2Register &ConfigWd2Register::Instance()
    {
        static ConfigWd2Register _instance(0x88, 0x89);
        return _instance;
    }
    AlrtpcktbufRdPtrRegister &AlrtpcktbufRdPtrRegister::Instance()
    {
        static AlrtpcktbufRdPtrRegister _instance(0x8C, 0x8D);
        return _instance;
    }
    AlrtpcktbufRdMsgRegister &AlrtpcktbufRdMsgRegister::Instance()
    {
        static AlrtpcktbufRdMsgRegister _instance(0x8E, 0x8F);
        return _instance;
    }
    RxRdMsgRegister &RxRdMsgRegister::Instance()
    {
        static RxRdMsgRegister _instance(0x90, 0x91);
        return _instance;
    }
    RxRdNxtMsgRegister &RxRdNxtMsgRegister::Instance()
    {
        static RxRdNxtMsgRegister _instance(0x92, 0x93);
        return _instance;
    }
    TxQueueSelRegister &TxQueueSelRegister::Instance()
    {
        static TxQueueSelRegister _instance(0x94, 0x95);
        return _instance;
    }
    RxRdPtrRegister &RxRdPtrRegister::Instance()
    {
        static RxRdPtrRegister _instance(0x96, 0x97);
        return _instance;
    }
    RxWrPtrRegister &RxWrPtrRegister::Instance()
    {
        static RxWrPtrRegister _instance(0x98, 0x99);
        return _instance;
    }
    RxNxtMsgPtrRegister &RxNxtMsgPtrRegister::Instance()
    {
        static RxNxtMsgPtrRegister _instance(0x9A, 0x9B);
        return _instance;
    }
    RxSpaceRegister &RxSpaceRegister::Instance()
    {
        static RxSpaceRegister _instance(0x9C, 0x9D);
        return _instance;
    }
    RxByteRegister &RxByteRegister::Instance()
    {
        static RxByteRegister _instance(0x9E, 0x9F);
        return _instance;
    }
    NxtLdqRegister &NxtLdqRegister::Instance()
    {
        static NxtLdqRegister _instance(0xB0, 0xB1);
        return _instance;
    }
    LdqRegister &LdqRegister::Instance()
    {
        static LdqRegister _instance(0xC0, 0xC1);
        return _instance;
    }
    LdqPtrRegister &LdqPtrRegister::Instance()
    {
        static LdqPtrRegister _instance(0xC2, 0xC3);
        return _instance;
    }
    ConfigqRegister &ConfigqRegister::Instance()
    {
        static ConfigqRegister _instance(0xD0, 0xD1);
        return _instance;
    }
    ConfigPtrRegister &ConfigPtrRegister::Instance()
    {
        static ConfigPtrRegister _instance(0xD2, 0xD3);
        return _instance;
    }
    StateRegister &StateRegister::Instance()
    {
        static StateRegister _instance(0xDC, 0xDD);
        return _instance;
    }
    CommRtryCntRegister &CommRtryCntRegister::Instance()
    {
        static CommRtryCntRegister _instance(0xDE, 0xDF);
        return _instance;
    }
    AlrtpcktErrCntRegister &AlrtpcktErrCntRegister::Instance()
    {
        static AlrtpcktErrCntRegister _instance(0xE0, 0xE1);
        return _instance;
    }
    WdFaultCntRegister &WdFaultCntRegister::Instance()
    {
        static WdFaultCntRegister _instance(0xE2, 0xE3);
        return _instance;
    }
    AlivecountSeedRegister &AlivecountSeedRegister::Instance()
    {
        static AlivecountSeedRegister _instance(0xE4, 0xE5);
        return _instance;
    }
    AlivecountRetRegister &AlivecountRetRegister::Instance()
    {
        static AlivecountRetRegister _instance(0xE6, 0xE7);
        return _instance;
    }
    AlivecountQRegister &AlivecountQRegister::Instance()
    {
        static AlivecountQRegister _instance(0xE8, 0xE9);
        return _instance;
    }
    FaultTimerRegister0 &FaultTimerRegister0::Instance()
    {
        static FaultTimerRegister0 _instance(0xEA, 0xEB);
        return _instance;
    }
    FaultTimerRegister1 &FaultTimerRegister1::Instance()
    {
        static FaultTimerRegister1 _instance(0xEC, 0xED);
        return _instance;
    }
    SlpCbtimerRegister0 &SlpCbtimerRegister0::Instance()
    {
        static SlpCbtimerRegister0 _instance(0xEE, 0xEF);
        return _instance;
    }
    SlpCbtimerRegister1 &SlpCbtimerRegister1::Instance()
    {
        static SlpCbtimerRegister1 _instance(0xF0, 0xF1);
        return _instance;
    }
    VersionRegister &VersionRegister::Instance()
    {
        static VersionRegister _instance(0xF2, 0xF3);
        return _instance;
    }
    ModelRegister &ModelRegister::Instance()
    {
        static ModelRegister _instance(0xF4, 0xF5);
        return _instance;
    }
}