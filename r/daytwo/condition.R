#if statement

# a <- 2
# b <- 3
# 
# if (a>b) {
#   print(paste(a,"is greater than",b))
#   
# }else{
#   print(paste(b,"is greater than",a))
#   
# }

#switch statement


x = switch("a",
           a="hey",
           b="world"
           )
print(x)

#for statement

for(i in sort(runif(10))){
  print(i)
}
  

