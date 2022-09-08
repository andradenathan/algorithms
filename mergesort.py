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

if __name__ == '__main__':
    arr = [4, 123, 43, 31, 25, 3, 76, 2022, 125, 315]
    merge_sort(arr)
    print(arr)