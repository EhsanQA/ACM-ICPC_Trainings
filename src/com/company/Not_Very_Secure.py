def alphanumeric(p):
    if len(p) == 0:
        return False
    for i in p:
        if not i.isnumeric() and not i.isalpha():
            return False
    return True
