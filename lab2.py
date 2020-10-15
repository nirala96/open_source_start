import random
import time 
n=1000
a=[]

for p in range(0,n):
   temp=random.randint(1,2000)
   a.append(temp)
ar=sorted(a)
arrr=sorted(a,reverse=True)

def linearsearch(a,n,x):
   t=False
   ai=None
   a1=a
   start = time.process_time()
   found=False
   for i in range(0,n):
     if a1[i]==x:
       t=True
       ai=i
       break
   if t==True:
      found=True
   else :
      found=False
   extime = (time.process_time() - start)*1000000
   return extime

def binsearch(a1,start, end, x):
    if end >= start:
        mid =(end + start) // 2
        if a1[mid] == x:
            return mid
        elif a1[mid] > x:
            return binsearch(a1, start, mid-1, x) 
        else:
            return binsearch(a1, mid + 1, end, x) 
  
    else:
        return -1

def bubblesort(arr,n):
  a1=arr
  start = time.process_time()
  for i in range(n-1):
    for j in range(0,n-i-1):
        if(arr[j]>arr[j+1]):
            arr[j],arr[j+1]=arr[j+1],arr[j]
  extime = (time.process_time() - start)*1000000
  return extime

def selectionsort(arr,n):
  a1=arr
  start = time.process_time()
  for i in range(n):
      index=i
      for j in range(i+1,n):
           if(arr[index]>arr[j]):
               index=j
      arr[i],arr[index]=arr[index],arr[i]
  extime = (time.process_time() - start)*1000000
  return extime

def insertionsort(arr,n):
  a1=arr
  start = time.process_time()
  for i in range(1,n):
      
      k=arr[i]
      j=i-1
      while j>=0 and k<arr[j]:
          
          arr[j+1]=arr[j]
          j-=1
      arr[j+1]=k
  extime = (time.process_time() - start)*1000000
  return extime


#main function
print("The average time for the Best case for the following algorithm(when array is sorted means a[]) :- ")

s=0
temp=0
for i in range(0,15):
   temp=linearsearch(a,n,a[0])
   s=s+temp
average_time=s/15
print("Linear Search :-",average_time)

s=0
temp=0
for i in range(0,15):
   a1=sorted(a)
   start = time.process_time()
   temp=binsearch(a1,0,n-1,a1[int(n/2)])
   extime = (time.process_time() - start)*1000000
   s=s+extime
average_time=s/15
print("Binary Search ",average_time)

s=0
temp=0
for i in range(0,15):
   temp=bubblesort(ar,n)
   s=s+temp
average_time=s/15
print("Bubble Sort ",average_time)

s=0
temp=0
for i in range(0,15):
   temp=selectionsort(ar,n)
   s=s+temp
average_time=s/15
print("Selection Sort ",average_time)

s=0
temp=0
for i in range(0,15):
   temp=insertionsort(ar,n)
   s=s+temp
average_time=s/15
print("Insertion Sort ",average_time)

print("The average time for the Average case for the following algorithm(when array is in random manner means c[]) :- ")

s=0
temp=0
c=random.randint(1,1000)
for i in range(0,15):
   temp=linearsearch(a,n,a[c])
   s=s+temp
average_time=s/15
print("Linear Search :-",average_time)

s=0
temp=0
c=random.randint(1,1000)
for i in range(0,15):
   a1=sorted(a)
   start = time.process_time()
   temp=binsearch(a1,0,n-1,a[c])
   extime = (time.process_time() - start)*1000000
   s=s+extime
average_time=s/15
print("Binary Search ",average_time)

s=0
temp=0
for i in range(0,15):
   temp=bubblesort(a,n)
   s=s+temp
average_time=s/15
print("Bubble Sort ",average_time)

s=0
temp=0
for i in range(0,15):
   temp=selectionsort(a,n)
   s=s+temp
average_time=s/15
print("Selection Sort ",average_time)

s=0
temp=0
for i in range(0,15):
   temp=insertionsort(a,n)
   s=s+temp
average_time=s/15
print("Insertion Sort ",average_time)

print("The average time for the Worst case for the following algorithm(when array is decreasing order means b[]) :- ")

s=0
temp=0
for i in range(0,15):
   temp=linearsearch(a,n,a[n-1])
   s=s+temp
average_time=s/15
print("Linear Search :-",average_time)

s=0
temp=0
for i in range(0,15):
   a1=sorted(a)
   start = time.process_time()
   temp=binsearch(a1,0,n-1,a1[n-1])
   extime = (time.process_time() - start)*1000000
   s=s+extime
average_time=s/15
print("Binary Search ",average_time)

s=0
temp=0
for i in range(0,15):
   temp=bubblesort(arrr,n)
   s=s+temp
average_time=s/15
print("Bubble Sort ",average_time)

s=0
temp=0
for i in range(0,15):
   temp=selectionsort(arrr,n)
   s=s+temp
average_time=s/15
print("Selection Sort ",average_time)

s=0
temp=0
for i in range(0,15):
   temp=insertionsort(arrr,n)
   s=s+temp
average_time=s/15
print("Insertion Sort ",average_time)
