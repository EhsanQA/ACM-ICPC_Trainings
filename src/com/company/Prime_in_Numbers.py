def prime_factors(n):
    the_answer = ""
    the_primes = without_power_prime_factors(n)
    the_primes_without_duplicates = sorted(list(set(the_primes)))
    the_primes_counts = [0] * len(the_primes_without_duplicates)
    for i in range(len(the_primes_without_duplicates)):
        for j in the_primes:
            if j == the_primes_without_duplicates[i]:
                the_primes_counts[i] += 1

    for i in range(len(the_primes_without_duplicates)):
        if the_primes_counts[i] == 1:
            the_answer += f"({the_primes_without_duplicates[i]})"
        else:
            the_answer += f"({the_primes_without_duplicates[i]}**{the_primes_counts[i]})"
    return the_answer

def without_power_prime_factors(n):
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

print(prime_factors(86240))