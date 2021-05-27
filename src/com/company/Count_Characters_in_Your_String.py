def count(string):
    s = sorted(list(set(string)))
    dict = {}
    for i in s:
        dict.update({i: string.count(i)})
    return dict
