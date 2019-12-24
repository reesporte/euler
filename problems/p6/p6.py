"""
project euler problem 6
"""

def solution(num):
    sum = 0;
    squared = 0;

    sum = num * (num+1)/ 2;
    squared = (num * (num + 1) * (2 * num + 1)) / 6;

    return sum*sum - squared

print(solution(100))
