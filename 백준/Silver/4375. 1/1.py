def count_digits(n):
    cnt = 1
    x = 1
    while (x % n != 0):
        x = x * 10 + 1
        cnt += 1
    return cnt


while True:
    try:
        n = int(input())
        print(count_digits(n))
    except EOFError:
        break
