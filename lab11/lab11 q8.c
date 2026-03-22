//You are transporting some boxes through a tunnel, where each box is a parallelepiped, and is
//characterized by its length, width and height.
//The height of the tunnel is 41 feet, and the width can be assumed to be infinite. A box can be carried
//through the tunnel only if its height is strictly less than the tunnel's height. Find the volume of each box
//that can be successfully transported to the other end of the tunnel. Note: Boxes cannot be rotated.

//Sample Input 0
//4
//5 5 5
//1 2 40
//10 5 41
//7 2 42

//Sample Output 0
//125
//80

//Explanation: The first box is low, only 5 feet tall, so it can pass through the tunnel and its volume is
//5*5*5=125. The second box is sufficiently low, its volume is 1*2*40=80. The third box is exactly 41
//feet tall so it cannot pass. The same can be said about the fourth box.
//Note: Only use structs for this question


#include <stdio.h>
#include <stdlib.h>

struct boxes{
	int length;
	int width;
	int height;
};


int main(){
	int N;
	printf("How many boxes you want to transport?\n");
	scanf("%d", &N);
	
	struct boxes* box = (struct boxes*)calloc(N, sizeof(struct boxes));
	
	int tun_height = 41;
	
	printf("Enter length, width and height\n");
	for(int i = 0; i < N; i++){
		scanf("%d  %d  %d", &(box+i)->length, &(box+i)->width, &(box+i)->height);
		printf("\n");
	}
	
	for(int i = 0; i < N; i++){
		if((box+i)->height < tun_height){
			printf("%d\n", (box+i)->length * (box+i)->width * (box+i)->height);
		}
	}
	
	return 0;
}