x = matrix(c(5,25,10,15,28,10,25,15,20), nrow=3 , ncol=3)
y = c("Phy","Chem","Math")
z = c("red","orange","blue")
barplot(x,
        names.arg = y, 
        xlab = "Subjects", 
        ylab = "Marks", 
        main = "Bar graph", 
        col = z,
        # horiz = TRUE
  
)