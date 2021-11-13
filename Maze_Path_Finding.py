path_lengths = []

def calculator(maze, i, j, ending_i, ending_j, v):
    if i == ending_i and j == ending_j:
        path_lengths.append(v)
        return None

    if i != len(maze) - 1:
        if maze[i + 1][j] == 0 or maze[i + 1][j] > v:
            maze[i + 1][j] = v + 1
            calculator(maze, i + 1, j, ending_i, ending_j, v + 1)

    if j != len(maze[0]) - 1:
        if maze[i][j + 1] == 0 or maze[i][j + 1] > v:
            maze[i][j + 1] = v + 1
            calculator(maze, i, j + 1, ending_i, ending_j, v + 1)

    if i != 0:
        if maze[i - 1][j] == 0 or maze[i - 1][j] > v:
            maze[i - 1][j] = v + 1
            calculator(maze, i - 1, j, ending_i, ending_j, v + 1)

    if j != 0:
        if maze[i][j - 1] == 0 or maze[i][j - 1] > v:
            maze[i][j - 1] = v + 1
            calculator(maze, i, j - 1, ending_i, ending_j, v + 1)
    return None

def main():
    the_maze = [[-1, 0, 0, 0],
                [0, -1, -1, 0],
                [0, 0, 1, 0],
                [0, 0, 0, 0],
                [-1, -1, 0, -1],
                [0, 0, 0, 0, -1]]

    calculator(the_maze, 0, 0, 5, 0, 0)
    print(min(path_lengths))
    
if __name__ == "__main__":
    main()
