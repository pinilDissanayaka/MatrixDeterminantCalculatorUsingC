#include<stdio.h>

int main(){
	while(1){
    	int rows,columns,i,j;
    	double det,b,c,d,e;
        printf("Enter number of rows :");
    	scanf("%d",&rows);
    	printf("Enter number of columns :");
    	scanf("%d",&columns);
    	double a[rows][columns];

    	for(i=0;i<rows;i++){
        	for(j=0;j<columns;j++){
            	printf("Enter (%d %d) value :",i+1,j+1);
            	scanf("%lf",&a[i][j]);
        	}
    	}

    	printf("A =");

    	for(i=0;i<rows;i++){
        	for(j=0;j<columns;j++){
            	printf("\t%0.3lf\t",a[i][j]);
        	}
        	printf("\n");
    	}
    	printf("\n");

    	if(rows==1 && columns ==1){
        	det=a[0][0];
        	printf("det(A) = %0.3lf\n",det);
    	}
    	else if(rows==2 && columns==2){
        	det=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
        	printf("det(A) = %0.3lf\n",det);
    	}
    	else if(rows==3 && columns==3){
        	b=a[0][0]*((a[1][1]*a[2][2])-(a[1][2]*a[2][1]));
       		c=a[0][1]*((a[1][0]*a[2][2])-(a[1][2]*a[2][0]));
        	d=a[0][2]*((a[1][0]*a[2][1])-(a[1][1]*a[2][0]));
        	det=b-c+d;
        	printf("det(A) = %0.3lf\n",det);
    	}
    	else if(rows==4 && columns==4){
        	b=a[0][0]*(a[1][1]*((a[2][2]*a[3][3])-(a[2][3]*a[3][2]))-a[1][2]*((a[2][1]*a[3][3])-(a[2][3]*a[3][1]))+a[1][3]*((a[2][1]*a[3][2])-(a[2][2]*a[3][1])));
        	c=a[0][1]*(a[1][0]*((a[2][2]*a[3][3])-(a[2][3]*a[3][2]))-a[1][2]*((a[2][0]*a[3][3])-(a[2][3]*a[3][0]))+a[1][3]*((a[2][0]*a[3][2])-(a[2][2]*a[3][0])));
        	d=a[0][2]*(a[1][0]*((a[2][1]*a[3][3])-(a[3][1]*a[2][3]))-a[1][1]*((a[2][0]*a[3][3])-(a[2][3]*a[3][0]))+a[1][3]*((a[2][0]*a[3][1])-(a[2][1]*a[3][0])));
        	e=a[0][3]*(a[1][0]*((a[2][1]*a[3][2])-(a[3][1]*a[2][2]))-a[1][1]*((a[2][0]*a[3][2])-(a[2][2]*a[3][0]))+a[1][2]*((a[2][0]*a[3][1])-(a[2][1]*a[3][0])));
			det=b-c+d-e;
			printf("det(A) = %0.3lf\n",det);
    	}
    	else{
    		printf("Invalid input!!\n");
		}
        printf("\nPress Any Key To Continue...........");
    	getch();
    	printf("\n\n");

	}
    return 0;

}
