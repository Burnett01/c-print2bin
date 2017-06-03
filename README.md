# c-print2bin

My print2bin function written just for educational purpose.

---

There isn't much to say, other than I'm still learning binary and bitshifting stuff.

So what's this you might ask?

Well, this function accepts a string (const char *) to have every character converted to their Ascii and binary representation. It also appends a bit (padding) to fulfil the 8 bit binary layout.
The binary representation goes from right to left, though it could be easily changed by flipping the bits.

The result looks like this:

<img src="http://i.imgur.com/tU1AXwe.png" />

---

```c
void print2bin( const char *str );
```



