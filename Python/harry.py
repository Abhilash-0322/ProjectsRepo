def fibonachi(n):
    first=0
    second=1
    fib=0
    for i in range (n):
        print(fib)
        fib=first+second
        first=second
        second=fib

    return fib
if __name__=="main":
    fibonachi(9)