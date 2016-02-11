all:
	platformio run
	srec_cat ~/.platformio/packages/framework-mbed/variant/RBLAB_BLENANO/mbed/TARGET_RBLAB_BLENANO/TARGET_NORDIC/TARGET_MCU_NRF51822/Lib/s130_nrf51822_1_0_0/s130_nrf51_1.0.0_softdevice.hex -intel .pioenvs/redBearLabBLENano/firmware.hex -intel -o test.hex  -intel --line-length=44
	cp test.hex /run/media/mog/MBED/
