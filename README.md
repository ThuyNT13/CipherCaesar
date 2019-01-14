# Cryptography - Caesar Cipher

practice **C++** and creating **Encryption Algorithms**

initially created on [repl.it](https://repl.it/@ThuyNT13/CipherCaesarcpp)

---

`Ci = (Pi + K) mod 26`

- **C** = *cipher text*
- **P** = *plain text*
- **K** = key int - the number to offset *cipher text* by
- **i** = the *ith* character in the *plain text*, corresponding with *cipher text* index

`mod 26` returns an index within alphabetic range, 0-25 

## ASCII 

Utilizing [**ASCII table's**](http://www.asciitable.com/) mapping of *character* to *decimal code* to convert alphabet to integer, and vice versa.