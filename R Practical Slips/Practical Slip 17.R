#Write an R Program to calculate Decimal into binary of a given number.


convert_to_binary <- function(n) {
  if(n > 1) {
    convert_to_binary(as.integer(n/2))
  }
  cat(n %% 2)
}

decimal = 10.23
print("Decimal number")
print(decimal)


print("Binary number")
binary = convert_to_binary(decimal)