class SLLNode:
    def __init__(self,data):
        self.data = data
        self.next = None

    def __repr__(self):
        return "SLLNode object: data={}".format(self.data)

    def get_data(self):
        """"Return the self.data attribue"""
        return self.data

    def set_data(self,new_data):
        """"Replace the existing value of the self.data attribute with the new_data parameter"""
        self.data = new_data

    def get_next(self):
        """"Return the self.next attribute"""
        return self.next

    def set_next(self, new_next):
        """"Replace the existing value of the self.data attribute with the new_next parameter"""
        self.next = new_next

class SLL:
    def __init__(self):
        self.head = None

    def __repr__(self):
        return "SSL object: head={}".format(self.head)

    def is_empty(self):
        """"Returns True if Linked List is empty. Otherwise returns, False."""
        return self.head == None #self.head == None

    def add_front(self,new_data):
        """Add a node whose data is a new_data argument to the front of the linked list"""
        temp = SLLNode(new_data)
        temp.set_next(self.head)
        self.head = temp

    def size(self):
        """Traverses the Linked List and returns an integer value representhing the number of nodes in the Linked List"""
        size = 0
        if self.head == None:
            return 0

        current = self.head
        while current is not None: #while there are more still nodes left to count
            size = size + 1
            current = current.get_next()

        return size

    def search(self,data):
        """Traverses the linked list and returns true if the data searched is present in one of the nodes. Otherwise, returns false.

        The time complexity is O(n). """
        if self.head == None:
            return "Linked List is empty. No nodes to search."

        current = self.head
        while current is not None:
            if current.get_data() == data:
                return True
            else:
                current = current.get_next()

        return False

    def remove(self,data):
        """Removes the first occurence of the node that contains the self.data variable. Returns nothing.

        The time complexity is O(n) """
        if self.head == None:
            return "Linked list is empty. No nodes to remove."

        current = self.head
        previous = None
        found = False
        while not found:
            if current.get_data() == data:
                found = True
            else:
                if current.get_next() == None:
                    return "A node with that data value is not present."
                else:
                    previous = current
                    current = current.get_next()

        if previous is None:
            self.head = current.get_next()
        else:
            previous.set_next(current.get_next())
