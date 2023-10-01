#Day 4 Assignment 1

data <- read.csv("studentmarks.csv",header = TRUE, sep = ",")

plot(x = data$studytime,
     y = data$marks,
     # xlim = c(1,300),
     # ylim = c(1,50),
     xlab = "Study Time",
     ylab = "Marks",
     main = "Scatterplot"
)