def namelist(names):
    a = []
    ans = ""
    for i in names:
        a.append(i['name'])
    for i in range(len(a)):
        if i < len(a) - 2:
            ans += a[i] + ", "
        elif i == len(a) - 2:
            ans += a[i] + " & "
        elif i == len(a) - 1:
            ans += a[i]
    return ans
