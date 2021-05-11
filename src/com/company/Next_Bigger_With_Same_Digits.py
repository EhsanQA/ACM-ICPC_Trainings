from itertools import permutations

def next_bigger(n):
    a = permutations(str(n))
    arr = []
    count = 0
    for i in a:
        count += 1
        if count > 100:
            break
        arr.append(int("".join(i)))
    arr = sorted(arr)
    for i in range(arr.index(n), len(arr)):
        if arr[i] > n:
            return arr[i]
    return -1
