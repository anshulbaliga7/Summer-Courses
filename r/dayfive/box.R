#boxlpot

boxplot(Chick ~ Diet,
        data = ChickWeight,
        xlab = "Chicks",
        ylab = "weight",
        main = "Boxplot",
        col = "blue",
        border = "red",
        # notch = TRUE
        horiz = TRUE
        )

#violin plot
data("mtcars")
library(vioplot)
x1 <- mtcars$mpg[mtcars$cyl==4]
x2 <- mtcars$mpg[mtcars$cyl==6]
x3 <- mtcars$mpg[mtcars$cyl==8]
vioplot(x1,x2,x3, names = c("163 weight","167 weight","227 weight"), main = "vio")
# title("Violin plot")



#bag plot
library(aplpack)
bagplot(drat, wt, data = mtcars,
        xlab = "Car weight",
        ylab = "Miles per Gallon",
        main = "2d boxplot extension")