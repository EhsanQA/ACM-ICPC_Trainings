def string_merge(s1, s2, l):
    ans = "";
    for i in s1:
        if (i == l):
            break;
        else:
            ans += i;
    for i in range(len(s2)):
        if (s2[i] == l):
            ans += s2[i:];
            break;
    return ans;
