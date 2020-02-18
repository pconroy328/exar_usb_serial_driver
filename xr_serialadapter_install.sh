!/bin/bash
lsmod | grep xr_usb
retVal=$?
if [ $retVal -ne 0 ]; then
    sudo rmmod cdc-adm
    lsmod
    sudo rmmod cdc_acm
    sudo modprobe -r usbserial
    sudo modprobe usbserial
    sudo rmmod /home/pconroy/Exar2/Driver485/xr_usb_serial_common.ko
    sudo insmod /home/pconroy/Exar2/Driver485/xr_usb_serial_common.ko
fi
