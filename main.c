#define P s[p-1]
main(int c, char** v) {
  int s[9], p=-1;
  for (int i=1; i<c; i++) {
    --p;
    switch(*v[i]) {
      case '+':
        P += s[p];
        break;
      case '-':
        P -= s[p];
        break;
      case '*':
        P *= s[p];
        break;
      case '/':
        P /= s[p];
        break;
      default:
        s[++p] = atoi(v[i]);
        p++;
    }
  }

  printf("%d", P);
}