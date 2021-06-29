from random import randint

# a)
def a(A):
    ran_A = []
    for i in range(6):
        ran_A.append(A[randint(0, 40)])
    return ran_A

# b)
def b(A, B):
    another_ran_A = []
    for i in range(6):
        another_ran_A.append(A[randint(0, 40)])
    for i in another_ran_A:
        if i not in B:
            return "No it's not."

if __name__ == "__main__":
    A = range(1, 41)
    B = range(3, 38, 2)
    a(A)
    b(A, B)

    print(A[randint(0, 40)])
