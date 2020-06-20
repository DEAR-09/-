#include  <stdio.h>
int main(){
		int a = 1,b = 1;
		for(int i = 1;;i++) {	
			printf("%d %d ",a,b);
			a = a + b;
			b = a + b;
		if(a>=200)
 		break;
 		else if((b>=200)&&(a<200))
 		{printf("%d",a);
 		 break;
		}
		}
	}
