#Write an R program to create a Dataframe which contain details of 5 employees and display the details in ascending order.
Employees = data.frame(
  Name=c("Anant", "Divas", "Kartiki", "Jivan", "Leela"),
  Gender=c("M","M","F","M","F"),
  Age=c(23,22,25,26,32),
  Designation=c("Clerk", "Manager", "Executive", "CEO", "ASSISTANT"),
  SSN=c("123-34-2346","123-44-779","556-24-433","123-98-987","679-77-576")
)

print(Employees[with(Employees, order(Age)),])