void swap(int* p1,int* p2)
{
    int t=*p1;
    *p1=*p2;
    *p2=t;
}
void reverse(int* a,int N,int K)
{
    while(N<K)
        swap(&a[N++],&a[K--]);
}
void rotate(int* nums, int numsSize, int k){
    k=k%numsSize;
    reverse(nums,0,numsSize-k-1);
    reverse(nums,numsSize-k,numsSize-1);
    reverse(nums,0,numsSize-1);
}