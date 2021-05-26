def scramble(s1, s2):
    s1, s2 = sorted(s1), sorted(s2)
    if len(list(set(s1))) < len(list(set(s2))):
        return False
    for i in list(set(s2)):
        if s1.count(i) < s2.count(i):
            return False
    return True
