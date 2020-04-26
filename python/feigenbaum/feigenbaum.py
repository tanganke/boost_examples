from libfeigenbaum import f_r_x_n,f_r_x
import time

start=time.process_time()
print('dynamic lib:',f_r_x_n(3.2,0.5,100_000_000))
print(time.process_time()-start)

def f_32_x(x):
    return 3.2*x*(1-x)

x=0.5
start=time.process_time()
for _ in range(100_000_000):
    x=f_32_x(x)
print('python:',x)
print(time.process_time()-start)