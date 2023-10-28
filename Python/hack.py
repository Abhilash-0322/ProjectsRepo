n = int(input('Enter a number: '))
s = sum(i*i for i in range(n+1))
print("Sum of the squares of the first", n, "natural numbers:")
print(s)