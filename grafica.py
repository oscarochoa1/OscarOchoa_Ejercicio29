import numpy as np
import matplotlib.pyplot as plt


data = np.loadtxt("dacalor.dat")
plt.plot(data)
plt.savefig("imagen.png")