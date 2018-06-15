import machine
import time


def getLED(led: int):
    return machine.Pin(led, machine.Pin.OUT)


def getPWMFromLED(led, freq: int, duty: int):
    if (duty < 0) or (duty > 1023):
        raise ValueError("Duty must be between [0, 1023]")
    pwm = machine.PWM(led)
    pwm.freq(freq)
    pwm.duty(duty)
    return pwm


def removePWMFromLED(pwm):
    pwm.deinit()


def pulse(led, time_to_wait: int):
    import math
    for i in range(20):
        led.duty(int(math.sin(i / 10 * math.pi) * 500 + 500))
        time.sleep_ms(time_to_wait)


def run():
    led = getLED(int(input("Número de LED: ")))
    freq = int(input("Frecuencia del LED: "))
    duty = int(input("Potencia del LED: "))
    pwm = getPWMFromLED(led, freq, duty)
    time_to_wait = int(input("Tiempo entre \"fade\"(ms): "))
    try:
        print("Fading...")
        while True:
            pulse(pwm, time_to_wait)
    except KeyboardInterrupt:
        print("Stopping...")
        removePWMFromLED(pwm)
