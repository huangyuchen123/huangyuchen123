InitList(&L)
InsertList(L, i, &e);
DispList(&L)
DestroyList(&L)
SqList *L;
	InitList(L);
	//插入初始数据	
	//----------------------请补充 
	int a[]={1,2,3,4,5,6};
	InsertList(L, a, 6);
	for(int i=0; i<6; i++)
	{
		L->elem[i] = a[i];
		L->length++;
	}
	DispList(L);	
	DestroyList(L);
