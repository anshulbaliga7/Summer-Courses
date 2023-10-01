#bar graph


ds2 = read.csv("data1.csv", header = TRUE, sep = ",")
z=c("lightblue","green","red","orange","black","white","gold","yellow","brown","pink")
plot(ds2$marks,
        names.arg = ds2$name, 
        xlab = "Names", 
        ylab = "Marks", 
        main = "Scores", 
        col = z,
        density = 10,
        width = c(1,2,3,4,5),
        # horiz = TRUE
        )