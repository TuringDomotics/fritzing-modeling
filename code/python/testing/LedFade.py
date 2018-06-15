import serial
import os
import time

# os.system('clear')

ser = serial.Serial('COM7', 9600)

print("Waiting for initialization...")
time.sleep(5)

while True:
    led = input("Which LED do you wish to operate? (press x to quit): ")

    if '0' <= led <= '7':
        print("Operating LED # %s" % led)
        ser.write(str.encode(led)) # sends the choice of led to arduino'
        on_or_off = input("Do you want to turn it on or off (press 0 for off and 1 for on): ")

        if on_or_off == '0':
            # send command to arduino to turn off the selected LED
            print("Command sent to Arduino to turn OFF LED %s" % led)
            ser.write(str.encode(on_or_off))
        elif on_or_off == '1':
            # send command to arduino to turn on the selected LED
            print("Command sent to Arduino to turn ON LED %s" % led)
            ser.write(str.encode(on_or_off))
        else:
            print("Please enter 0 or 1 to operate the LED. ")

    elif led == 'x':
        ser.close()
        break
    else:
        continue
