#matrix

m1 <- matrix(c(1,2,3,4,5,6), nrow = 3, ncol = 2)

m2 <- matrix(c(1,2,3,4,5,6), nrow = 3, ncol = 2)

m7=m1+m2
m2[1,3]
m2[2,]
m2[,2]

df1 <- data.frame(
  col1=c(1,2,3),
  col2=c(4,5,6)
)
df2 <- data.frame(
  c(7,8,9)
)
df3 <- rbind(df1,df2)

merge(x=df1, y=df2)[]

df3






