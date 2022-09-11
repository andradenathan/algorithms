from random import randint, random

MAX_SIZE = 300

def insertion_sort(arr: list): 
    for index in range(1, len(arr)):
        key = arr[index]
        position = index-1
        while position >= 0 and key < arr[position]:
            arr[position+1] = arr[position]
            position -= 1
        arr[position + 1] = key

def array_init():
    arr = []
    for _ in range(MAX_SIZE):
        arr.append(int(randint(0, 1000) * random()))
    return arr

if __name__ == "__main__":
    arr = array_init()
    insertion_sort(arr)
    print(arr)