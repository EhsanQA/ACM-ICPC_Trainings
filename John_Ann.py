import functools

def john(n):
    the_john = []
    for i in range(n):
        the_john.append(one_john(i))
    return the_john

def ann(n):
    the_ann = []
    for i in range(n):
        the_ann.append(one_ann(i))
    return the_ann

@functools.lru_cache(maxsize=None)
def one_john(n):
    if n == 0:
        return 0
    return n - one_ann(one_john(n-1))

@functools.lru_cache(maxsize=None)
def one_ann(n):
    if n == 0:
        return 1
    return n - one_john(one_ann(n-1))

def sum_john(n):
    count = 0
    for i in john(n):
        count += i
    return count

def sum_ann(n):
    count = 0
    for i in ann(n):
        count += i
    return count

print(sum_ann(150))
