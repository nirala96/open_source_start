#include<bits/stdc++.h>

using namespace std;



void max_heapify(int b[], int n, int i) { 

    int p=i; 

    int l=2*i+1; 

    int r=2*i+2; 

    if(l<n && b[l]>b[p]){ 

        p=l; 

    } 

    if(r<n && b[r]>b[p]){ 

        p=r; 

    } 

    if(p!=i){ 

        int temp=b[i]; 

        b[i]=b[p]; 

        b[p]=temp; 

        max_heapify(b, n, p);

    } 

} 



void min_heapify(int b[], int n, int i){ 

    int p=i; 

    int l=2*i+1; 

    int r=2*i+2; 

    if(l<n && b[l]<b[p]){ 

        p=l; 

    } 

    if(r<n && b[r]<b[p]){ 

        p=r; 

    } 

    if(p!=i){ 

        int temp=b[i]; 

        b[i]=b[p]; 

        b[p]=temp;

        min_heapify(b, n, p);

    } 

} 



void heapSort(int b[], int n){ 

    int c; 

    cout<<"\nSort using \n1)Maxheap\n2)Minheap\n"; 

    cin>>c; 

    switch(c){ 

        case 1: for (int i=n/2-1;i>=0;i--) 

                max_heapify(b, n, i); 

