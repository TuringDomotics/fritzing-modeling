import machine
import time

p = machine.Pin(5, machine.Pin.IN, machine.Pin.PULL_UP)

def monitor():
    for i in range(0, 10):
        if p.value()==1:
            print('Presencia detectada')
            time.sleep(1)
        else:
            print('No hay moviemiento')
            time.sleep(1)
