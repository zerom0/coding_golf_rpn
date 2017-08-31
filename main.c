
main(int c, char** v) {
  int s[9], p=-1;
  for (int i=1; i<c; i++) {
    --p;
    switch(*v[i]) {
      case '+':
        s[p-1] = s[p-1] + s[p];
        break;
      case '-':
        s[p-1] = s[p-1] - s[p];
        break;
      case '*':
        s[p-1] = s[p-1] * s[p];
        break;
      case '/':
        s[p-1] = s[p-1] / s[p];
        break;
      default:
        s[++p] = atoi(v[i]);
        p++;
    }
  }

  printf("%d", s[p-1]);
}