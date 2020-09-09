

class Sorter:

    def bubble_sort(self, arr):
        ln = len(arr)
        cnt = 0
        for i in range(ln):
            for j in range(ln-i-1):
                    if arr[j] > arr[j+1]:
                        arr[j], arr[j+1] = arr[j+1], arr[j]
                    cnt += 1
        print("sorted array: ", *arr, "\ncomparisons", cnt)

srots = Sorter()
srots.bubble_sort([64, 34, 25, 12, 22, 11, 90])