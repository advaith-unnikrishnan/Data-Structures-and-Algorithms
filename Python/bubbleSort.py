#BUBBLE SORT
# Time Effeciency Worst case and Avergae case =O(n^2)
# Space effeciency O(1)

size=(int)(input("Enter the size of the array "))
print("Enter the array elements ")
a=[]
for i in range(size):
    a.append((int)(input()))

print("Orginal Array:")
for i in range(size):
    print(a[i])

#implement Bubble Sort
for i in range(size):
    for j in range(size-1):
        if a[j]>a[j+1]:
            temp=a[j]
            a[j]=a[j+1]
            a[j+1]=temp

print("Sorted Array:")
for i in range(size):
    print(a[i])
