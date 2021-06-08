def i(w):
    count = counter(w)
    if len(w) > 1:
        if w[0].isupper():
            if count < len(w) - count and w[0] != "I":
                return "i" + w
    return "Invalid word"

def counter(w):
    count = 0
    a = ["a", "e", "o", "u", "i"]
    for i in a:
        if i in w or i.upper() in w:
            count += w.count(i) + w.count(i.upper())
    return count
