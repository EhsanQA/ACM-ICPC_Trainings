def solution(a, b):
    answer = [abs(a[i] - b[i]) ** 2 for i in range(len(a))]
    return sum(answer) / len(a)
