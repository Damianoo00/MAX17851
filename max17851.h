#pragma once
#include "StatusRegisters.h"
#include "AlertRegisters.h"
#include "AlertenRegisters.h"
#include "CommandRegisters.h"
#include "ConfigRegisters.h"
#include "RxCommandRegisters.h"
#include "TxCommandRegisters.h"
#include "InfoRegisters.h"

namespace max17851
{
    // STATUS Registers
    const StatusRxRegister STATUS_RX(0x00, 0x01);
    const StatusTxRegister STATUS_TX(0x02, 0x03);
    const StatusLssmByteRegister STATUS_LSSM_BYTE(0x04, 0x05);
    const StatusGenRegister STATUS_GEN(0x06, 0x07);
    const StatusOpstateRegister STATUS_OPSTATE(0x08, 0x09);
    const StatusBufRegister STATUS_BUF(0x0A, 0x0B);
    const StatusWdRegister STATUS_WD(0x0C, 0x0D);
    const StatusGpioRegister STATUS_GPIO(0x0E, 0x0F);

    // ALERT  Registers
    const AlertRxRegister ALERT_RX(0x10, 0x11);
    const AlertTxRegister ALERT_TX(0x12, 0x13);
    const AlertLssmByteRegister ALERT_LSSM_BYTE(0x14, 0x15);
    const AlertGenRegister ALERT_GEN(0x16, 0x17);
    const AlertOpstateRegister ALERT_OPSTATE(0x18, 0x19);
    const AlertBufRegister ALERT_BUF(0x1A, 0x1B);
    const AlertWdRegister ALERT_WD(0x1C, 0x1D);
    const AlertGpioRegister ALERT_GPIO(0x1E, 0x1F);

    // ALRTEN  Registers
    const AlrtenRxRegister ALRTEN_RX(0x20, 0x21);
    const AlrtenTxRegister ALRTEN_TX(0x22, 0x23);
    const AlrtenLssmByteRegister ALRTEN_LSSM_BYTE(0x24, 0x25);
    const AlrtenGenRegister ALRTEN_GEN(0x26, 0x27);
    const AlrtenOpstateRegister ALRTEN_OPSTATE(0x28, 0x29);
    const AlrtenBufRegister ALRTEN_BUF(0x2A, 0x2B);
    const AlrtenWdRegister ALRTEN_WD(0x2C, 0x2D);
    const AlrtenGpioRegister ALRTEN_GPIO(0x2E, 0x2F);

    // COMMAND Registers
    const Register CLR_TXBUF(0x40, 0x41);
    const Register CLR_RXBUF(0x42, 0x43);
    const Register CLR_LSSM(0x44, 0x45);
    const Register CLR_ALIVECOUNT_SEED(0x46, 0x47);
    const SwporRegister SWPOR(0x4A, 0x4B);
    const SlpEnRegister SLP_EN(0x4C, 0x4D);
    const VerConfigRegister VER_CONFIG(0x4E, 0x4F);
    const LoadConfigRegister LOAD_CONFIG(0x50, 0x51);
    const WdKeyRegister WD_KEY(0x52, 0x53);

    // CONFIG  Registers
    const ConfigGen0Register CONFIG_GEN0(0x60, 0x61);
    const ConfigGen1Register CONFIG_GEN1(0x62, 0x63);
    const ConfigGen2Register CONFIG_GEN2(0x64, 0x65);
    const ConfigGen3Register CONFIG_GEN3(0x66, 0x67);
    const ConfigGen4Register CONFIG_GEN4(0x68, 0x69);
    const ConfigGen5Register CONFIG_GEN5(0x6A, 0x6B);
    const ConfigSafeMon0Register CONFIG_SAFEMON0(0x6C, 0x6D);
    const ConfigSafeMon1Register CONFIG_SAFEMON1(0x6E, 0x6F);
    const ConfigSafeMon2Register CONFIG_SAFEMON2(0x70, 0x71);
    const ConfigSafeMon3Register CONFIG_SAFEMON3(0x72, 0x73);
    const ConfigSlpRegister CONFIG_SLP(0x74, 0x75);
    const ConfigCommRegister CONFIG_COMM(0x76, 0x77);
    const StatusDbncMaskRegister STATUS_DBNC_MASK0(0x78, 0x79);
    const StatusDbncMaskRegister STATUS_DBNC_MASK1(0x7A, 0x7B);
    const StatusErrorMaskRegister STATUS_ERR_MASK0(0x7C, 0x7D);
    const StatusErrorMaskRegister STATUS_ERR_MASK1(0x7E, 0x7F);
    const ConfigGpio12Register CONFIG_GPIO12(0x80, 0x81);
    const ConfigGpio34Register CONFIG_GPIO34(0x82, 0x83);
    const ConfigWd0Register CONFIG_WD0(0x84, 0x85);
    const ConfigWd1Register CONFIG_WD1(0x86, 0x87);
    const ConfigWd2Register CONFIG_WD2(0x88, 0x89);

    // RX COMMAND Registers
    const AlrtpcktbufRdPtrRegister ALRTPCKTBUF_RD_PTR(0x8C, 0x8D);
    const AlrtpcktbufRdMsgRegister ALRTPCKTBUF_RD_MSG(0x8E, 0x8F);
    const RxRdMsgRegister RX_RD_MSG(0x90, 0x91);
    const RxRdNxtMsgRegister RX_RD_NXT_MSG(0x92, 0x93);
    const TxQueueSelRegister TX_QUEUE_SEL(0x94, 0x95);
    const RxRdPtrRegister RX_RD_PTR(0x96, 0x97);
    const RxWrPtrRegister RX_WR_PTR(0x98, 0x99);
    const RxNxtMsgPtrRegister RX_NXT_MSG_PTR(0x9A, 0x9B);
    const RxSpaceRegister RX_SPACE(0x9C, 0x9D);
    const RxByteRegister RX_BYTE(0x9E, 0x9F);

    // TX COMMAND Registers
    const NxtLdqRegister NXT_LDQ(0xB0, 0xB1);
    const LdqRegister LDQ(0xC0, 0xC1);
    const LdqPtrRegister LDQ_PTR(0xC2, 0xC3);
    const ConfigqRegister CONFIGQ(0xD0, 0xD1);
    const ConfigPtrRegister CONFIG_PTR(0xD2, 0xD3);

    // INFO Registers
    const StateRegister STATE(0xDC, 0xDD);
    const CommRtryCntRegister COMM_RTRY_CNT(0xDE, 0xDF);
    const AlrtpcktErrCntRegister ALRTPCKT_ERR_CNT(0xE0, 0xE1);
    const WdFaultCntRegister WD_FAULT_CNT(0xE2, 0xE3);
    const AlivecountSeedRegister ALIVECOUNT_SEED(0xE4, 0xE5);
    const AlivecountRetRegister ALIVECOUNT_RET(0xE6, 0xE7);
    const AlivecountQRegister ALIVECOUNT_Q(0xE8, 0xE9);
    const FaultTimerRegister FAULT_TIMER0(0xEA, 0xEB);
    const FaultTimerRegister FAULT_TIMER1(0xEC, 0xED);
    const SlpCbtimerRegister SLP_CBTIMER0(0xEE, 0xEF);
    const SlpCbtimerRegister SLP_CBTIMER1(0xF0, 0xF1);
    const VersionRegister VERSION(0xF2, 0xF3);
    const ModelRegister MODEL(0xF4, 0xF5);
}
