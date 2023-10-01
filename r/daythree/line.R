#functions

my_function <- function(){
  print("Hello world!")
}

my_function()

#nested function
nested_function <- function(x,y){
  a <-x + y
  return(a)
}
nested_function(nested_function(1,1), nested_function(2,2))

#recursive function
recursive_function <- function(x){
  if(x <= 1) {
    return(1)
  } else {
    return(x * recursive_function(x-1))
  }
}
recursive_function(5)