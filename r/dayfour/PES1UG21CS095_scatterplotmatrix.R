#Day 4 Assignment 2

dats <- read.csv("studentmarks.csv",header = TRUE, sep = ",")

pairs(~nocourses+studytime+Marks+Grade, data = dats,
      main = "Scatterplot matrix",
      # col = "red",
      # lwd = 0.2
      cex = 0.5
)