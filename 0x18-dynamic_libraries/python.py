import ctypes

# Load the shared library
func = ctypes.CDLL('./func.so')

# Call the functions
a = 10
b = 5
print("{} + {} = {}".format(a, b, myfuncs.add(a, b)))
print("{} - {} = {}".format(a, b, myfuncs.sub(a, b)))
print("{} * {} = {}".format(a, b, myfuncs.mul(a, b)))
print("{} / {} = {}".format(a, b, myfuncs.div(a, b)))
print("{} % {} = {}".format(a, b, myfuncs.mod(a, b)))
