#Write a script in R to create two vectors of different lengths and give these vectors as input to array and print addition and subtraction of those matrices.

# Create two vectors of different lengths.
vector1 <- c(7,4,9)
vector2 <- c(10,11,12,13,14,15)

# Take these vectors as input to the array.
array1 <- array(c(vector1,vector2),dim = c(3,3,1))

# Create two vectors of different lengths.
vector3 <- c(2,3,6)
vector4 <- c(6,0,11,3,14,1,2,6,9)

# Take these vectors as input to the array.
array2 <- array(c(vector3,vector4),dim = c(3,3,1))

# create matrices from these arrays.
matrix1 <- array1[,,1]
matrix2 <- array2[,,1]

# Addition
result1 <- matrix1+matrix2
print(result1)

# Subtraction
result2 <- matrix1-matrix2
print(result2) 