import sys

sys.setrecursionlimit(15000)
def get_score(n):
    if n == 1:
        return 50
    return (n * 50) + get_score(n - 1)
