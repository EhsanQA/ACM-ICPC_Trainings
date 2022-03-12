def dbl_linear(n):
    the_list = [1]
    for i in range(2 * n):
        the_list += [the_list[i] * 2 + 1]
        the_list += [the_list[i] * 3 + 1]
    the_list = list(set(the_list))
    the_list.sort()
    return the_list[n]

print(dbl_linear(1000000))
