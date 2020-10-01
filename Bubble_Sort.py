import time
def bubble_sort(arr):
    flag=-1
    for i in range(len(arr)-1):
        for j in range(len(arr)-i-1):
            if arr[j]>arr[j+1]:
                arr[j],arr[j+1]=arr[j+1],arr[j]
                flag=i
        if flag==-1:
            break
if __name__=="__main__":
    average=0
    c=[for i in range(2000)]
    for i in range(1,16):
        start=time.time()
        bubble_sort(c)
        end=time.time()
        average+=end-start

    print(f'Average is {(average*1000000)/15}')
