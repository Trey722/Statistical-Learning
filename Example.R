library(reticulate)
source_python("~/Desktop/Statistical-Learning/Example.py")

parameters <- c(lin_regress_one(c(1, 2, 3, 4), c(1, 2, 3, 4)))
parameters <- as.numeric(parameters)



