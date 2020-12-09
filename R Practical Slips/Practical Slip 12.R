#Write an R Program to calculate Multiplication Table
num = as.integer(readline(prompt = "Enter a number: "))
for(i in 1:10)
{
  print(paste(num, 'x', i, '=', num*i))
}
# paste: paste function is used to concatenate text and variables separated by commas