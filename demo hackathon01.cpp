#include<stdio.h>
int main(){
	int i;
	int sum_chan = 0;
       int min, max;
       int sum_nguyento;
       int index;
       int lua_chon;
       int size;
       int arr[100], n = 0;
       int arry[50], m = 0;
       while (1) {
       	printf("     MENU     \n");
       	printf("1.Nhap so phan tu can nhap va gia tri cac phan tu\n");
       	printf("2. In ra cac phan tu dang quan li\n");
       	printf("3. In ra gia tri lon nhat cua mang \n");
       	printf("4. In ra cac phan tu la so nguyen to trong mang \n");
       	printf("5. them mot phan tu vao trong mang\n");
       	printf("6. xoa phan tu trong mang \n");
       	printf("7. su dung selection sort de sap xep mang theo thu tu tang dan\n");
       	printf("8. su dung linear search de tim kiem phan tu va in ra vi tri index cua phan tu do\n");
		printf("9. Thoat\n");
       	printf("\n");
       	printf("\n");
       	printf("Lua chon cua ban la: ");
       	scanf("%d", &lua_chon);
       	switch(lua_chon){
       		case 1:
       			printf("kich thuoc cua mang ma ban mong muon la: \n");
       			scanf("%d", &size);
       			for(i = 0; i < size; i++){
       				printf("gia tri number[%d] = \n", i + 1);
       				scanf("%d", &arr[i]);
				   }
				   break;
			case 2:{
					printf("phan tu trong mang la : \n");
				    for (int i=0; i<n ;i++) {
				    	printf("%d \n",arr[i]);
				    
					}
				}
				break;
			case 3: {
				void findmax(int arr[],int n){
					int max = arr[0];
					for ( int[i]>max);
					    max= arr[i];
					}
					printf("Gia tri lon nhat la:%d \n",max);
				}
				break;
			case 4: {
				void in cac so nguyen to( int arr[],int n) {
					printf("cac so nguyen to trong mang la: \n");
					for (int i = 0,i<n;i++) {
						if(in cac so nguyen to(arr[i])) {
							printf("%d \n ",arr[i]);
						}
				}
				break;
			case 5: {
				void them phan tu ( int arr[],int*n) {
					int phan_tu_moi;
					scan("%d",&phan_tu_moi);
					arr[*n] = phan_tu_moi;
					(*n)++;
					printf("phan tu can them trong mang la: \n");
						}
				}
				break;
			case 6:{
				void xoa phan tu ( int arr[],int*n) {
					int index;
					scanf("%d",&index);
					printf("nhap vao vi tri can xoa them trong mang la: \n");
					if(index<0, index >= *n) {
						printf(vi tri ko hop le trong menu \n);
					} else {
						for (int i = index ; i< (*n)-1;i++) {
							arr[i] = arr[i+1];
						}
				}
				break;
			case 7:{
				void selection(int arr[], int i) {
					for( int i = 0;i<n-1; i++) {
						int minIndex = i;
						for( int j = i +1;j<n;j++) {
							if (arr[j]< arr[minIndex]) {
								minIndex = j;
							}
						}
						int temp = arr[minIndex];
						arr[minIndex] = arr[i];
						arr[i]= temp;
					}
					printf("mang sau khi dc sap xep trong menu la :\n");
				}
				break;
			case 8:{
					void linearSearch(int arr[], int n) {
						int key;
						printf("Nhap phan tu can tim: \n");
						scanf("%d",&key);
						int index = linearSearch(arr, n ,key);
					    for( int i = 0;i<n; i++) {
							if (arr[i] == key) {
								printf("phan tu o %d vi tri %d \n",key ,i );
							}else {
					          printf("phan tu khong dc tim thay %d\n",key);
				}
				break;
			} case 9:
				printf("thoat chuong trinh \n");
				break ;
			default :
				printf(" vui long thu lai, lua chon khong dung \n");
		}
	} while ( choice ! = 9);
	return 0;
}
			
					
					
				
					
					
				
					
					
					
				
				
	
