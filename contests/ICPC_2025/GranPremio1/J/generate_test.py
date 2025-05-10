import random

# Generate test data in a file, where n is the length of the string
# From 1 to 10^6
length = random.randint(1, 1000000)
#length = 10

with open("J{}.txt".format(length), "w") as f:
    f.write("{}\n".format(length))
    for i in range(length):
        # Write a random character from 'a' to 'z'
        f.write(chr(random.randint(97, 122)))