def maskify(cc):
    ans = ""
    if (len(cc) > 4):
        ans += "#" * (len(cc) - 4)
        ans += cc[len(cc) - 4: len(cc)]
        return ans
    return cc
