void splitList(list<T>& list1, list<T>& list2) {
    // Add your code here
    if (mSize == 0) return;

    auto l = begin();
    for (int i = 0; i < (mSize + 1) / 2; i++) l++;

    auto r = l;
    l--;

    list1.mHeader->prev->next = begin().ptr;
    begin().ptr->prev = list1.mHeader->prev;
    list1.mHeader->prev = l.ptr;
    l.ptr->next = list1.mHeader;
    list1.mSize += (mSize + 1) / 2;

    list2.mHeader->prev->next = r.ptr;
    r.ptr->prev = list2.mHeader->prev;
    list2.mHeader->prev = end().ptr->prev;
    end().ptr->prev->next = list2.mHeader;
    list2.mSize += mSize / 2;

    mHeader->next = mHeader;
    mHeader->prev = mHeader;
    mSize = 0;
}
