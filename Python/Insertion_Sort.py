import time
def insertion_sort(arr):
    for i in range(1,len(arr)):
        j=i-1
        temp=arr[i]
        while j>-1 and temp<arr[j]:
            arr[j+1]=arr[j]
            j-=1
        arr[j+1]=temp
if __name__=="__main__":
    average=0
    for i in range(1,16):
        c=[for i in range(2000)]
        start=time.time()
        insertion_sort(c)
        end=time.time()
        average+=end-start
    print(f'Average is {(average*1000000)/15}')
