def solution(arr):
    index = 0
    answer = ""
    while index != len(arr):
        if indexer(0, arr[index:]) == 2:
            answer += f"{arr[index]},{arr[index + 1]},"
            index += indexer(0, arr[index:])
        elif indexer(0, arr[index:]) == 1:
            answer += f"{arr[index]},"
            index += indexer(0, arr[index:])
        else:
            answer += f"{arr[index]}-{arr[indexer(0, arr[index:]) + index - 1]},"
            index += indexer(0, arr[index:])
    return answer[:len(answer) - 1]

def indexer(j, arr):
    for i in range(len(arr)):
        if arr[0: i + 1] != [x for x in range(arr[0], arr[i] + 1)]:
            return i
    return len(arr)
