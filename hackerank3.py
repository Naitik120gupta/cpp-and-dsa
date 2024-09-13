def min_operations(x, y):
    diff = abs(x - y)
    operations = 0

    while x != y:
        if x < y:
            x += 1  # Increase X by 1
        elif x > y:
            y += 2 
        operations += 1

    return operations

# Test cases
test_cases = [
    (3, 4),
    (5, 5),
    (7, 3),
    (5, 2),
    (7, 12)
]

for x, y in test_cases:
    print(min_operations(x, y))
