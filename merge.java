import java.util.*;

class merge { 
	

	static int[] mergesort(int[] arr,int lo,int hi)
	{	
		if(hi==lo)
		{	int[] ba=new int[1];
			ba[0]=arr[lo];
			return ba;
		}

		int mid=(hi+lo)/2;

		int[] lsa=mergesort(arr,lo,mid);
		int[] rsa=mergesort(arr,mid+1,hi);
		int[] result=mergetwosortedarray(lsa,rsa);
		return result;
	}

	
	
	static int[] mergetwosortedarray(int[] l,int[] r){

		int i=0,j=0,k=0;
		int[] result=new int[l.length+r.length];

		while(i<l.length && j<r.length)
		{
			if(l[i]>r[j])
			{	result[k]=r[j];
				k++;
				j++;}

			else
			{result[k]=l[i];
			k++;
			i++;
			}
		}

		while(i<l.length){
			result[k]=l[i];
			i++;
			k++;
		}
		while(j<r.length){
			result[k]=r[j];
			j++;
			k++;
		}

		return result;
	}
	static void printArray(int arr[]) 
	{ 
		int n = arr.length; 
		for (int i = 0; i < n; ++i) 
			System.out.print(arr[i] + " "); 
		System.out.println(); 
	} 

	
	public static void main(String args[]) 
	{ 
		int arr[] = { 12, 11, 13, 5, 6, 7 }; 

		System.out.println("Given Array"); 
		printArray(arr); 

		

		System.out.println("\nSorted array"); 
		int[] result=mergesort(arr,0,5);
		printArray(result);
	} 
} 
