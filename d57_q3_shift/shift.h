void shift(int k) {
	// TODO: Add your code here
	int s = mSize;
	k = (k % s + s) % s;
	if (k == 0) return;

	node *l1 = mHeader->next, *l2 = mHeader->next, *r2 = mHeader->prev;
	for (int i = 0; i < k; i++) l2 = l2->next;
	node *r1 = l2->prev;

	mHeader->next = l2;
	l2->prev = mHeader;
	r2->next = l1;
	l1->prev = r2;
	r1->next = mHeader;
	mHeader->prev = r1;
}
