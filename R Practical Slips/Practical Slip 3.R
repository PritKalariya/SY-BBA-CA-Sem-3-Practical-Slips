#Write an R program to compare two data frames to find the elements in first data frame that are not present in second data frame.
a = c("a", "b", "c", "d", "e")
b = c("d", "e", "f", "g")
print("Original Dataframes")
print(a)
print(b)
print("Data in first dataframe that are not present in second dataframe:")
result = setdiff(a, b)
print(result)