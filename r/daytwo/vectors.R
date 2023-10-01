#vectors

v1 = c('a','n','s','h','u','l')
v1
length(v1)
v1[2]
v1[c(2,4)] #c(1,2)
v1[c(-1)]
v1[1]="w"

x = 1.4:14.41

sort(v1)

#repeat something
v2= c(1,2,3)
v3 <- rep(v2, times = c(2,2,2))
v4 <- rep(v2, times=3)
v5 <- seq(from=0, to=-100, by=-10)