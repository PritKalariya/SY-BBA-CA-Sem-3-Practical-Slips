#Write an R program to concatenate two given factor in a single factor and display in descending order.

f1 <- factor(sample(LETTERS, size=6, replace=TRUE))
f2 <- factor(sample(LETTERS, size=6, replace=TRUE))

print("Original factors:")
print(f1)
print(f2)

f = factor(c(levels(f1)[f1], levels(f2)[f2]))

print("After concatenate factor becomes:")
print(f)

print("Conatenate in descending order:")
print(rev(f))