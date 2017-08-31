#define X(x) if(*v[i]==*#x) {s[p-1]x##=s[p]; continue;}
p, i, s[];
main(c,  v) char** v; {
  while (++i<c) {
    --p;
    X(+)
    X(-)
    X(*)
    X(/)
    s[++p] = atoi(v[i]);
    p++;
}

  printf("%d", s[p-1]);
}