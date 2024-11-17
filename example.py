import numpy as np

def lin_regress_one(x, y):
    x = np.array(x)
    y = np.array(y)
    
    # Calc
    x_mean = np.mean(x)
    y_mean = np.mean(y)
    
   
    numerator = np.sum((x - x_mean) * (y - y_mean))
    denominator = np.sum((x - x_mean) ** 2)
    beta_1 = numerator / denominator
    
   
    beta_0 = y_mean - beta_1 * x_mean
    
    return [beta_0, beta_1]
  
  
