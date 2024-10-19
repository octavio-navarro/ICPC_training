import random

# Function to generate test cases and write them to a file
def generate_test_cases(filename="repechaje_G.txt"):
    with open(filename, 'w') as file:
        # Generate a random number N (2 ≤ N ≤ 100,000)
        N = random.randint(2, 100000)
        file.write(f"{N}\n")  # Write the number of elements in the array

        # Generate N integers Ai (1 ≤ Ai ≤ 10^7)
        A = [str(random.randint(1, 10000000)) for _ in range(N)]
        file.write(" ".join(A))  # Write the array elements

# Generate the test cases and write to test_cases.txt
generate_test_cases()