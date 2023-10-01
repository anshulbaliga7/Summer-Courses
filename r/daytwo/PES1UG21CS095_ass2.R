#Assignment 2
{
  var1 = readline("Enter 1st number : ");
  var2 = readline("Enter 2nd number : ");
  var3 = readline("Enter 3rd number : ");
  var4 = readline("Enter 4th number : ");
}
#converting to integer
var11=as.integer(var1)
var12=as.integer(var2)
var13=as.integer(var3)
var14=as.integer(var4)

#converting to arrays
var5 = c(var11,var12)
var6 = c(var13,var14)

#different operations
var7=var5-var6
var8=var5 + var6
var9=var5 %% var6
var10=var5/var6
var11=var5 %/% var6

#printing array
print(var5)
print(var6)
print(paste("Subtraction is:",var7))
print(paste("Addition is:",var8))
print(paste("Remainder is:",var9))
print(paste("Division is:",var10))
print(paste("Integer division is:",var11))