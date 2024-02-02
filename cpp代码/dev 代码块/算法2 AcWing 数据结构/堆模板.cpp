//如何手写一个堆?
// 1.插入一个数            heap[++size] = x; up(size);
// 2.求集合当中的最小值    heap[1];
// 3.删除最小值            heap[1] = heap[size]; size--; down(1);
// 4.删除任意一个元素 	   heap[k] = heap[size]; size--; down(k); up(k);
// 5.修改任意一个元素      heap[k] = x; down(k); up(k);
//
//

void heap_swap(int a,int b){
	swap(ph[hp[a]],ph[hp[b]]);
	swap(hp[a],hp[b]);
	swap(h[a],h[b]);
}

// 向下调整 大的元素放下面

void down(int i){
	int t = i;
	// i与左右节点最小值交换(如果存在的话)
	if(i*2 <= len && h[i*2] < h[t]) t = i * 2;
	if(i*2 + 1 <= len && h[i*2+1] < h[t]) t = i*2+1;
	if(i!=t){
		heap_swap(i,t);
		down(t);
	}
} 

// 向上调整 小的元素放上面

void up(int i){
	while(i/2 && h[i] < h[i/2]){
		heap_swap(i,i/2);
		i /= 2;
	}
} 

//初始化堆 O(n)的复杂度
for(int i=n/2;i;i--) down(i); 
//
//
//
//
//
//
// 
