#Consider the plantGrowth inbuilt dataset


#i) Create a variable "y" and attach to it the output attribute of the "plantGrowth" dataset.
data("PlantGrowth")
dataset<-PlantGrowth


#ii) Create a barplot to breakdown your output attribute.
x <- dataset[,1:2]
y <- dataset[,30]
barplot(y)


#iii) Create a density plot matrix for each attribute by class value
ggplot(PlantGrowth, aes(PlantGrowth$weight)) + geom_density(aes(data = PlantGrowth$weight, fill = PlantGrowth$group), position = 'identity', alpha = 0.5) + labs(x = 'Weight', y = 'Density') + scale_fill_discrete(name = 'Group') + scale_x_continuous(limits = c(2, 8))