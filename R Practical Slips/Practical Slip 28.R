#Write an R program to convert a given matrix to a list and print list in ascending order.
m = matrix(1:10,nrow=2, ncol=2)
print("Original matrix:")
print(m)

l = split(m, rep(1:ncol(m), each = nrow(m)))
print("list from the said matrix:")
print(l)