#Assignment 4 - day 3
library(plotrix)

z=c("lightblue","green","red","orange","black","white","gold","yellow","brown","pink")

png(file="PES1UG21CS095_piechart.png")
ds1 = read.csv("data1.csv", header = TRUE, sep = ",")
pie3D(ds1$marks,
      labels = ds1$name, 
      col = z, 
      main = "Pie chart assignment",
      radius = 0.94,
      height = 0.15,
      explode = 0.035,
      theta = 1
      )

legend("bottomright", ds1$name, fill = z, cex = 0.6)
dev.off()