//directed graph using adjacency matrix
#include<stdio.h>
#define V 5
// initilizating zero to each cell
void init(int arr[V][V]){
	int i,j;
	for(i=0;i<V;i++){
		for(j=0;j<V;j++){
			arr[i][j]=0;
		}
	}	
}
// for adding egde
void addEdge(int arr[V][V],int src,int dest){
	arr[src][dest]=1;
}
// check weather a edge is exited or not 
void checkEdge(int arr[V][V],int src,int dest){
	if(arr[src][dest]==1){
		printf("Edge is existed in between %d and %d\n",src,dest);
	}
	else{
		printf("Edge is not existed in between %d and %d\n",src,dest);

	}
}
// for display matrix 
void displayMatrix(int arr[V][V]){
	int i,j;
	for(i=0;i<V;i++){
		for(j=0;j<V;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
// remove edge
void removeEdge(int arr[V][V],int src,int dest){
	arr[src][dest]=0;
}
int main()
{
	int adjMatrix[V][V];
	
	init(adjMatrix);
	
	addEdge(adjMatrix,0,1);
	addEdge(adjMatrix,0,3);
	addEdge(adjMatrix,1,3);
	addEdge(adjMatrix,1,4);
	addEdge(adjMatrix,2,0);
	addEdge(adjMatrix,2,3);
	addEdge(adjMatrix,3,4);
	
	displayMatrix(adjMatrix);

	checkEdge(adjMatrix,3,4);
	checkEdge(adjMatrix,1,0);
	
	removeEdge(adjMatrix,3,4);
	checkEdge(adjMatrix,3,4);
	
	printf("after remove one edge\n");
	displayMatrix(adjMatrix);
	
	return 0;
}
