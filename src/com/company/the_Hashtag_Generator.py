def generate_hashtag(s):
    if s == "":
        return False
    s = s.split()
    answer = []
    for i in s:
        if len(i) > 140:
            return False
        i = i.lower()
        answer.append(i[0].upper() + i[1:])
    print(answer)
    return "#" + "".join(answer)
  
