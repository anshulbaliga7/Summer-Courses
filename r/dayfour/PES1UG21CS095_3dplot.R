#Day 4 Assignment 3

datp <- read.csv("studentmarks.csv",header = TRUE, sep = ",")

library(plotly)
plot_ly(data = datp,
        x =~studytime, y =~Marks, z =~nocourses, 
        color =~"gear"
        )