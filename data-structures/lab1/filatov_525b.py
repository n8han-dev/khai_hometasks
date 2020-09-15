from random import randint


class Sorter:

    @staticmethod
    def bubble_sort(arr):  # prints sorted array and outputs 2 integers: number of comparisons/swaps
        ln = len(arr)
        comp, swap = 0, 0
        for i in range(ln):
            for j in range(ln-i-1):
                if arr[j] > arr[j+1]:
                    arr[j], arr[j+1] = arr[j+1], arr[j]
                    swap += 1
                comp += 1
        print("sorted array: ", *arr)
        print("%d comparisons; %d swaps\n%d operations in total" % (comp, swap, comp+swap))

    @staticmethod
    def insertion_sort(arr):
        comp, swap = 0, 0
        for i in range(len(arr)):
            min_idx = i
            for j in range(i + 1, len(arr)):
                if arr[min_idx] > arr[j]:
                    min_idx = j
                comp += 1
            arr[i], arr[min_idx] = arr[min_idx], arr[i]
            swap += 1
        print("sorted array: ", *arr)
        print("%d comparisons; %d swaps\n%d operations in total" % (comp, swap, comp+swap))

    def both_sorts(self, arr):
        print("---------------")
        print("Bubble sorting")
        self.bubble_sort(arr)
        print("---------------")
        print("Insertion sorting")
        self.insertion_sort(arr)

    @staticmethod
    def __generator():
        size = int(input("Enter array size: "))
        arr = []
        for i in range(size):
            arr.append(randint(0, 999))
        print("Unsorted array: ", *arr)
        return arr

    def execute(self):
        functions = {1: "bubble_sort", 2: "insertion_sort", 3: "both_sorts"}
        while True:
            inp = int(input("Enter 1 for bubble sort\nEnter 2 for insertion "
                            "sort\nEnter 3 for both\nEnter 0 to exit\nInput command: "))
            if not inp:
                break
            func = functions.get(inp)
            if not func:
                print("Err: Unknown operation")
                continue
            arr = self.__generator()
            getattr(self, func)(arr)


sorts = Sorter()
sorts.execute()
