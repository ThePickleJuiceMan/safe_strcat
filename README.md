# safe_strcat
Function safe_strcat concatenates two strings using snprintf to prevent buffer overflow in strcat. This is opposest to strncat which requires the length
anyway, so this function will calculate the length of s1 + s2 and add one for the null terminating character. Handles NULL strings.
