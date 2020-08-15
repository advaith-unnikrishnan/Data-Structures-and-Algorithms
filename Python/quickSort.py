#Implementation of Quick Sort in python
def quickSort(arr):
    l=len(arr)
    if l<=1:
        return arr
    else:
        pivot=arr.pop()
        greater,lesser=[],[]
        for i in arr:
            if i > pivot:
                greater.append(i)
            else:
                lesser.append(i)
        return quickSort(lesser)+[pivot]+quickSort(greater)
n=(int)(input("Enter the size of the array "))
print("Enter the array elements")
array=[]
for i in range(n):
    array.append((int)(input()))
print("Orginal Array:")
print(array)
print("sorted Array:")
print(quickSort(array))
