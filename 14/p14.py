"""
project euler problem 14

my decidedly Object Oriented solution

"""

class solution(object):

    def __init__(self, iterations):
        super(solution, self).__init__()
        self.map = {}
        self.number_of_elements = 0
        self.iterations = iterations
        self.largest_number = 0

    def collatz(self):
        for i in range(1, self.iterations+1):
            n = i
            count = 0
            while n > 1:
                if n % 2 == 0:
                    n = n//2
                    if n in self.map:
                        count += self.map[n]
                        n = -1
                    else:
                        count += 1
                else:
                    n = 3*n + 1
                    if n in self.map:
                        count += self.map[n]
                        n = -1
                    else:
                        count += 1

            self.map[i] = count

            if count > self.number_of_elements:
                self.number_of_elements = count
                self.largest_number = i

        print(self.number_of_elements, self.largest_number)

def main():
    solution(1000000).collatz()

if __name__ == '__main__':
    main()
