def rot13(m):
    answer = []
    for i in range(len(m)):
        if (ord(m[i].upper()) < 91 and ord(m[i].upper()) > 64):
            if ord(m[i].upper()) < 78:
                answer.append(chr(ord(m[i]) + 13))
            else:
                answer.append(chr(ord(m[i]) - 13))
        else:
            answer.append(m[i])
    the_answer = ""
    for i in answer:
        if type(i) == int:
            the_answer += " "
        else:
            the_answer += i
    return the_answer
