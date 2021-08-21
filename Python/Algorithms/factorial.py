def factorial(n):
  """With recursion"""
    if n < 0:
        return "Negative numbers do not have a factorial!"
    elif n == 0:
        return 1
    else:
        return n * factorial(n - 1)


n = int(input("Input a number to compute the factiorial: "))
print(factorial(n))
