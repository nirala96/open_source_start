import random 
def quicksort(array,s,l, h): 
    if l < h: 
        pi = part(array,s,l, h)         
        quicksort(array,s, l, pi - 1)         
        quicksort(array,s, pi + 1, h)
        
def part(array,s, l, h): 
 
    pivot = array[h]     
    i = l - 1     
    for j in range(l, h):         
        if array[j] <= pivot:
            i = i + 1 
            (array[i], array[j]) = (array[j], array[i]) 
            (s[i], s[j]) = (s[j], s[i]) 
    (array[i + 1], array[h]) = (array[h], array[i + 1]) 
    (s[i + 1], s[h]) = (s[h], s[i + 1])     
    return i + 1 

def activityselection(s, f,n ):  
    quicksort(f,s,0,n-1) 
    print("The activities selected are as follow ---")     
    i = 0 
    print (i,end=" ")  
    for j in range(n):          
        if s[j] >= f[i]:  
            print (j, end=" ")             
            i = j      
    print() 
     
start=[] 
finish=[] 
n=65 
for i in range(0,n):
    tempstart=random.randint(1,94)    
    tempfinish=tempstart+random.randint(1,5)    
    start.append(tempstart)    
    finish.append(tempfinish)  
activityselection(start, finish,n)  
