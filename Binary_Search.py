import Input
import time
def binary_search(arr,low,high,x):
    if low>high:
        return -1
    else:
        mid=(low+high)//2
        if arr[mid]==x:
            return mid
        elif arr[mid]>x:
            return binary_search(arr,low,mid-1,x)
        elif arr[mid]<x:
            return binary_search(arr,mid+1,high,x)
if __name__=="__main__":
    average=0
    for i in range(1,16):
        start=time.time()
        temp=sorted(Input.c)
        binary_search(temp,0,9999,i*990)
        end=time.time()
        average+=end-start
    print(f'Average is {(average*1000000)/15}')
