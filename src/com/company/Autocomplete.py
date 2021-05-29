import re

def autocomplete(x, d):
    x = x.lower()
    answer = []
    for i in range(len(d)):
        regex = re.compile('[^a-zA-Z]')
        d[i] = regex.sub('', d[i])
    x = regex.sub("", x)
    for i in d:
        t = i.lower()
        if x in t:
            if t.find(x) == 0 and len(answer) < 5:
                answer.append(i)
    return answer
