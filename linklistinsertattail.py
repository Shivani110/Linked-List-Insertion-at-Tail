class Link:
    nxt = None
    def __init__(self, n):
        self.n = n

def listprint(h):
    pointer = h
    while pointer:
        print(pointer.n, end=' —> ')
        pointer = pointer.nxt
    print('None')

def insert(h, n):
    link1 = Link(n)
    link1.nxt = h
    return link1

def AddNode(h, k):
    i = h
    if i is None:
        h = insert(h, k)
    else:
        while i.nxt:
            i = i.nxt
        i.nxt = insert(i.nxt, k)

    return h
if __name__ == '__main__':
    K = [9, 8, 7, 6, 5, 4]
    h = None
    for k in K:
        h = AddNode(h, k)
    listprint(h)
