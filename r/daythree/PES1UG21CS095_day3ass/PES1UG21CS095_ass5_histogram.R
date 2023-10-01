#Assignment 5 - day 3

ds3 = read.csv("data1.csv", header = TRUE, sep = ",")

hist(ds3$marks,
     main = "Distribution of Marks vs Frequency",
     xlab = "Marks out of 100",
     breaks = seq(0,100,10),
     col = "blue",
     density = 5
     )
