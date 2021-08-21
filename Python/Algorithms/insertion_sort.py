list = []  

def input_list():
    n = int(input("Enter number of elements in the list: "))
    for i in range(n):
        temp = int(input("Enter element " + str(i + 1) + ': '))
        list.append(temp)


def insertion_sort(list, n, ascending=True):
  
    if ascending == True:
        return _insertion_sort_asc(list, n)
    else:
        return _insertion_sort_desc(list, n)


def _insertion_sort_asc(list, n):
  
    for i in range(0, n):
        key = list[i]
        j = i - 1
        while j >= 0 and list[j] > key:
            list[j + 1] = list[j]
            j = j - 1
        list[j + 1] = key
    return list


def _insertion_sort_desc(list, n):
  
    for i in range(0, n):
        key = list[i]
        j = i - 1
        while j >= 0 and list[j] < key:
            list[j + 1] = list[j]
            j = j - 1
        list[j + 1] = key
    return list


input_list()
list_1 = insertion_sort(list, len(list), ascending=True)
print("Sorted list by ascending: {}".format(list_1))
list_2 = insertion_sort(list, len(list), ascending=False)
print("Sorted list by descending: {}".format(list_2))
