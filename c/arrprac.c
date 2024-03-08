#include <stdio.h>
int main()
 {
    // question
    // int n;
    // scanf("%d",&n);
    // int arr[n];
    // printf("%d",arr[n+1]=20);



    // int n=5;int arr[n];
    // int sum =0;
    // int arr[] = {1,2,3,4,5};
    // int *ptr = &arr[0];

    // printf("%d",sizeof(arr));
    // printf("%d",arr[4]);

    // for(int i = 0; i < n;i++){
    //     scanf("%d",&arr[i]);
    // }
    //scan array input

    // for(int i=0;i< sizeof(arr) / sizeof(arr[0]);i++){
    //     printf("%d ",arr[i]);
    // }
    //print array output

    // for (int i = 0; i < n; i++) {
    //     printf("%d ", *ptr++);
    // }
    //pointer arry travers

    // for(int i = sizeof(arr) / sizeof(arr[0])-1 ; i >=0 ; i--){
    //     printf("%d ",arr[i]);
    // }
    // reverse array

    //   for(int i = sizeof(arr) / sizeof(arr[0])-1 ; i >=0 ; i--){
    //     sum += arr[i];
    // }
    // printf("%d",sum);
    //sum of the array








    // int arr1[100], fr1[100];
    // int n, i, j, ctr;
	
	
    //    printf("\n\nCount frequency of each element of an array:\n");
    //    printf("------------------------------------------------\n");	

    //    printf("Input the number of elements to be stored in the array :");
    //    scanf("%d",&n);
   
    //    printf("Input %d elements in the array :\n",n);
    //    for(i=0;i<n;i++)
    //         {
	//       printf("element - %d : ",i);
	//       scanf("%d",&arr1[i]);
	// 	  fr1[i] = -1;
	//     }
    // for(i=0; i<n; i++)
    // {
    //     ctr = 1;
    //     for(j=i+1; j<n; j++)
    //     {
    //         if(arr1[i]==arr1[j])
    //         {
    //             ctr++;
    //             fr1[j] = 0;
    //         }
    //     }

    //     if(fr1[i]!=0)
    //     {
    //         fr1[i] = ctr;
    //     }
    // }
    // printf("\nThe frequency of all elements of array : \n");
    // for(i=0; i<n; i++)
    // {
    //     if(fr1[i]!=0)
    //     {
    //         printf("%d occurs %d times\n", arr1[i], fr1[i]);
    //     }
    // }
    //count no of duplicate

    // int x[2][2]={
    //     {1,2},{3,4}
    // };
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<2;j++){
    //         printf("[%d][%d] :%d    ",i,j,x[i][j]);
    //     }
    //     printf("\n");
    // }
    //multidim. array

    // int x[10]={1,2,3,2,2,3,3,4,33,5};
    // int ctr ;
    // for(int i =0;i<10;i++){
    //     ctr=1;
    //     for(int j=0;j<10;j++){
    //         if(x[i] == x[j]){
    //             ctr++;
    //         }
    //     }
    //     if(ctr == 2){
    //         printf("%d ",x[i]);
    //     }
    // }
    // unique in array

//     int arr[10]={1, 10, 20, 1, 25, 1, 10, 30, 25, 1};
//     int dr=0;

//     for (int i = 0; i < 10; i++) {
//       for (int j = i + 1; j < 10; j++) {
//        if (arr[i] == arr[j]) {
//          dr++;
//          printf("%d ",arr[j]);
//          break;
//    }
//    }
//     }
//     printf("%d",dr);

    
    // int arr1[5]={1,2,3,4,5};
    // int arr2[4]={1,2,3,4};
    // int s1,s2,s3,i;
    // s1=sizeof(arr1)/sizeof(arr1[0]);
    // s2=sizeof(arr2)/sizeof(arr2[0]);
    // s3=s1+s2;
    // int arr[s3];
    // for(i=0;i<s1;i++){
    //     arr[i]=arr1[i];
    // }
    //  for(int j=0;j<s2;j++){
    //     arr[i]=arr2[j];
    //     i++;
    // }

    // int sap;
    // for( i=0;i<s3;i++){
    //     for(int j=0;j<s3-1;j++){
    //         if(arr[j]>arr[j+1]){
    //             sap= arr[j];
    //             arr[j]=arr[j+1];
    //             arr[j+1]=sap;

    //         }
    //     }
    // }
    // for( i=0;i<s3;i++){
    //     printf("%d ",arr[i]);
    // }
    //merge + sort

    // int x[]={1,2,3,4,5},odd[5],even[5];
    // int i,j=0,k=0;
    // for(i=0;i<sizeof(x)/sizeof(x[0]);i++){
    //     if(x[i]%2 == 0){
    //         even[j]=x[i];
    //         j++;
    //     }
    //     else{
    //          odd[k]=x[i];
    //         k++;
    //     }
    // }
    // printf("this is even array : \n");
    // for(i =0 ;i<j;i++){
    //     printf("%d ",even[i]);
    // }
    // printf("\nthis is odd array : \n");
    // for(i =0 ;i<k;i++){
    //     printf("%d ",odd[i]);
    // }

    




    // multi dimentional array
    // int dm1[3][3]={
    //     {1,1,1},
    //     {2,2,2},
    //     {3,3,3}
    // };
    
    // int dm2[3][3]={
    //     {1,1,1},
    //     {2,2,2},
    //     {3,3,3}
    // };
    // int dsum[3][3];
    
    // for(int i =0 ;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         dsum[i][j] = dm1[i][j]+dm2[i][j];
    //     }
    //     printf("\n");
    // }
    // sum


    // for(int i =0 ;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         printf("[%d][%d] : %d ",i,j,dsum[i][j]);
    //     }
    //     printf("\n");
    // }
    //             or
    //  for(int i =0 ;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         printf("%d ",dsum[i][j]);
    //     }
    //     printf("\n");
    // }
    // display















    printf("\n");
   return 0;
 }