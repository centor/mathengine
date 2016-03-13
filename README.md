# mathengine

1.**bignum**  shows how to multiply two  numbers using gmp library? ( രണ്ടു വലിയ സംഖ്യകള്‍ ജി. എം. പി. ലൈബ്രററി ഉപയോഗിച്ച്  എങ്ങനെ ഗുണിക്കാം)

## HOW TO COMPILE

## എങ്ങനെ കംമ്പൈല്‍ ചെയ്യാം

**Requirements**

**ആവിശ്യമുള്ളവ**

1. Linux
2. gmp library

**steps**<br>**നിര്‍ദ്ദേശങ്ങള്‍**

1. Download zip
2. Compile

```
 gcc -Wall bignum.c -lgmp -o bignum
```

## HOW TO RUN

## എങ്ങനെ ഈ പ്രോഗ്രാം പ്രവര്‍ത്തിപ്പിയ്ക്കാം

### Examples

1. **bignum**    

```
  ./bignum number_one number_two
```

**Eg.**(**ഒരു ഉദാഹരണം.**)

```
 ./bigmul 100020003000400050002346  45895887233391258875699432122236
A       => 100020003000400050002346  
B       => 45895887233391258875699432122236  
Result  => 4590506778789816062716623752527100537850891379558765656
```
