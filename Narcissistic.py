def narcissistic(value):
    digit_length = len(str(value))
    the_sum = 0
    n = value
    while n != 0:
        the_sum += (n % 10) ** digit_length
        n //= 10
    return the_sum == value
