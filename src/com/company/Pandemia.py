def infected(s):
    inf = 0
    a = s.split("X")
    p = 0
    print(a)
    for i in range(len(a)):
        p += len(a[i])
        if ("1" in a[i]):
            print(a[i], len(a[i]))
            inf += len(a[i])
    print(inf, p)
    if (inf != 0 and p != 0):
        return (inf / p) * 100
    return 0
