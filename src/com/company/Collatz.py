def collatz(n):
    answer = ""
    while n != 1:
        answer += f"{n}->"
        n = recursioner(n)
    return answer + "1"

def recursioner(n):
    if n == 1:
        return n
    if n % 2 == 0:
        return int(n / 2)
    if n % 2 == 1:
        return 3 * n + 1
