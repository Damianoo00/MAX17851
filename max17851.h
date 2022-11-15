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
     StatusRxRegister STATUS_RX(0x00, 0x01);
     StatusTxRegister STATUS_TX(0x02, 0x03);
     StatusLssmByteRegister STATUS_LSSM_BYTE(0x04, 0x05);
     StatusGenRegister STATUS_GEN(0x06, 0x07);
     StatusOpstateRegister STATUS_OPSTATE(0x08, 0x09);
     StatusBufRegister STATUS_BUF(0x0A, 0x0B);
     StatusWdRegister STATUS_WD(0x0C, 0x0D);
     StatusGpioRegister STATUS_GPIO(0x0E, 0x0F);

    // ALERT  Registers
     AlertRxRegister ALERT_RX(0x10, 0x11);
     AlertTxRegister ALERT_TX(0x12, 0x13);
     AlertLssmByteRegister ALERT_LSSM_BYTE(0x14, 0x15);
     AlertGenRegister ALERT_GEN(0x16, 0x17);
     AlertOpstateRegister ALERT_OPSTATE(0x18, 0x19);
     AlertBufRegister ALERT_BUF(0x1A, 0x1B);
     AlertWdRegister ALERT_WD(0x1C, 0x1D);
     AlertGpioRegister ALERT_GPIO(0x1E, 0x1F);

    // ALRTEN  Registers
     AlrtenRxRegister ALRTEN_RX(0x20, 0x21);
     AlrtenTxRegister ALRTEN_TX(0x22, 0x23);
     AlrtenLssmByteRegister ALRTEN_LSSM_BYTE(0x24, 0x25);
     AlrtenGenRegister ALRTEN_GEN(0x26, 0x27);
     AlrtenOpstateRegister ALRTEN_OPSTATE(0x28, 0x29);
     AlrtenBufRegister ALRTEN_BUF(0x2A, 0x2B);
     AlrtenWdRegister ALRTEN_WD(0x2C, 0x2D);
     AlrtenGpioRegister ALRTEN_GPIO(0x2E, 0x2F);

    // COMMAND Registers
     Register CLR_TXBUF(0x40, 0x41);
     Register CLR_RXBUF(0x42, 0x43);
     Register CLR_LSSM(0x44, 0x45);
     Register CLR_ALIVECOUNT_SEED(0x46, 0x47);
     SwporRegister SWPOR(0x4A, 0x4B);
     SlpEnRegister SLP_EN(0x4C, 0x4D);
     VerConfigRegister VER_CONFIG(0x4E, 0x4F);
     LoadConfigRegister LOAD_CONFIG(0x50, 0x51);
     WdKeyRegister WD_KEY(0x52, 0x53);

    // CONFIG  Registers
     ConfigGen0Register CONFIG_GEN0(0x60, 0x61);
     ConfigGen1Register CONFIG_GEN1(0x62, 0x63);
     ConfigGen2Register CONFIG_GEN2(0x64, 0x65);
     ConfigGen3Register CONFIG_GEN3(0x66, 0x67);
     ConfigGen4Register CONFIG_GEN4(0x68, 0x69);
     ConfigGen5Register CONFIG_GEN5(0x6A, 0x6B);
     ConfigSafeMon0Register CONFIG_SAFEMON0(0x6C, 0x6D);
     ConfigSafeMon1Register CONFIG_SAFEMON1(0x6E, 0x6F);
     ConfigSafeMon2Register CONFIG_SAFEMON2(0x70, 0x71);
     ConfigSafeMon3Register CONFIG_SAFEMON3(0x72, 0x73);
     ConfigSlpRegister CONFIG_SLP(0x74, 0x75);
     ConfigCommRegister CONFIG_COMM(0x76, 0x77);
     StatusDbncMaskRegister STATUS_DBNC_MASK0(0x78, 0x79);
     StatusDbncMaskRegister STATUS_DBNC_MASK1(0x7A, 0x7B);
     StatusErrorMaskRegister STATUS_ERR_MASK0(0x7C, 0x7D);
     StatusErrorMaskRegister STATUS_ERR_MASK1(0x7E, 0x7F);
     ConfigGpio12Register CONFIG_GPIO12(0x80, 0x81);
     ConfigGpio34Register CONFIG_GPIO34(0x82, 0x83);
     ConfigWd0Register CONFIG_WD0(0x84, 0x85);
     ConfigWd1Register CONFIG_WD1(0x86, 0x87);
     ConfigWd2Register CONFIG_WD2(0x88, 0x89);

    // RX COMMAND Registers
     AlrtpcktbufRdPtrRegister ALRTPCKTBUF_RD_PTR(0x8C, 0x8D);
     AlrtpcktbufRdMsgRegister ALRTPCKTBUF_RD_MSG(0x8E, 0x8F);
     RxRdMsgRegister RX_RD_MSG(0x90, 0x91);
     RxRdNxtMsgRegister RX_RD_NXT_MSG(0x92, 0x93);
     TxQueueSelRegister TX_QUEUE_SEL(0x94, 0x95);
     RxRdPtrRegister RX_RD_PTR(0x96, 0x97);
     RxWrPtrRegister RX_WR_PTR(0x98, 0x99);
     RxNxtMsgPtrRegister RX_NXT_MSG_PTR(0x9A, 0x9B);
     RxSpaceRegister RX_SPACE(0x9C, 0x9D);
     RxByteRegister RX_BYTE(0x9E, 0x9F);

    // TX COMMAND Registers
     NxtLdqRegister NXT_LDQ(0xB0, 0xB1);
     LdqRegister LDQ(0xC0, 0xC1);
     LdqPtrRegister LDQ_PTR(0xC2, 0xC3);
     ConfigqRegister CONFIGQ(0xD0, 0xD1);
     ConfigPtrRegister CONFIG_PTR(0xD2, 0xD3);

    // INFO Registers
     StateRegister STATE(0xDC, 0xDD);
     CommRtryCntRegister COMM_RTRY_CNT(0xDE, 0xDF);
     AlrtpcktErrCntRegister ALRTPCKT_ERR_CNT(0xE0, 0xE1);
     WdFaultCntRegister WD_FAULT_CNT(0xE2, 0xE3);
     AlivecountSeedRegister ALIVECOUNT_SEED(0xE4, 0xE5);
     AlivecountRetRegister ALIVECOUNT_RET(0xE6, 0xE7);
     AlivecountQRegister ALIVECOUNT_Q(0xE8, 0xE9);
     FaultTimerRegister FAULT_TIMER0(0xEA, 0xEB);
     FaultTimerRegister FAULT_TIMER1(0xEC, 0xED);
     SlpCbtimerRegister SLP_CBTIMER0(0xEE, 0xEF);
     SlpCbtimerRegister SLP_CBTIMER1(0xF0, 0xF1);
     VersionRegister VERSION(0xF2, 0xF3);
     ModelRegister MODEL(0xF4, 0xF5);
}
