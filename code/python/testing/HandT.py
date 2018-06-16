import dht
import machine
import time

d = dht.DHT11(machine.pin(4))
def tenMeasures():
    for i in range (0, 10):
	measures()

    
def measures():
	d.measure()
	print("Temperature: "+ str(d.temperature()))
	print("Humidity "+ str(d.humidity()))
	time.sleep(1)

