#include <ConfigRegisters.h>

namespace max17851
{
    uint8_t ConfigGen0Register::get_DEV_COUNT()
    {
        return get(0, 6);
    }
    void ConfigGen0Register::set_DEV_COUNT(uint8_t bitField)
    {
        set(0, 6, bitField);
    }
    uint8_t ConfigGen1Register::get_BAUD_RATE()
    {
        return get(4, 3);
    }
    void ConfigGen1Register::set_BAUD_RATE(uint8_t bitField)
    {
        set(4, 3, bitField);
    }

    uint8_t ConfigGen1Register::get_SINGLE_ENDED()
    {
        return get(7, 1);
    }
    void ConfigGen1Register::set_SINGLE_ENDED(uint8_t bitField)
    {
        set(7, 1, bitField);
    }
    uint8_t ConfigGen2Register::get_TX_NOPREAMBLE()
    {
        return get(0, 1);
    }
    void ConfigGen2Register::set_TX_NOPREAMBLE(uint8_t bitField)
    {
        set(0, 1, bitField);
    }

    uint8_t ConfigGen2Register::get_TX_NOSTOP()
    {
        return get(1, 1);
    }
    void ConfigGen2Register::set_TX_NOSTOP(uint8_t bitField)
    {
        set(1, 1, bitField);
    }

    uint8_t ConfigGen2Register::get_TX_PAUSE()
    {
        return get(2, 1);
    }
    void ConfigGen2Register::set_TX_PAUSE(uint8_t bitField)
    {
        set(2, 1, bitField);
    }

    uint8_t ConfigGen2Register::get_TX_ODDPARITY()
    {
        return get(3, 1);
    }
    void ConfigGen2Register::set_TX_ODDPARITY(uint8_t bitField)
    {
        set(3, 1, bitField);
    }

    uint8_t ConfigGen2Register::get_TX_QUEUE()
    {
        return get(4, 1);
    }
    void ConfigGen2Register::set_TX_QUEUE(uint8_t bitField)
    {
        set(4, 1, bitField);
    }

    uint8_t ConfigGen2Register::get_TX_PREAMBLES()
    {
        return get(5, 1);
    }
    void ConfigGen2Register::set_TX_PREAMBLES(uint8_t bitField)
    {
        set(5, 1, bitField);
    }

    uint8_t ConfigGen2Register::get_TX_RAW_DATA()
    {
        return get(6, 2);
    }
    void ConfigGen2Register::set_TX_RAW_DATA(uint8_t bitField)
    {
        set(6, 2, bitField);
    }
    uint8_t ConfigGen3Register::get_ALRTPCKT_TIMING()
    {
        return get(0, 4);
    }
    void ConfigGen3Register::set_ALRTPCKT_TIMING(uint8_t bitField)
    {
        set(0, 4, bitField);
    }

    uint8_t ConfigGen3Register::get_SPI_DOUT_EN()
    {
        return get(5, 1);
    }
    void ConfigGen3Register::set_SPI_DOUT_EN(uint8_t bitField)
    {
        set(5, 1, bitField);
    }

    uint8_t ConfigGen3Register::get_TX_UNLIMITED()
    {
        return get(6, 1);
    }
    void ConfigGen3Register::set_TX_UNLIMITED(uint8_t bitField)
    {
        set(6, 1, bitField);
    }

    uint8_t ConfigGen3Register::get_TX_AUTO()
    {
        return get(7, 1);
    }
    void ConfigGen3Register::set_TX_AUTO(uint8_t bitField)
    {
        set(7, 1, bitField);
    }
    uint8_t ConfigGen4Register::get_ALIVECOUNT_EN()
    {
        return get(0, 2);
    }
    void ConfigGen4Register::set_ALIVECOUNT_EN(uint8_t bitField)
    {
        set(0, 2, bitField);
    }

    uint8_t ConfigGen4Register::get_DC_EN()
    {
        return get(2, 2);
    }
    void ConfigGen4Register::set_DC_EN(uint8_t bitField)
    {
        set(2, 2, bitField);
    }

    uint8_t ConfigGen4Register::get_MS_EN()
    {
        return get(5, 2);
    }
    void ConfigGen4Register::set_MS_EN(uint8_t bitField)
    {
        set(5, 2, bitField);
    }

    uint8_t ConfigGen4Register::get_RXSWAP_EN()
    {
        return get(6, 1);
    }
    void ConfigGen4Register::set_RXSWAP_EN(uint8_t bitField)
    {
        set(6, 1, bitField);
    }

    uint8_t ConfigGen4Register::get_CO_ALRTPCKTEN()
    {
        return get(7, 1);
    }
    void ConfigGen4Register::set_CO_ALRTPCKTEN(uint8_t bitField)
    {
        set(7, 1, bitField);
    }
    uint8_t ConfigGen5Register::get_SPI_SFTYCSB()
    {
        return get(0, 1);
    }
    void ConfigGen5Register::set_SPI_SFTYCSB(uint8_t bitField)
    {
        set(0, 1, bitField);
    }

    uint8_t ConfigGen5Register::get_SPI_SFTYSDI()
    {
        return get(1, 1);
    }
    void ConfigGen5Register::set_SPI_SFTYSDI(uint8_t bitField)
    {
        set(1, 1, bitField);
    }

    uint8_t ConfigGen5Register::get_SPI_SFTYSCLK()
    {
        return get(2, 1);
    }
    void ConfigGen5Register::set_SPI_SFTYSCLK(uint8_t bitField)
    {
        set(2, 1, bitField);
    }

    uint8_t ConfigGen5Register::get_ALRTPCKT_DBNC()
    {
        return get(3, 3);
    }
    void ConfigGen5Register::set_ALRTPCKT_DBNC(uint8_t bitField)
    {
        set(3, 3, bitField);
    }

    uint8_t ConfigGen5Register::get_TX_HI_Z()
    {
        return get(6, 1);
    }
    void ConfigGen5Register::set_TX_HI_Z(uint8_t bitField)
    {
        set(6, 1, bitField);
    }

    uint8_t ConfigGen5Register::get_TX_START_SETUP()
    {
        return get(7, 1);
    }
    void ConfigGen5Register::set_TX_START_SETUP(uint8_t bitField)
    {
        set(7, 1, bitField);
    }
    uint8_t ConfigSafeMon0Register::get_GPIOREC_DLY()
    {
        return get(0, 8);
    }
    void ConfigSafeMon0Register::set_GPIOREC_DLY(uint8_t bitField)
    {
        set(0, 8, bitField);
    }
    uint8_t ConfigSafeMon1Register::get_CONT_TIMER_DLY()
    {
        return get(0, 8);
    }
    void ConfigSafeMon1Register::set_CONT_TIMER_DLY(uint8_t bitField)
    {
        set(0, 8, bitField);
    }
    uint8_t ConfigSafeMon2Register::get_SAFEMON_SCAN_DLY()
    {
        return get(0, 1);
    }
    void ConfigSafeMon2Register::set_SAFEMON_SCAN_DLY(uint8_t bitField)
    {
        set(0, 1, bitField);
    }
    uint8_t ConfigSafeMon3Register::get_SM_GPIO1_MASK()
    {
        return get(0, 1);
    }
    void ConfigSafeMon3Register::set_SM_GPIO1_MASK(uint8_t bitField)
    {
        set(0, 1, bitField);
    }

    uint8_t ConfigSafeMon3Register::get_SM_GPIO2_MASK()
    {
        return get(1, 1);
    }
    void ConfigSafeMon3Register::set_SM_GPIO2_MASK(uint8_t bitField)
    {
        set(1, 1, bitField);
    }

    uint8_t ConfigSafeMon3Register::get_SM_GPIO3_MASK()
    {
        return get(2, 1);
    }
    void ConfigSafeMon3Register::set_SM_GPIO3_MASK(uint8_t bitField)
    {
        set(2, 1, bitField);
    }

    uint8_t ConfigSafeMon3Register::get_SM_GPIO4_MASK()
    {
        return get(3, 1);
    }
    void ConfigSafeMon3Register::set_SM_GPIO4_MASK(uint8_t bitField)
    {
        set(3, 1, bitField);
    }

    uint8_t ConfigSafeMon3Register::get_NOMON()
    {
        return get(8, 1);
    }
    void ConfigSafeMon3Register::set_NOMON(uint8_t bitField)
    {
        set(8, 1, bitField);
    }
    uint8_t ConfigSlpRegister::get_SLP_CBNTFY()
    {
        return get(0, 3);
    }
    void ConfigSlpRegister::set_SLP_CBNTFY(uint8_t bitField)
    {
        set(0, 3, bitField);
    }

    uint8_t ConfigSlpRegister::get_SLP_ALRTPCKTEN()
    {
        return get(3, 1);
    }
    void ConfigSlpRegister::set_SLP_ALRTPCKTEN(uint8_t bitField)
    {
        set(3, 1, bitField);
    }

    uint8_t ConfigSlpRegister::get_SLP_SCAN_DLY()
    {
        return get(4, 2);
    }
    void ConfigSlpRegister::set_SLP_SCAN_DLY(uint8_t bitField)
    {
        set(4, 2, bitField);
    }
    uint8_t ConfigCommRegister::get_COMM_TO_DLY()
    {
        return get(0, 3);
    }
    void ConfigCommRegister::set_COMM_TO_DLY(uint8_t bitField)
    {
        set(0, 3, bitField);
    }

    uint8_t ConfigCommRegister::get_COMM_RTRY()
    {
        return get(4, 2);
    }
    void ConfigCommRegister::set_COMM_RTRY(uint8_t bitField)
    {
        set(4, 2, bitField);
    }
    uint8_t StatusDbncMaskRegister0::get_STATUS_DBNC_MASK()
    {
        return get(0, 8);
    }
    void StatusDbncMaskRegister0::set_STATUS_DBNC_MASK(uint8_t bitField)
    {
        set(0, 8, bitField);
    }

    uint8_t StatusErrorMaskRegister0::get_STATUS_ERROR_MASK()
    {
        return get(0, 8);
    }
    void StatusErrorMaskRegister0::set_STATUS_ERROR_MASK(uint8_t bitField)
    {
        set(0, 8, bitField);
    }

    uint8_t ConfigGpio12Register::get_GPIO1_CFG()
    {
        return get(0, 3);
    }
    void ConfigGpio12Register::set_GPIO1_CFG(uint8_t bitField)
    {
        set(0, 3, bitField);
    }

    uint8_t ConfigGpio12Register::get_GPIO2_CFG()
    {
        return get(4, 3);
    }
    void ConfigGpio12Register::set_GPIO2_CFG(uint8_t bitField)
    {
        set(4, 3, bitField);
    }
    uint8_t ConfigGpio34Register::get_GPIO3_CFG()
    {
        return get(0, 3);
    }
    void ConfigGpio34Register::set_GPIO3_CFG(uint8_t bitField)
    {
        set(0, 3, bitField);
    }

    uint8_t ConfigGpio34Register::get_GPIO4_CFG()
    {
        return get(4, 3);
    }
    void ConfigGpio34Register::set_GPIO4_CFG(uint8_t bitField)
    {
        set(4, 3, bitField);
    }
    uint8_t ConfigWd0Register::get_WD_CLO()
    {
        return get(0, 4);
    }
    void ConfigWd0Register::set_WD_CLO(uint8_t bitField)
    {
        set(0, 4, bitField);
    }

    uint8_t ConfigWd0Register::get_WD_OPN()
    {
        return get(4, 4);
    }
    void ConfigWd0Register::set_WD_OPN(uint8_t bitField)
    {
        set(4, 4, bitField);
    }
    uint8_t ConfigWd1Register::get_WD_DIV()
    {
        return get(0, 5);
    }
    void ConfigWd1Register::set_WD_DIV(uint8_t bitField)
    {
        set(0, 5, bitField);
    }

    uint8_t ConfigWd1Register::get_WD_1UD()
    {
        return get(5, 3);
    }
    void ConfigWd1Register::set_WD_1UD(uint8_t bitField)
    {
        set(5, 3, bitField);
    }
    uint8_t ConfigWd2Register::get_WD_DBNC()
    {
        return get(0, 3);
    }
    void ConfigWd2Register::set_WD_DBNC(uint8_t bitField)
    {
        set(0, 3, bitField);
    }

    uint8_t ConfigWd2Register::get_WD_SWW()
    {
        return get(3, 1);
    }
    void ConfigWd2Register::set_WD_SWW(uint8_t bitField)
    {
        set(3, 1, bitField);
    }

    uint8_t ConfigWd2Register::get_WD_EN()
    {
        return get(7, 1);
    }
    void ConfigWd2Register::set_WD_EN(uint8_t bitField)
    {
        set(7, 1, bitField);
    }

}