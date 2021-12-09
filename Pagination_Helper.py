class PaginationHelper:

    def __init__(self, collection, items_per_page):
        self.collection = collection
        self.items_per_page = items_per_page

    def item_count(self):
        return len(self.collection)

    def page_count(self):
        t = len(self.collection) / self.items_per_page
        if t > int(t):
            return int(t) + 1
        return int(t)

    def page_item_count(self, page_index):
        if page_index < self.page_count() - 1:
            return self.items_per_page
        elif page_index >= self.page_count():
            return -1
        return self.item_count() % self.items_per_page

    def page_index(self, item_index):
        if self.item_count() > item_index > -1:
            return item_index // self.items_per_page
        return -1
