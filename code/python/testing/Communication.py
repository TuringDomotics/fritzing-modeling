from pyfirmata import Arduino, util


def main():
    board = Arduino('COM7')
    on_board_pin = board.get_pin('a:2:p')
    on_board_pin.write(1)


if __name__ == "__main__":
    main()
