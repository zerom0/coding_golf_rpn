#define X(x) **v==*#x ? *(p-1)x##=*--p :

*p, s[];

main(c,  v) char** v; {
  p=s;
  while (++v, --c)
    X(+)
    X(-)
    X(*)
    X(/)
    (*p++ = atoi(*v));

  printf("%d", *--p);
}