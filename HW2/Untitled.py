# your code goes here

X = 623315
X = map(int, str(X)) #Turn to array

X[4] = 5

# print X[4]
# print X



def replaceTwoDigits(pos1, pos2, replacementNum, X):

	arrayX = []
	for i in range(0, len(X)-1):

		if i is not pos1 and i is not pos2:
			arrayX.append(X[i])
		if i is pos1:
			arrayX.append(newNum)

	print arrayX
	newX = map(int, X)
	return newX

replaceTwoDigits(2, 3, 4, X)


	
