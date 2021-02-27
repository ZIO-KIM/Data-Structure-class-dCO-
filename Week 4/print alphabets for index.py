def print_row1(x):
    for _ in range(x):
        print(x, end="")


def print_row2(x):
    for i in range(x):
        if i == 0 or i == x - 1:
            print(x, end="")
        else:
            print(" ", end="")


N = int(input())
for index in range(N):
    if index == 0 or index == N - 1:
        print_row1(N)
        print()
    else:
        print_row2(N)
        print()
