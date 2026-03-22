#include <stdio.h>

int main ()
{
	float NTS_marks, fsc_marks, obt_marks, total_marks=1100;
	
	printf("Enter the marks of NTS: \n");
	scanf("%f", &NTS_marks);
	printf("Enter the obtained marks of FSC: \n");
	scanf("%f", &obt_marks);
	
	fsc_marks=(obt_marks/total_marks)*100;
	
	if(fsc_marks>70 && NTS_marks>50){
		printf("Selected for Oxford University \n");
	if (NTS_marks>70){
	    printf("Seat allocated in IT \n");
	}
	else if (NTS_marks>60){
	    printf("Seat allocated in Electronics \n");
	}
	else if (NTS_marks>50) {
		printf("Seat allocated in Telecommunication \n");
	}
}
    else if (fsc_marks>40 && NTS_marks>50){
    	printf("Selected for MIT University \n");
    	
    if (fsc_marks>60 && NTS_marks<60){
    	printf("Seat allocated in IT \n");
	}
	else if (fsc_marks>50){
		printf("Seat allocated in Chemical \n");
	}
	else if (fsc_marks>40) {
		printf("Seat allocated in Computer \n");
	}
}
    else {
    	printf("Not eligible for any university");
	}
	return 0;
}