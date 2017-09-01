#define X(x) if(**v==*#x) *(p-1)x##=*--p; else

*p, s[];

main(c,  v) char** v; {
  p=s;
  while (++v, --c)
    X(+)
    X(-)
    X(*)
    X(/)
    *p++ = atoi(*v);

  printf("%d", *--p);
}