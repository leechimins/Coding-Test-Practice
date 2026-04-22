num = int(input())
for i in range(num):
    for k in range(num):
        if k+1 < (num-i):
            print(' ', end='')
        else:
            print('*', end='')
    print()