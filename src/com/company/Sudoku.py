def valid_solution(board):
    print(board)
    # The O
    for i in board:
        for j in range(9):
            if i[j] == 0:
                print("0")
                return False

    # Every Row
    for i in range(1, 10):
        for j in range(9):
            count = 0
            for k in range(9):
                if board[j][k] == i:
                    count += 1
            if count != 1:
                print(count)
                print(i)
                print(j)
                print(k)
                return False
    # Every Column
    for i in range(1, 10):
        for j in range(9):
            count = 0
            for k in range(9):
                if board[k][j] == i:
                    count += 1
            if count != 1:
                print(count)
                print(i)
                print(j)
                print(k)
                return False
    first_list = []
    for i in range(3):
        for j in range(3):
            first_list += [board[i][j]]
    for i in range(9):
        temp_count = 0
        for j in range(9):
            if first_list[i] == first_list[j]:
                temp_count += 1
        if temp_count != 1:
            return False
    # second
    second_list = []
    for i in range(3):
        for j in range(3, 6):
            second_list += [board[i][j]]
    for i in range(9):
        temp_count = 0
        for j in range(9):
            if second_list[i] == second_list[j]:
                temp_count += 1
        if temp_count != 1:
            return False
    # third
    third_list = []
    for i in range(3):
        for j in range(6, 9):
            third_list += [board[i][j]]
    for i in range(9):
        temp_count = 0
        for j in range(9):
            if third_list[i] == third_list[j]:
                temp_count += 1
        if temp_count != 1:
            return False
    # forth
    forth_list = []
    for i in range(3, 6):
        for j in range(3):
            forth_list += [board[i][j]]
    for i in range(9):
        temp_count = 0
        for j in range(9):
            if forth_list[i] == forth_list[j]:
                temp_count += 1
        if temp_count != 1:
            return False
    # fifth
    fifth_list = []
    for i in range(3, 6):
        for j in range(3, 6):
            fifth_list += [board[i][j]]
    for i in range(9):
        temp_count = 0
        for j in range(9):
            if fifth_list[i] == fifth_list[j]:
                temp_count += 1
        if temp_count != 1:
            return False
    # sixth
    sixth_list = []
    for i in range(3, 6):
        for j in range(6, 9):
            sixth_list += [board[i][j]]
    for i in range(9):
        temp_count = 0
        for j in range(9):
            if sixth_list[i] == sixth_list[j]:
                temp_count += 1
        if temp_count != 1:
            return False
    # seventh
    seventh_list = []
    for i in range(6, 9):
        for j in range(3):
            seventh_list += [board[i][j]]
    for i in range(9):
        temp_count = 0
        for j in range(9):
            if seventh_list[i] == seventh_list[j]:
                temp_count += 1
        if temp_count != 1:
            return False
    # eighth
    eighth_list = []
    for i in range(6, 9):
        for j in range(3, 6):
            eighth_list += [board[i][j]]
    for i in range(9):
        temp_count = 0
        for j in range(9):
            if eighth_list[i] == eighth_list[j]:
                temp_count += 1
        if temp_count != 1:
            return False
    # ninth
    ninth_list = []
    for i in range(6, 9):
        for j in range(6, 9):
            ninth_list += [board[i][j]]
    for i in range(9):
        temp_count = 0
        for j in range(9):
            if ninth_list[i] == ninth_list[j]:
                temp_count += 1
        if temp_count != 1:
            return False
    return True