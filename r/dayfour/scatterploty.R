#scatterplot

data <- ChickWeight[,c('Time','Chick')]
plot(x = data$Time,
     y = data$Chick,
     # xlim = c(1,300),
     # ylim = c(1,50),
     xlab = "Time",
     ylab = "Chicks",
     main = "Scatterplot"
     )

#scatterplot matrix
pairs(~weight+Time+Chick+Diet, data = ChickWeight,
      main = "Scatterplot matrix",
      col = "red",
      # lwd = 0.2
      cex = 0.5
      )

#ggplot
install.packages("ggplot2")
library(ggplot2)

#ggplot(data = ChickWeight) + labs(title = "Chick Weight data plot")

ggplot(data = ChickWeight,
       aes(x = Diet, y = weight))+ geom_point() + labs(title = "Chick weight data plot") #geom_line() col = disp

#3D Plot

install.packages("plotly")
library(plotly)
plot_ly(data = ChickWeight,
        x =~Diet, y =~weight, z =~Time, color =~"continent")
