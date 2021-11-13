"""
project euler problem 17

i kept misspelling forty as fourty and so i kept trying a thousand different
ways to solve the problem and the real problem with my code was the spelling of the
word FORTY

i am So angry
"""

def please_god():
    cache = [0] * (1001)
    cache[0] = 0
    cache[1] = len('one')
    cache[2] = len('two')
    cache[3] = len('three')
    cache[4] = len('four')
    cache[5] = len('five')
    cache[6] = len('six')
    cache[7] = len('seven')
    cache[8] = len('eight')
    cache[9] = len('nine')
    cache[10] = len('ten')
    cache[11] = len('eleven')
    cache[12] = len('twelve')
    cache[13] = len('thirteen')
    cache[14] = len('fourteen')
    cache[15] = len('fifteen')
    cache[16] = len('sixteen')
    cache[17] = len('seventeen')
    cache[18] = len('eighteen')
    cache[19] = len('nineteen')
    cache[20] = len('twenty')
    cache[30] = len('thirty')
    cache[40] = len('forty')
    cache[50] = len('fifty')
    cache[60] = len('sixty')
    cache[70] = len('seventy')
    cache[80] = len('eighty')
    cache[90] = len('ninety')

    for i in range(21, 100):
        tens_place = (i//10)*10
        ones_place = i - tens_place
        cache[i] = cache[tens_place] + cache[ones_place]

    for i in range(100, 1000):
        hundreds_place = i//100
        teens = i - (hundreds_place*100)
        if teens == 0:
            cache[i] = cache[hundreds_place] + len('hundred')
        else:
            cache[i] = cache[hundreds_place] + len('hundredand') + cache[teens]

    cache[1000] = len('onethousand')

    print(sum(cache))

if __name__ == '__main__':
    please_god()
