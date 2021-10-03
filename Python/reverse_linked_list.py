from typing import Tuple

class Node:
    def __init__(self, data: int, next_=None) -> None:
        self.data = data
        self.next_ = next_

class LinkedList:
    # Minimal representation of linked list
    def __init__(self) -> None:
        self.head = None

    def insert(self, data: int) -> None:
        '''
        Inserts nodes linked list
        '''
        # if list is empty, make head
        # point to newly created node
        if self.head == None:
            self.head = Node(data=data)
        # if list is non-empty,
        # insert element at head.
        else:
            self.head = Node(data=data, next_=self.head)

    def reverse_iterative(self) -> None:
        '''
        Iteratively reverse linked list
        '''
        # tracks previous node
        previous = None
        # tracks current node
        current = self.head
        # tracks next-to current node
        upcomming = current.next_

        # make current node to point to
        # previous node, then move all
        # the pointers one node ahead.
        while current != None:
            current.next_ = previous
            previous = current
            current = upcomming
            upcomming = upcomming.next_ if upcomming != None else None
        
        # at the end of above loop
        # previous pointer is pointing
        # to last node in linked list
        # which is then made the head
        # of reversed linked list
        # via this assignment
        self.head = previous

    def reverse_recurrsive(self, current: Node, previous: Node) -> None:
        '''
        Recurrsively reverse linked list
        '''
        # if current is none this indicates
        # whole list has been traversed.
        # so we make the previous node(which
        # will we pointing to the last node)
        # the head of the reversed linked list
        if current == None:
            self.head = previous
            return
        
        # if current is not none therefore
        # there are nodes remaining to be processed

        # temp stores the next node to process
        temp = current.next_
        # make current node point to previous node
        current.next_ = previous
        # recurrsively repeat procedure
        self.reverse_recurrsive(temp, current)

    def traverse(self) -> None:
        '''
        Traverse linked list
        '''
        temp = self.head
        while temp != None:
            print(f'{temp.data} ->', end=' ')
            temp = temp.next_
        print('Null')


def generate_test_case(min_num: int, max_num: int, length: int) -> Tuple[int]:
    '''
    Generate test cases
    '''
    from random import randint
    test_case = [randint(min_num, max_num) for _ in range(length)]
    print('Test case is')
    print(test_case)
    print('\n')
    return test_case

if __name__ == '__main__':
    test = generate_test_case(0, 30, 8)
    ll = LinkedList()
    for item in test:
        ll.insert(item)
    
    ll.traverse()
    ll.reverse_iterative()
    ll.traverse()
    ll.reverse_recurrsive(ll.head, None)
    ll.traverse()
