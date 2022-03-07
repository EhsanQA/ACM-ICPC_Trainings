def is_solved(b):
    for i in range(3):
        if len(list(set(b[i]))) == 1 and b[i][0] != 0:
            return b[i][0]
        if len(list({b[0][i], b[1][0], b[2][i]})) == 1 and b[0][i] != 0:
            return b[i][0]
    if len(list({b[0][0], b[1][1], b[2][2]})) == 1 and b[0][0] != 0:
        return b[0][0]
    if len(list({b[0][2], b[1][1], b[2][0]})) == 1 and b[1][1] != 0:
        return b[0][2]
    for i in range(3):
        if 0 in b[i]:
            return -1
    return 0
