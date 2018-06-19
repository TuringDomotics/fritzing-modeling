import time
import machine
from machine import Pin

ls = machine.ADC(0)
led = Pin(16, Pin.OUT)

#def on_of_auto_led():
#    resul = input("What do you want to do?('on', 'off', 'auto'): ")
#    if resul == "on":

def metodo():
    while True:
        print("Light: " + str(ls.read()))
        time.sleep(1)