#!/usr/bin/env bash

sudo avrdude -c dragon_isp -p m32u4 -B 100 -U flash:w:/home/ep/dorkyboard/firmware/qmk_firmware/dorkyboard_default.hex 
