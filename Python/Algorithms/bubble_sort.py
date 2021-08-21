def bubble_sort(values):

    length = len(values)
    for i in range(length - 1):
        swapped = False
        for j in range(length - 1 - i):
            if values[j] > values[j + 1]:
                swapped = True
                values[j], values[j + 1] = values[j + 1], values[j]
        if not swapped:
            break
    return values


if __name__ == "__main__":
    user_input = input("Enter numbers separated by a comma:").strip()
    unsorted = [int(item) for item in user_input.split(",")]
    sorted = bubble_sort(unsorted)
    print(sorted)
