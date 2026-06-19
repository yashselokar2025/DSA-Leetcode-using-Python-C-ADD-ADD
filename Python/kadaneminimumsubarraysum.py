arr = [3,-4,2,-3,-1,7,-5]

current = arr[0]
minimum = arr[0]

for i in range(1,len(arr)):
    current = min(arr[i], current + arr[i])
    minimum = min(minimum, current)

print(minimum)