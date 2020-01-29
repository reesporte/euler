"""
project euler problem 19
"""
def is_leap_year(year):
    if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
        return True
    return False

def get_days_in_month(month, year):
    months = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    if month == 2 and is_leap_year(year):
        return 29
    return months[month-1] # month - 1 bc it's in a list, index starts at 0

def sunday_as_first_of_month(jan_day, year):
    """
    given what day the 1st of january of any year is, counts the number of sundays
    that are the first of the month in that year
    mon = 0 ... sun = 6
    """
    count = 0
    months = [0]*13
    months[1] = jan_day
    if months[1] == 6:
        count += 1

    for month in range(2, 13):
        months[month] = (months[month-1] + get_days_in_month(month-1, year)) % 7
        if months[month] == 6:
            count += 1

    return count

def boring_way():
    """
    boring way that doesnt take a lot of creativity using built-in functions
    """
    from datetime import date

    for year in range(1901, 2001):
        count = 0
        for month in range(1, 13):
            day = date(year, month, 1)
            if day.weekday() == 6:
                count += 1
    print(count)

def main():
    jan_day = [0] * 101
    jan_day[0] = 0
    count = 0
    for i in range(1, 100):
        if jan_day[i-1] == 6:
            jan_day[i] = 0
        else:
            jan_day[i] = jan_day[i-1] + 1
    for i in range(1901, 2001):
        count += sunday_as_first_of_month(jan_day[i-1900], i)

    print(count)

if __name__ == '__main__':
    main()
