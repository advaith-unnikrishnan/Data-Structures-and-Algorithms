n=(int)(input("Enter the size of the array"))
arr=[]
print("Enter the array elements in sorted order")
for i in range(n):
    arr.append((int)(input()))
s=(int)(input("Enter the search element"))
start,end,c=0,n-1,0
while start<=end:
    mid=(start+end)//2
    if arr[mid]==s:
        print("Element found at ",mid+1," position")
        c=c+1
        break
    elif arr[mid]<s:
        end=mid-1
    else:
        start=mid+1
if c==0:
    print("Element not found")