def snail(s):
    if len(s) == 0:
        return []
    elif len(s) == 1:
        return s[0]
    answer = []
    t = "r"
    i, j = 0, 0
    while len(answer) != (len(s) ** 2):
        # going right
        if t == "r":
            if j != len(s) - 1:
                if s[i][j + 1] != -1:
                    answer.append(s[i][j])
                    s[i][j] = -1
                    j += 1
                else:
                    answer.append(s[i][j])
                    s[i][j] = -1
                    t = "d"
                    i += 1
            elif j == len(s) - 1:
                answer.append(s[i][j])
                s[i][j] = -1
                t = "d"
                i += 1
                
        if len(answer) == (len(s) ** 2):
            break
        
        # going down
        
        if t == "d":
            if i != len(s) - 1:
                if s[i + 1][j] != -1:
                    answer.append(s[i][j])
                    s[i][j] = -1
                    i += 1
                else:
                    answer.append(s[i][j])
                    s[i][j] = -1
                    t = "l"
                    j -= 1
            elif i == len(s) - 1:
                answer.append(s[i][j])
                s[i][j] = -1
                t = "l"
                j -= 1
                
        if len(answer) == (len(s) ** 2):
            break
            
        # going left
        
        if t == "l":
            if j != 0:
                if s[i][j - 1] != -1:
                    answer.append(s[i][j])
                    s[i][j] = -1
                    j -= 1
                else:
                    answer.append(s[i][j])
                    s[i][j] = -1
                    t = "u"
                    i -= 1
            elif j == 0:
                answer.append(s[i][j])
                s[i][j] = -1
                t = "u"
                i -= 1
                
        if len(answer) == (len(s) ** 2):
            break
                
        # going up
        
        if t == "u":
            if i != 0:
                if s[i - 1][j] != -1:
                    answer.append(s[i][j])
                    s[i][j] = -1
                    i -= 1
                else:
                    answer.append(s[i][j])
                    s[i][j] = -1
                    t = "r"
                    j += 1
    return answer
