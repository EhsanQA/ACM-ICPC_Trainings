def count_Kprimes(k, start, nd):
    answer = []
    for i in range(start, nd + 1):
        if len(prime_factors(i)) == k:
            answer.append(i)
    return answer

def prime_factors(n):
    i = 2
    factors = []
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            factors.append(i)
    if n > 1:
        factors.append(n)
    return factors

def puzzle(s):
    one_primes = []
    three_primes = []
    seven_primes = []
    for i in range(700):
        if len(prime_factors(i)) == 1:
            one_primes.append(i)
        elif len(prime_factors(i)) == 3:
            three_primes.append(i)
        elif len(prime_factors(i)) == 7:
            seven_primes.append(i)
    count = 0
    for a in one_primes:
        for b in three_primes:
            for c in seven_primes:
                if a + b + c == s:
                    count += 1
    return count

print(count_Kprimes(2, 0, 100))
print(puzzle(608))