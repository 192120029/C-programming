#include <stdio.h>
int main() {
	char name[50];
	int rollnumber,i,n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	FILE *fptr;
	fptr=(fopen("C:\\student.txt","w"));
	if(fptr==NULL) {
		printf("Error!");
	}
	for (i=0;i<n;++i) {
		printf("For student%d\nEnter name: ",i+1);
		scanf("%s",name);
		printf("Enter rollnumber: ");
		scanf("%d",&rollnumber);
		fprintf(fptr,"\nName: %s \nrollnumber=%d \n",name,rollnumber);
	}
	fclose(fptr);
	return 0;
}
