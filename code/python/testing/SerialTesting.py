import serial
import struct
import time


def __on_off_led(mode_input: str, arduino: serial.Serial):
    if mode_input == "on":
        print("LED is ON")
        time.sleep(1)
        arduino.write(1)
    elif mode_input == "off":
        print("LED is OFF")
        time.sleep(1)
        arduino.write(0)
    else:
        print("Bye...")
        time.sleep(1)
        arduino.close()
        exit(0)


if __name__ == '__main__':
    with serial.Serial('COM7', 115200, parity=serial.PARITY_EVEN, rtscts=0, timeout=10) as arduino:
        print("Initializing...")
        time.sleep(10)
        while True:
            if arduino.isOpen():
                arduino.write(2)
                user_input = input("LED: [ON/OFF/...] ")
                __on_off_led(user_input.lower(), arduino)
