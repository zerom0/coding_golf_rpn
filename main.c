#define X(x) if(**v==*#x) s[p-1]x##=s[--p]; else

p, s[];

main(c,  v) char** v; {
  while (++v, --c)
    X(+)
    X(-)
    X(*)
    X(/)
    s[p++] = atoi(*v);

  printf("%d", s[p-1]);
}