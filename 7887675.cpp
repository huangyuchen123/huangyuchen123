InitList(&L)
InsertList(L, i, &e);
DispList(&L)
DestroyList(&L)
SqList *L;
	InitList(L);
	//�����ʼ����	
	//----------------------�벹�� 
	int a[]={1,2,3,4,5,6};
	InsertList(L, a, 6);
	for(int i=0; i<6; i++)
	{
		L->elem[i] = a[i];
		L->length++;
	}
	DispList(L);	
	DestroyList(L);
