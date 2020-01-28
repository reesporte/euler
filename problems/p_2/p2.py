"""
project euler problem 2
"""

terms = [1, 2]
even_sum = 2
while terms[-1] < 4000000:
    new_term = terms[-1] + terms[-2]
    if new_term%2 == 0:
        even_sum += new_term
    terms.append(new_term)

print("the sum of all even terms\nin the fibonacci sequence whose values\ndo not exceed 4,000,000 is ", even_sum)
