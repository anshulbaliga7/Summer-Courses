#pie
library(plotrix)
x = c(30,25,55,60,20)
y = c("Phy","Chem","Maths","cs","bio")
z=c("lightblue","green","red","orange","yellow")

#png(file="piechart.png")
# pie(x,labels = y, init.angle = 10, col = z, main = "Pie chart") #col for colour

pie3D(x,
      labels = y, 
      col = z, 
      main = "Pie chart", 
      radius = 0.94,
      height = 0.15,
      explode = 0.035,
      theta = 1
      )
legend("bottomright", y, fill = z, cex = 0.7)
#dev.off()