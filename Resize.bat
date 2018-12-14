ren PEMCU_Fw.bin PEMCU_Fw_temp.bin
ExtBin.exe -i PEMCU_Fw_temp.bin  -o PEMCU_Fw.bin -s 0x8000  -d 0x00
del PEMCU_Fw_temp.bin