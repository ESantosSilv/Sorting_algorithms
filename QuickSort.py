unsorted_list = [20, 7, 3, 4, 12, 15, 2, 1]

#does not change list but returns the sorted list, not in-place implementation.
def quicksort(a):
	if(len(a)<2):
		return a
	else:
		pivot = a[0]
		smaller = []
		bigger = []
		for i in a[1:]:
			if i<pivot:
				smaller.append(i)
			else:
				bigger.append(i)
	return quicksort(smaller)+[pivot]+quicksort(bigger)

print(unsorted_list)	
print(quicksort(unsorted_list))
