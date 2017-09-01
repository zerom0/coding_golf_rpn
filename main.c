#define X(x) if(*v[i]==*#x) s[p-1]x##=s[--p]; else

p, i, s[];

main(c,  v) char** v; {
  while (++i < c)
    X(+)
    X(-)
    X(*)
    X(/)
    s[p++] = atoi(v[i]);

  printf("%d", s[p-1]);
}