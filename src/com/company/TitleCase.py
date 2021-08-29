def fixer(s):
    ans = f"{s[0].upper()}"
    for i in range(1, len(s)):
        ans += s[i].lower()
    return ans


def title_case(title, minor_words=''):
    ans = ""
    minor = minor_words.split()
    for i in range(len(minor)):
        minor[i] = minor[i].lower()
    t = title.split();
    for i in range(len(t)):
        if i != 0:
            if t[i].lower() not in minor:
                ans += fixer(t[i]) + " "
            else:
                ans += t[i].lower() + " "
        else:
            ans += fixer(t[i]) + " "
    return ans[:-1]
    
