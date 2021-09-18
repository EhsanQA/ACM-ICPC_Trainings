from random import randint

def monty(arr, chosen_index):
    while True:
        w1 = randint(0, 3)
        w2 = randint(0, 3)
        if arr[w1] == 0 and arr[w2] == 0 and w1 != w2 and w1 != chosen_index and w2 != chosen_index:
            break
    while True:
        i = randint(0, 3)
        if i != w1 and i != w2 and i != chosen_index:
            chosen_index = i
            break
    print(arr, "the final chosen one: " + str(chosen_index), ", and the deleted ones are: " + str(w1), w2)
    return arr[chosen_index] == 1
def main():
    count = 500000
    win_count = 0
    for i in range(count):
        arr = [0] * 4
        chosen_index = randint(0, 3)
        price_index = randint(0, 3)
        arr[price_index] = 1
        if monty(arr, chosen_index):
            win_count += 1
    print(win_count / count)
    # print(monty([0, 1, 0, 0], 1))
if __name__ == "__main__":
    main()
