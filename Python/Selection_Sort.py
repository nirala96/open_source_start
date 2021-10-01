import time
def selection_sort(arr):
    for i in range(len(arr)):
        k=i
        for j in range(i,len(arr)):
            if arr[k]>arr[j]:
                k=j
        arr[i],arr[k]=arr[k],arr[i]
if __name__=="__main__":
    average=0
    c=[for i in range(2000)]
    for i in range(1,16):
        start=time.time()
        selection_sort(c)
        end=time.time()
        average+=end-start
    print(f'Average is {(average*1000000)/15}')
