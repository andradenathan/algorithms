from random import randint, random

MAX_SIZE = 500

def partition(arr, left, right):
    pivot = arr[right]
    index = left - 1
    for pos in range(left, right):
        if arr[pos] < pivot:
            index += 1
            arr[index], arr[pos] = (arr[pos], arr[index])

    # Remember this pythonic variable swapping
    arr[index+1], arr[right] = arr[right], arr[index+1]

    return index+1

def quick_sort(arr: list, left: int, right: int):
    if left < right:
        pivot = partition(arr, left, right)
        quick_sort(arr, left, pivot-1)
        quick_sort(arr, pivot+1, right)


def array_init():
    arr = []
    for _ in range(MAX_SIZE):
        arr.append(int(randint(0, 1000) * random()))
    return arr

if __name__ == "__main__":
    arr = array_init()
    quick_sort(arr, 0, len(arr)-1)
    print(arr)