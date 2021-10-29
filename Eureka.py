def sum_dig_pow(a, b):
    ans = []
    for i in range(a, b + 1):
        d = [int(x) for x in str(i)]
        s = 0;
        for j in range(len(d)):
            s += d[j] ** (j + 1)
        if s == i:
            ans.append(i)
    return ans
