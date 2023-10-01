csv_data <- read.csv("studentmarks.csv")
print(is.data.frame(csv_data))

max_marks <- max(csv_data$Marks)
print(max_marks)

deats <- subset(csv_data,Marks == max(Marks))
print(deats)

deats1 <- subset(csv_data, studytime == 4.508 & Grade == 10)
rownames(deats1)
print(deats1)