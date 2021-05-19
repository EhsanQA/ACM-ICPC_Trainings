def anagrams(word, words):
    answer = []
    for i in words:
        if len(i) == len(word):
            t = True
            for j in word:
                if word.count(j) != i.count(j):
                    t = False
            if t:
                answer.append(i)
    return answer
