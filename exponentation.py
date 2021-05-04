def modulus(n,m):
    return m%(2**n)

n=int(input())
m=int(input())

print(modulus(n,m))