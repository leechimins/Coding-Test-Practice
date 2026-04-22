n = int(input())
cnt = 1

if n < 10:
    newN = n*10

nTen = n//10
nOne = n%10

if nTen+nOne >= 10:
    nHap = nTen+nOne-10
else:
    nHap = nTen+nOne

newN = nOne*10 + nHap

while newN != n:
    
    nTen = newN//10
    nOne = newN%10
    
    if nTen+nOne >= 10:
        nHap = nTen+nOne-10
    else:
        nHap = nTen+nOne

    newN = nOne*10 + nHap
    
    cnt += 1

print(cnt)