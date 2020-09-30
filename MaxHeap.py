import sys 

class MaxHeap: 

	def __init__(self, maxsize): 
		self.maxsize = maxsize 
		self.size = 0
		self.Heap = [0]*(self.maxsize+1 ) 
		self.Heap[0] = sys.maxsize 
		self.FRONT = 1

	def parent(self, pos): 
		return pos//2

	def leftChild(self, pos): 
		return 2 * pos 

	def rightChild(self, pos): 
		return (2 * pos) + 1

	def isLeaf(self, pos): 
		if pos >= (self.size//2) and pos <= self.size: 
			return True
		return False

	def swap(self, fpos, spos): 
		self.Heap[fpos], self.Heap[spos] = self.Heap[spos], self.Heap[fpos] 

	def maxHeapify(self, pos): 

		if not self.isLeaf(pos): 
			if (self.Heap[pos] < self.Heap[self.leftChild(pos)] or
				self.Heap[pos] < self.Heap[self.rightChild(pos)]): 

				if self.Heap[self.leftChild(pos)] > self.Heap[self.rightChild(pos)]: 
					self.swap(pos, self.leftChild(pos)) 
					self.maxHeapify(self.leftChild(pos)) 

				else: 
					self.swap(pos, self.rightChild(pos)) 
					self.maxHeapify(self.rightChild(pos)) 

	def insert(self, element): 
		if self.size >= self.maxsize : 
			return
		self.size+= 1
		self.Heap[self.size] = element 

		current = self.size 

		while self.Heap[current] > self.Heap[self.parent(current)]: 
			self.swap(current, self.parent(current)) 
			current = self.parent(current) 

	def Print(self): 
		for i in range(1, (self.size//2)+1): 
			print(" PARENT : "+str(self.Heap[i])+" LEFT CHILD : "+
							str(self.Heap[2 * i])+" RIGHT CHILD : "+
							str(self.Heap[2 * i + 1])) 

	def extractMax(self): 

		popped = self.Heap[self.FRONT] 
		self.Heap[self.FRONT] = self.Heap[self.size] 
		self.size-= 1
		self.maxHeapify(self.FRONT) 
		return popped 

	def heapify(self, n, i): 
		largest = i  
		l = 2 * i + 1	 
		r = 2 * i + 2	 
		if l < n and self.Heap[i] < self.Heap[l]: 
			largest = l 
		if r < n and self.Heap[largest] < self.Heap[r]: 
			largest = r 
		if largest != i: 
			self.Heap[i],self.Heap[largest] = self.Heap[largest],self.Heap[i] 
			self.heapify( n, largest) 

	def heapify(self,arr, n, i): 
		largest = i  
		l = 2 * i + 1	  
		r = 2 * i + 2	  

		if l < n and arr[i] < arr[l]: 
			largest = l 

		if r < n and arr[largest] < arr[r]: 
			largest = r 

		if largest != i: 
			arr[i],arr[largest] = arr[largest],arr[i] # swap 

			self.heapify(arr, n, largest) 

	def heapSort(self,arr): 
		n = len(arr) 
		for i in range(n//2 - 1, -1, -1): 
			self.heapify(arr, n, i) 
		for i in range(n-1, 0, -1): 
			arr[i], arr[0] = arr[0], arr[i] 
			self.heapify(arr, i, 0) 


if __name__ == "__main__": 
	print('The maxHeap is ') 
	m=[5,3,17,10,84,19,6,22,9]
	n=len(m)
	minHeap = MaxHeap(n) 
	minHeap.insert(5) 
	minHeap.insert(3) 
	minHeap.insert(17) 
	minHeap.insert(10) 
	minHeap.insert(84) 
	minHeap.insert(19) 
	minHeap.insert(6) 
	minHeap.insert(22) 
	minHeap.insert(9) 
	minHeap.Print()
	w=minHeap.extractMax()
	print("The Max val is " + str(w)) 
	m.remove(w)
	minHeap.heapSort(m)
	n=len(m)
	print ("Sorted array is") 
	for i in range(n): 
		print ("%d" %m[i]), 
	
	 
