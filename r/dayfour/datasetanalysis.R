#Dataset Analysis

chick <- ChickWeight
dim(chick)

names(chick)
rownames(chick)

rownames(chick)[(if chick$weight<1000)]
rownames(chick)[which.min(chick$Chick)]

mean(chick$weight)
median(chick$weight)