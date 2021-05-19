def printer_error(s):
    count = 0
    for i in s:
        if ord(i) > ord("m"):
            count += 1
    return f"{count}/{len(s)}"
