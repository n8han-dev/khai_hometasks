from random import randrange


class Algorithms:

    @staticmethod
    def bitwise_sort(arr):
        arr = [str(e) for e in arr]
        r = len(max(arr))
        ar, ss, lns = [], [[], [], [], [], [], [], [], [], [], []], []
        [ar.append('0'*(r-len(e))+e) for e in arr]
        for e in arr:
            print('0'*(r-len(e))+e)
        [ss[int(e[0])].append(e) for e in ar]
        [lns.append(len(e)) for e in ss]
        ar.clear()
        [[ar.append(j) for j in ss[k]] for k in range(10)]
        print("arr: ", *ar, "\n ss: ", *ss, "\n", lns)
        [e.clear() for e in ss]
        s = 0
        for e in lns:
            [ss[int(e[1])].append(e) for e in ar[s:s+e]]
            print("ss: ", ss)
            [e.clear() for e in ss]
            s += e


    @staticmethod
    def counting_sort(arr):
        print("-----------------------------------------------------------------------")
        print("Counting sorting")
        assign = 0
        largest = max(arr)
        c = [0] * (largest + 1)
        for i in range(len(arr)):
            c[arr[i]] += 1
        c[0] -= 1
        for i in range(1, largest + 1):
            c[i] += c[i - 1]
        result = [None] * len(arr)
        for x in reversed(arr):
            result[c[x]] = x
            c[x] -= - 1
            assign += 1
        print(*result, "\nassignments: ", assign)

    def both_sorts(self, arr):
        self.counting_sort(arr)
        print("-----------------------------------------------------------------------")
        print("Insertion sorting")
        self.bitwise_sort(arr)

    "-----------------------------------------------------------------------"
    @staticmethod
    def __generator(quality):
        size = int(input("Enter array length: "))
        arr = []
        for i in range(size):
            arr.append(randrange(0, 999))
        if quality == 2:
            arr.sort()
        if quality == 3:
            arr = list(reversed(sorted(arr)))
        print(*arr)
        return arr

    def execute(self):
        functions = {1: "counting_sort", 2: "bitwise_sort", 3: "both_sorts"}
        while True:
            alg = int(input("Enter 1 for counting sort, 2 for bitwise sort, 3 for both, 0 to exit: "))
            if not alg:
                break
            quality = int(input("Enter array type(1 for random, 2 for sorted, 3 for reverse sorted): "))
            if 1 > quality > 3:
                print("Incorrect option")
                continue
            func = functions.get(alg)
            if not func:
                print("Err: Unknown operation")
                continue
            arr = self.__generator(quality)
            getattr(self, func)(arr)


entity = Algorithms()
entity.execute()
