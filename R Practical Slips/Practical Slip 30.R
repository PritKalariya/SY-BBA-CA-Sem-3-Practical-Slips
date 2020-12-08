#Write an R program to sort a list of 10 strings in ascending and descending order
simple_list <- c("abc", "pqr", "xyz", "aaa", "lmn", "www", "efg", "klk", "plm", "uvw")

# Ascending
simple_list <- sort(simple_list, decreasing = FALSE)
print(simple_list)

# Descending
simple_list <- sort(simple_list, decreasing = TRUE)
print(simple_list)