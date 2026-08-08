import statistics
print("I am a python programming language")
print("I am used for any type of technology")
print("hellow")
print("world")
print("I am a easiest one")

print("we use this language like writing english language")
# =======
print("we use this language like writing english language")
data=[1,2,3,4,5,6,6,6]
# mean=nm.mean(data)
# median=nm.median(data)
# mode=stats.mode(data)
q1=data[len(data)//4]
q3=data[(3*len(data))//4]
q2=q3-q1
mean=statistics.mean(data)
median=statistics.median(data)
mode=statistics.mode(data)
std=statistics.stdev(data)
variance=statistics.variance(data)
cf_var=(variance*100)/mean
print("Mean:",mean)
print("Median:",median)
print("mode:",mode)
print("std:",std)
print("variance:",variance)
print("Quartile:",q2)
print("coefficient of variance:",cf_var)
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
