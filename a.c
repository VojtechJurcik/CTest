int* a = new int;
for (int i = 0; i < 10000; i++)
{
    int* b = a; // we copy the address held by a
    delete b; // uh oh we call delete on that same address again
    b = new int; // put new memory in b, this does nothing to a
} // leak here as b goes out of scope and we no longer have the address it held

