#libraries for XML

library("XML")
library("methods")


#display all data
results <- xmlParse("xml_dats.xml")
# xml_data <- xmlToList(results)
# print(xml_data)
root_node <- xmlRoot(results)
print(root_node[9])

print(root_node[[9]][[1]])
print(root_node[[1]][[9]])

#xml to data frame

datafrem <- xmlToDataFrame("xml_dats.xml")
print(datafrem)