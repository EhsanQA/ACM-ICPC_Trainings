from math import sqrt

class Vector:
    def __init__(self, v):
        self.v = v
        
    def add(self, a):
        if len(self.v) != len(a.v):
            raise Exception("Not the same length!")
        t = Vector([self.v[i] + a.v[i] for i in range(len(a.v))])
        return t
    
    def subtract(self, a):
        if len(self.v) != len(a.v):
            raise Exception("Not the same length!")
        t = Vector([self.v[i] - a.v[i] for i in range(len(a.v))])
        return t
    
    def dot(self, a):
        if len(self.v) != len(a.v):
            raise Exception("Not the same length!")
        t = [self.v[i] * a.v[i] for i in range(len(a.v))]
        return sum(t)
    
    def norm(self):
        return sqrt(sum([x ** 2 for x in self.v]))
    
    def __str__(self):
        t = "("
        for i in range(len(self.v)):
            t += str(self.v[i]) + ","
        t = t[:-1]
        return t + ")"
    
    def equals(self, a):
        return self.v == a.v
