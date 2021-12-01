//写一个代码，要求在数组中找到某个数(arr为有序数组)            //改进：折半查找算法，二分查找算法  查找次数；最多log2n,n次方，n为元素个数                       
#include<stdio.h>                                              // 1  2  3  4  5  6  7  8  9  10   元素
int main()                                                     // 0  1  2  3  4  5  6  7  8   9   下标
{                                                              //元素下标除以2，找出中间元素，(0+9)/2=4%1,因为为整型变量，强行取整，
	int arr[]={1,2,3,4,5,6,7,8,9,10};                          //为4，下标4对于元素为5，5<7,所以在5的右边再用下标找中间元素，(4+9)/2=7，下标7对应的元素                   
	int k=7;                                                   //为8,7<8,所以在8的左边找，所以往下标5的右边和下标7的左边找中间元素
	int i=0;                                                   //(5+7)/2=6,下标6对应的元素为7
	int sz=sizeof(arr)/sizeof(arr[0]);      //sz为元素个数     //利用二分法求可以减少很多步骤，算法更简洁，对于有序数列，就不需要
    for(i=0;i<sz;i++)                                          //从123456......第一个数开始找起
	{                                                          //#include<stdio.h>
		if(k==arr[i])                                          //int main()
		{                                                      //{
			printf("找到了，下标是：%d\n",i);                  //   int arr[]={1,2,3,4,5,6,7,8,9,10};  
		    break;                                             //   int k=7;
		}                                                      //   int sz=siaeof(arr)/sizeof(arr[0]);   //元素个数
	    if(i==sz)                                              //   int left=0;       //左下标
		{                                                      //   int right=sz-1;      //右下标 sz表示元素个数，第10个元素的下标为9
	    	printf("没找到\n");                                //   while(left<=right)
		}                                                      //   {
	}                                                          //      int mid=(left+right)/2;
	return 0;                                                  //      if(arr[mid])>k)
	                                                           //         {
}                                                              //             right=mid-1;  //mid-1因为mid不是我们要找的数，可以排除，往左再进一个数
                                                               //          }
                                                               //        else if(arr[mid]<k)
                                                               //          {
                                                               //             left=mid+1;   //mid-1因为mid不是我们要找的数，可以往右进一个
                                                               //          }
                                                               //        else
                                                               //          {
                                                               //             printf("找到了，下标是：%d\n",mid);
                                                               //             break;
                                                               //          }
                                                               //   }   
                                                               //       if(left>right)
                                                               //          {
                                                               //             printf("找不到\n");
                                                               //          }
                                                               //   return 0;
                                                               //  }
                                                               