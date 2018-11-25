def toDigits(n, b):
	digits = []
	while n > 0:
		digits.insert(0, n % b)
		n = n // b
	return digits

print(toDigits(42, 2))

def colnumToString(n):
	columLetters = ""
	while n > 0:
		n, remainder = divmod(n - 1, 26)
		columLetters = chr(65 + remainder) + columLetters
	return columLetters
print(colnumToString(51))