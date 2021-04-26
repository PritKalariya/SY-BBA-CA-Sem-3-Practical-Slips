#Write an R program to create a simple bar plot of five subject's marks

marks = c(80,85,81,90,87)
barplot(marks,
        main = "Compairing Marks of 5 subject",
        xlab = "subject",
        ylab = "marks",
        names.arg = c("DM","DS","Soft. Engg.","A JS","Big Data"),
        col = "darkblue",
        horiz = FALSE)