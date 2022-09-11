from random import randint, random

MAX_SIZE = 1000

def merge_sort(arr: list):
    if len(arr) > 1:
        mid = len(arr) // 2
        left = arr[:mid]
        right = arr[mid:]
 
        merge_sort(left)
        merge_sort(right)

        index_left = index_right = index_arr = 0
        
        while index_left < len(left) and index_right < len(right):
            if left[index_left] < right[index_right]:
                arr[index_arr] = left[index_left]
                index_left += 1
            else:
                arr[index_arr] = right[index_right]
                index_right += 1
            index_arr += 1            
        
        while index_left < len(left):
            arr[index_arr] = left[index_left]
            index_left += 1
            index_arr += 1
        
        while index_right < len(right):
            arr[index_arr] = right[index_right]
            index_right += 1
            index_arr += 1

def array_init():
    arr = []
    for _ in range(MAX_SIZE):
        arr.append(int(randint(0, 1000) * random()))
    return arr


if __name__ == '__main__':
    arr = array_init()
    merge_sort(arr)
    print(arr)