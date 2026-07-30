import numpy as nm
from scipy import stats
import statistics
print("I am a python programming language")
print("I am a easiest one")
print("we use this language like writing english language")
data=[1,2,3,4,5,6,6,6]
# mean=nm.mean(data)
# median=nm.median(data)
# mode=stats.mode(data)
mean=statistics.mean(data)
median=statistics.median(data)
mode=statistics.mode(data)
print("Mean:",mean)
print("Median:",median)
print("mode:",mode)
v1=[1,2,3,4,5]
v2=[8,5,6,4,5]
s=[]
p=[]
print(v1)
print(v2)
for i in range(len(v1)):
    s.append(v1[i]+v2[i])
for j in range(len(v2)):
    p.append(v1[i]*v2[i])
print("sum of two vector:",s)
print("product of two vector:",p)
