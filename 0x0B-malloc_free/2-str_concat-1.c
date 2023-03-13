char *str_concat(char *s1, char *s2) {
    if (s1 == NULL || s2 == NULL) {
        return NULL;
    }

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    char *ptr = malloc(sizeof(char) * (len1 + len2 + 1));
    if (ptr == NULL) {
        return NULL;
    }

    for (int i = 0; i < len1; i++) {
        ptr[i] = s1[i];
    }

    for (int j = 0; j < len2; j++) {
        ptr[len1 + j] = s2[j];
    }

    ptr[len1 + len2] = '\0';

    return ptr;
}
