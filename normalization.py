import random
import time

def normalize(data):
    x_min = min(data)
    x_max = max(data)
    for i in range(len(data)):
        data[i] = (data[i] - x_min) / (x_max - x_min)

size = 2147483
x = random.sample(range(1, size*2), size)
start = time.time()
normalize(x)
print(time.time() - start)
