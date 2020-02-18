sudo rmmod cdc-adm
lsmod
sudo rmmod cdc_acm
sudo modprobe -r usbserial
sudo modprobe usbserial
sudo rmmod ~/Exar2/Driver485/xr_usb_serial_common.ko
sudo insmod ~/Exar2/Driver485/xr_usb_serial_common.ko
dmesg

