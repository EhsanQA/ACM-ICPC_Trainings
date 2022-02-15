def solution(string, ending):
    if ending == "":
        return True
    if ending in string:
        if string.count(ending) == 1:
            if string.find(ending) == len(string) - len(ending):
                return True
        else:
            while string.count(ending) != 1:
                i = string.find(ending)
                string = list(string)
                for j in range(len(ending)):
                    string.pop(i)
                a = ""
                for k in string:
                    a += k
                string = a
            if string.find(ending) == len(string) - len(ending):
                return True
    return False
