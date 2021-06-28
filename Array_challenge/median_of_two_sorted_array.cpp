
#include <iostream>
using namespace std;

    double findMedianSortedArrays(int nums1[], int nums2[]) {
        int i=0,j=0,k=0,n=2,m=2;
        int num[(n+m)];
        while(i < n && j < m)
        {
            if(nums1[i]<nums2[j])
            {
                num[k] = nums1[i];
                i++;
                k++;
            }
            else if(nums2[j]<nums1[i])
            {
                num[k] = nums2[j];
                j++;
                k++;
            }
            else if(nums1[i]==nums2[j])
            {
                num[k] = nums2[i];
                i++;
                j++;
                k++;
            }
        }
        if(i==n && j!=m)
        {
            while(j<m)
            {
                num[k]=nums2[j];
                k++;
                j++;
            }
        }
        if(j==m && i!=n)
        {
            while(i<n)
            {
                num[k]=nums1[i];
                k++;
                i++;
            }
        }
        int median;
        if(k%2==0)
        {
            median = num[k/2]+num[(k/2)+1];
        }
        else
        {
            median = num[k/2];
        }
        return median;
    }

    int main()
    {
        int a[2] = {1,2};
        int b[2] = {3,4};
        cout<<findMedianSortedArrays(a,b);
        return 0;
    }