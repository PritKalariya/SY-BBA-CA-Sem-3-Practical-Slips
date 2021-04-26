#Consider the inbuilt iris dataset
#i) Create a variable "y" and attach to it the output attribute of the "iris" dataset.
#ii) Create a barplot to breakdown your output attribute.
#iii) Create a density plot matrix for each attribute by class value.

install.packages("caret")
library(caret)

data(iris)
dataset<-iris

x <- dataset[,1:4]
y <- dataset[,5]
plot(y)

scales <- list(x=list(relation="free"), y=list(relation="free"))
featurePlot(x=x, y=y, plot="density", scales=scales)