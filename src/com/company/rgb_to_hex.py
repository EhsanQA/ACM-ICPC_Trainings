def rgb(r, g, b):
    answer = ''
    dictionary = {
        10: 'A',
        11: 'B',
        12: 'C',
        13: 'D',
        14: 'E',
        15: 'F'
    }
    # Out of Range
    if r > 255:
        r = 255
    elif r < 0:
        r = 0
    if g > 255:
        g = 255
    elif g < 0:
        g = 0
    if b > 255:
        b = 255
    elif b < 0:
        b = 0
    # R
    r_first = r // 16
    r_second = r % 16
    if r_first > 255:
        r_first = 255
    elif r_first < 0:
        r_first = 0
    if r_second > 255:
        r_second = 255
    elif r_second < 0:
        r_second = 0
    if r_first >= 10:
        answer += dictionary.get(r_first)
    else:
        answer += str(r_first)
    if r_second >= 10:
        answer += dictionary.get(r_second)
    else:
        answer += str(r_second)
    # G
    if g > 255:
        g = 255
    elif g < 0:
        g = 0
    g_first = g // 16
    g_second = g % 16

    if 10 <= g_first:
        answer += dictionary.get(g_first)
    else:
        answer += str(g_first)
    if g_second >= 10:
        answer += dictionary.get(g_second)
    else:
        answer += str(g_second)
    # B
    b_first = b // 16
    b_second = b % 16
    if b_first > 255:
        b_first = 255
    elif b_first < 0:
        b_first = 0
    if b_first >= 10:
        answer += dictionary.get(b_first)
    else:
        answer += str(b_first)
    if b_second >= 10:
        answer += dictionary.get(b_second)
    else:
        answer += str(b_second)
    return answer


print(rgb(-20, 275, 125))
