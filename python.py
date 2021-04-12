t = int(input())

while(t!=0):
    t = t - 1
    n = int(input())
    if(n%2):
        n = (n/2)
    else:
        n = (n/2 -1)
    print(int(n))
