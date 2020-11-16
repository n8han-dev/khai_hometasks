from random import randint


class Sorter:

    @staticmethod
    def bubble_sort(arr):
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
    def selection_sort(arr):
        comp, swap = 0, 0
        for i in range(len(arr)):
            min_idx = i
            for j in range(i + 1, len(arr)):
                if arr[min_idx] > arr[j]:
                    min_idx = j
            arr[i], arr[min_idx] = arr[min_idx], arr[i]

        print("sorted array: ", *arr)
        print("%d comparisons; %d swaps\n%d operations in total" % (comp, swap, comp+swap))

    def both_sorts(self, arr):
        print("---------------")
        print("Bubble sorting")
        self.bubble_sort(arr)
        print("---------------")
        print("Insertion sorting")
        self.selection_sort(arr)

    @staticmethod
    def __generator(arr_type):
        size = int(input("Enter array size: "))
        arr = []
        for i in range(size):
            arr.append(randint(0, 999))
        if arr_type == 2:
            arr.sort()
        if arr_type == 3:
            arr = list(reversed(sorted(arr)))
        print("Generated array: ", *arr)
        return arr

    def execute(self):
        functions = {1: "bubble_sort", 2: "insertion_sort", 3: "both_sorts"}
        while True:
            inp_method = int(input("Enter 1 for bubble sort\nEnter 2 for insertion "
                                   "sort\nEnter 3 for both\nEnter 0 to exit\nInput command: "))
            arr_type = int(input("Enter 1 for unsorted array\nEnter 2 for sorted array\n"
                                 "Enter 3 for reverse sorted array\nSelect option: "))
            if not inp_method:
                break
            if 3 < arr_type < 1:
                print("Incorrect option")
                continue
            func = functions.get(inp_method)
            if not func:
                print("Err: Unknown operation")
                continue
            arr = self.__generator(arr_type)
            getattr(self, func)(arr)


sorts = Sorter()
sorts.execute()
