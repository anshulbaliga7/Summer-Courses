#line graph

v <- c(13,22,28,7,31)
w <- c(5,8,33,8,12)
x <- c(3,5,35,9,4)
plot(v, type = "o",
     # xlab = "Number",
     # ylab = "Others",
     #  xlim = c(2,10),
     # ylim = c(5,30)
     col = "blue"
     # lty = 5,
     # lwd = 3
    )

lines(w, type = "o",
      col = "red"
      # lty = 5,
      # lwd = 3
      )

lines(x, type = "o",
      col = "orange"
      # lty = 5,
      # lwd = 3
      )

# ds4 = read.csv("data1.csv", header = TRUE, sep = ",")
# plot(ds4$g1,
#      col = "blue")
# 
# lines(ds4$g2,
#       col = "red",
#       lty = 5,
#       lwd = 3) 
