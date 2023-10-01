#Assignment 3
{
  var1 = readline("Enter 1st number of matrix: ");
  var2 = readline("Enter 2nd number of matrix: ");
  var3 = readline("Enter 3rd number of matrix: ");
  var4 = readline("Enter 4th number of matrix: ");
  var5 = readline("Enter 1st number of matrix: ");
  var6 = readline("Enter 2nd number of matrix: ");
  var7 = readline("Enter 3rd number of matrix: ");
  var8 = readline("Enter 4th number of matrix: ");
}

#converting to integer
var11=as.integer(var1)
var12=as.integer(var2)
var13=as.integer(var3)
var14=as.integer(var4)
var15=as.integer(var5)
var16=as.integer(var6)
var17=as.integer(var7)
var18=as.integer(var8)

#converting to matrices
var5 = matrix(c(var11,var12,var13,var14),nrow = 2, ncol = 2)
var6 = matrix(c(var15,var16,var17,var18),nrow = 2, ncol = 2)

#operations on matrices
var7=var5-var6
var8=var5 + var6
var9=var5 %% var6
var10=var5/var6
var11=var5 %/% var6

#printing matrices
print(var5)
print(var6)
print(var7)
print(var8)
print(var9)
print(var10)
print(var11)