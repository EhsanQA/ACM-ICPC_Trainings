def sequence_sum(b, e, s):
    answer = 0
    for i in range(b, e + 1, s):
        answer += i
    return answer
