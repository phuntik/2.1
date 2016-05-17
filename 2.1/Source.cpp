void main()
{
	struct A
	{
		int* xp[10];
		int d[5];
		int* k;
	};
	struct B
	{
		A* xt;
		B* r;
	};

	B *h, *p, *t, g[50], *s3, *s4;
	
	//exercise 1
	for (int i = 0;i < 50;i++)
	{
		g[i].xt = new A;
		for (int j = 0;j < 10;j++)
		{
			g[i].xt->xp[j] = new int(1);
		}
		for (int j = 0;j < 5;j++)
		{
			g[i].xt->d[j] = 1;
		}
	}

	//exercise 2
	h = new B[20];
	for (int i = 0;i < 20;i++)
	{
		h->xt = new A[30];
		for (int k = 0;k < 30;k++)
		{
			for (int j = 0;j < 10;j++)
			{
				h[k].xt->xp[j] = new int(1);
			}
			for (int j = 0;j < 5;j++)
			{
				h[k].xt->d[j] = 1;
			}
		}

	}

	//exercise 3
	s3 = new B[100];
	p = s3;
	for (int i = 0;i < 100;i++)
	{
		p->xt = new A;
		p->xt->k = new int[20];
		for (int j = 0;j < 20;j++)
		{
			p->xt->k[j] = 1;
		}
		if (i != 99)
		{
			p->r = new B;
			p = p->r;
		}
		else
		{
			p->r = 0;
		}
	}

	//exercise 4
	s4 = new B[100];
	t = s4;
	for (int i = 0;i < 100;i++)
	{
		t->xt = new A;
		for (int j = 0;j < 10;j++)
		{
			t->xt->xp[j] = new int(1);
		}
		if (i != 99)
		{
			t->r = new B;
			t = t->r;
		}
		else
		{
			t->r = 0;
		}
	}
}