"""  Write a Python class to get all possible unique subsets from a set of integers.
Input  : [4, 5, 6] 
Output : [[], [6], [5], [5, 6], [4], [4, 6], [4, 5], [4, 5, 6]]

 """
arr = [4, 5, 6]
# find all possible subsets
subsets = [[]]
for i in arr:
    for j in range(len(subsets)):
        current = list(subsets[j])
        current.append(i)
        subsets.append(current)
        # add each subset to the list of subsets
# all possible subsets
print(subsets)
# unique subsets
print([list(t) for t in {tuple(element) for element in subsets}])
