import random, time, os

def normalize(data, y):
    x_min = min(data)
    x_max = max(data)
    for i in range(len(data)):
        y[i] = (data[i] - x_min) / (x_max - x_min)

size = 6147483
x = range(1, size)
y = [None] * size
start = time.time()
normalize(x, y)
print(time.time() - start)
os.system('pause')