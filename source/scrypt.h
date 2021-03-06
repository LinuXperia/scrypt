int scrypt(const uint8_t*, size_t, const uint8_t*, size_t, uint64_t, uint32_t, uint32_t, uint8_t*, size_t);
uint32_t scrypt_set_defaults (uint8_t**, size_t*, size_t*, uint64_t*, uint32_t*, uint32_t*);
uint8_t scrypt_to_string_base91 (uint8_t*, size_t, uint8_t*, size_t, uint64_t, uint32_t, uint32_t, size_t, uint8_t**, size_t*);
uint32_t scrypt_parse_string_base91 (uint8_t*, size_t, uint8_t**, size_t*, uint8_t**, size_t*, uint64_t*, uint32_t*, uint32_t*);
uint8_t scrypt_to_string_crypt (uint8_t*, size_t, uint8_t*, size_t, uint64_t, uint32_t, uint32_t, uint8_t**, size_t*);
uint32_t scrypt_parse_string_crypt (const uint8_t*, size_t, uint8_t**, size_t*, uint64_t*, uint32_t*, uint32_t*);
uint8_t* scrypt_strerror (uint32_t);
