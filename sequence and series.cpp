#include<math.h>
#include <stdio.h>


main(){
	int a[200],n;
	
	printf("how many terms are there in sequence:");
	scanf("%d",&n);
	//findings no. of terms in sereis
	printf("write the sequence numbers:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
	int sum,num,joe,boe,bo=0,j;
	//common term for airthmetic series
	sum=a[1]-a[0];
	num=a[2]-a[1];
	//common ratio for geometric series
	joe=a[1]/a[0];
	boe=a[2]/a[1];
	
if(sum==num){
	printf("it's airthmetic series\n");
	printf("enter \n 1 for sum \n 2 for any term number");
	scanf("%d",&j);
	switch(j){
		case 1:
			for(int i=0;i<n;i++){
		bo=bo+a[i];
	}
	printf("sum of the sequence is %d",bo);
	break;
	case 2:
		int r,lol;
		printf("which term do you want \n");
		scanf("%d",&r);
		
		lol=a[0]+(r-1)*num;
		printf("%d term is %d",r,lol);
	
	}
	
	}
	
else if(joe=boe){
	printf("it's a GEOMETRIC series\n");
	printf("enter \n1 for sum\n 2 for any term number");
	scanf("%d",&j);
	switch(j){
		case 1:
		for(int i=0;i<n;i++){
		bo=bo+a[i];
	}
	printf("sum of the sequence is %d",bo);
	break;
	case 2:
		int q,bol=0,ko;
		printf("which term do you want \n");
		scanf("%d",&q);
		
		bol=a[0]*pow(joe,q-1);
		printf("%d term is %d",q,bol);
		break;
		
}
}
else{
printf("not found error:");
}
	
	
	
	
	
	
}
