t=int(input())
while(True):
	n=int(input())
	k=int(input())
	
	no=k%n
	nz=n-no
	
	if(n%2==0):
		if(no==n/2):
			print(n-1)
		else:
			b=min(no,nz)
			print(2*b)
	else:
		b=min(no,nz)
		print(2*b)
		
	t-=1
	if(t==0):
		break
