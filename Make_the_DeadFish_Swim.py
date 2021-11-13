def parse(data):
    answer = []
    t = 0
    for i in data:
        if i == "i":
            t += 1
        if i == "d":
            t -= 1
        if i == "s":
            t = t ** 2
        if i == "o":
            answer.append(t)
    return answer
