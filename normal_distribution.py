
import numpy as np

with open('normal_1000.txt', 'w+') as fp:
	for n in range(1,1001):
		fp.write(str(np.divide(1.0,n)))
		fp.write('\n')


