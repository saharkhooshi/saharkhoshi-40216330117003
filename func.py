def daray2va5(i):
  while i!=0:
    k=i%10
    if k!=2 and k!=5:
      return False
    i//=10
    return True

def function2(n):
  for i in range(n):
    k=daray2va5(i)
    if k:
      print(i)
  return print("not find")