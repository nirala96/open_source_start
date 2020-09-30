import java.io.*;
import java.util.*;

class Node {
	int data;
	Node next;
	Node(int d) {
        data = d;
        next = null;
    }
}

class Solution {

    public static  Node insert(Node head,int data) {
        //Complete this method
         
        Node new_node = new Node(data);

        if(head == null)
       // new_node.next =  head;
        head = new_node;
else{
        Node temp = head;
         while(temp.next!=null)
         {
             temp = temp.next;
         }
         temp.next = new_node;
}
         return head;
    }

	public static void display(Node head) {
