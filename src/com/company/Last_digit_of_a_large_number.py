def last_digit(n1, n2):
    if n2 == 0:
        return 1
    answer = multiplier(n1, n2)
    return answer

def multiplier(x, y):
    t = x
    arr = []
    count = 0
    for i in range(1, y):
        count += 1
        if count > 20:
            break
        x = x * t
        x = x % 10
        arr.append(int(x))
        if len(arr) > 3 and min(arr) == max(arr):
            return x
        if x == 0:
            return 0
    if count > 20:
        r_size = guess_seq_len(arr)
        x = int(y % r_size)
        return arr[x + 2]
    return x


def guess_seq_len(seq):
    # https://stackoverflow.com/questions/11385718/python-finding-repeating-sequence-in-list-of-integers
    guess = 1
    max_len = len(seq) // 2
    for i in range(2, max_len):
        if seq[0:i] == seq[i:2*i] :
            return i
    return guess
