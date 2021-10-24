class User:
    def __init__(self):
        self.progress = 0
        self.ranks = [-8, -7, -6, -5, -4, -3, -2, -1, 1, 2, 3, 4, 5, 6, 7, 8]
        self.rank = self.ranks[0]

    def inc_progress(self, p):
        if p not in self.ranks:
            raise Exception("Unsupported Rank!")
        if p > self.rank:
            d = self.ranks.index(p) - self.ranks.index(self.rank)
            self.progress += 10 * d * d
        elif p == self.rank:
            self.progress += 3
        elif p < self.rank:
            d = self.ranks.index(self.rank) - self.ranks.index(p)
            if d == 1:
                self.progress += 1
        while self.progress >= 100:
            self.progress -= 100
            if self.rank != 8:
                self.rank = self.ranks[self.ranks.index(self.rank) + 1]
                if self.rank == 8:
                    self.progress = 0
                    break
        if self.rank == 8:
            self.progress = 0
