class MyQueue(object):

    def __init__(self):
        self.in_queue = []
        self.out_queue = []

    def push(self, x):
        """
        :type x: int
        :rtype: None
        """
        self.in_queue.append(x)

    def pop(self):
        """
        :rtype: int
        """
        self._moveElements()
        return self.out_queue.pop()

    def peek(self):
        """
        :rtype: int
        """
        self._moveElements()
        return self.out_queue[-1]

    def empty(self):
        """
        :rtype: bool
        """
        return not self.in_queue and not self.out_queue

    def _moveElements(self):
        if not self.out_queue:
            while self.in_queue:
                self.out_queue.append(self.in_queue.pop())


# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()