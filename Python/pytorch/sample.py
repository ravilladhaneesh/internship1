import torch
import numpy as np


data = [[1,2,3,4,5],[1,5,6,8,9]]
v_data = [1,2,3]
s_data = 5


np_arr = np.array(data)
py_arr = torch.tensor(data)


print(np_arr)
print(py_arr)
print()


from_np_data = torch.from_numpy(np_arr)
print(from_np_data)



print()
print(torch.tensor(s_data))
