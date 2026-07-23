a = []
b = []

for i in range(5):
    k = []
    for j in range(5):
        k.append(int(input(f"Enter number for u1 ({i+1},{j+1}): ")))
    a.append(k)

for i in range(5):
    k = []
    for j in range(5):
        k.append(int(input(f"Enter number for u2 ({i+1},{j+1}): ")))
    b.append(k)

abingo = 5
bbingo = 5

rowa = [0] * 5
rowb = [0] * 5
cola = [0] * 5
colb = [0] * 5
dia1a = 0
dia1b = 0
dia2a = 0
dia2b = 0

for t in range(25):

    print("Bingo number:")
    c = int(input())

    # Mark the number
    for i in range(5):
        for j in range(5):
            if a[i][j] == c:
                a[i][j] = 0
            if b[i][j] == c:
                b[i][j] = 0

    # Check rows
    for i in range(5):
        x = 5
        y = 5
        for j in range(5):
            if a[i][j] == 0:
                x -= 1
            if b[i][j] == 0:
                y -= 1

        if x == 0 and rowa[i] == 0:
            abingo -= 1
            rowa[i] = 1

        if y == 0 and rowb[i] == 0:
            bbingo -= 1
            rowb[i] = 1

    # Check columns
    for j in range(5):
        x = 5
        y = 5
        for i in range(5):
            if a[i][j] == 0:
                x -= 1
            if b[i][j] == 0:
                y -= 1

        if x == 0 and cola[j] == 0:
            abingo -= 1
            cola[j] = 1

        if y == 0 and colb[j] == 0:
            bbingo -= 1
            colb[j] = 1

    # Main diagonal
    x = 5
    y = 5
    for i in range(5):
        if a[i][i] == 0:
            x -= 1
        if b[i][i] == 0:
            y -= 1

    if x == 0 and dia1a == 0:
        abingo -= 1
        dia1a = 1

    if y == 0 and dia1b == 0:
        bbingo -= 1
        dia1b = 1

    # Secondary diagonal
    x = 5
    y = 5
    for i in range(5):
        j = 4 - i
        if a[i][j] == 0:
            x -= 1
        if b[i][j] == 0:
            y -= 1

    if x == 0 and dia2a == 0:
        abingo -= 1
        dia2a = 1

    if y == 0 and dia2b == 0:
        bbingo -= 1
        dia2b = 1

    if abingo == 0:
        print("u1 wins")
        break

    if bbingo == 0:
        print("u2 wins")
        break