  //ordenamiento de arreglos
  #include<stdio.h>
  #include<stdlib.h>
  #include<string.h>
  main(){
  	float t, a[]={10.0,8.0,5.5,3.4,3.2,2.5,2.2,1.5,5.3,7.5,8.9,9.1,4.2,10.5,11.0,21.8,20.0,1.8,3.0,27.6};
  	int i,j,n;
  	n=sizeof(a)/sizeof(float);
  	for(i=1;i<n;i++){
  		j=i-1;
  		t=a[i];
  		while(j>=0 && t<a[j]){
  			a[j+1]=a[j];
  			j=j-1;		  
		  	}
		  a[j+1]=t;
	}
	  for(i=0;i<n;i++){
	  	printf("%d %10.2f \n",i,a[i]);
	  }
	  return 0;
  }