#Day 5 Assignment 1

dato <- read.csv("studentmarks.csv", header = TRUE, sep = ",")
library(vioplot)

x1 <- dato$studytime[dato$nocourses==4]
x2 <- dato$studytime[dato$nocourses==6]
x3 <- dato$studytime[dato$nocourses==8]

vioplot(x1,x2,x3, horizontal = TRUE,
        col = "red",
        names = c("4 courses","6 courses","8 courses"))

title("Violin Plot for Student Marks")