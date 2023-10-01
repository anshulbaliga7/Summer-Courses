#Assignment 1
{
  name=readline("Enter your name:")
  age=readline("Enter your age:")
  college=readline("Enter your college:")
  m1=readline("Enter marks one:")
  m2=readline("Enter marks two:")
  m3=readline("Enter marks three:")
}
m11=as.integer(m1) #marksone
m12=as.integer(m2) #markstwo
m13=as.integer(m3) #marksthree
tm=m11+m12+m13 #total marks
atm=tm/3 #average marks
print(paste(name,"aged",age,"studying in",college,"with marks in subject one",m1,"subject two",m2,"and subject three",m3,".","Total marks scored is:",tm,"and average marks scored is:",atm))