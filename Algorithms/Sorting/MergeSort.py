def merge_sort(arr: list)->list:
    n = len(arr)
    if n <= 1:
        return arr

    mid = n//2

    first_half = merge_sort(arr[:mid])
    second_half = merge_sort(arr[mid:])

    return merge(first_half, second_half)

def merge(left:list, right: list) -> list:
    merged = []
    i = j = 0

    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            merged.append(left[i])
            i += 1
        else:
            merged.append(right[j])
            j += 1

    merged.extend(left[i:])
    merged.extend(right[j:])
    return merged

array = [6,5,12,10,9,1]
sorted = merge_sort(array)
print(sorted)