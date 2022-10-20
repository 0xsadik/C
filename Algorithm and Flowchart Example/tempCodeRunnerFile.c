int a, b, c, s, area;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    s = (a + b + c) / 2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Triangle: %d\n", area);