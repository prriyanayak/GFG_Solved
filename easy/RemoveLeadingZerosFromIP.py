def removeZeros(ip): 
    new_ip = ".".join([str(int(i)) for i in ip.split(".")])   
    return new_ip ; 

t = int(input())
for i in range(t):
    ip = input()
    print(removeZeros(ip)) 
  
