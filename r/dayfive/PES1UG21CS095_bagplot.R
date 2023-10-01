#Day 5 Assignment 2


library(aplpack)
datb <- read.csv("studentmarks.csv", header = TRUE, sep = ",")

attach(datb)

bagplot(studytime, Marks,
        xlab = "Study Time",
        ylab = "Marks",
        main = "Bagplot of Study Time vs Marks"
        )