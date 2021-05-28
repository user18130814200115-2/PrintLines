# PrintLines
This utility is in my opinnion missing from the GNU core utils.
It allsow the user to specify a file and a number of lines to print, the utility will then print only those lines and exit, easy as pie.

## usage
```
pl [LINES...] [FILE]
```

### Examples
```
pl 100 99 101 file.txt
```
```
pl 1 file.txt
```
```
echo "100 101 file.txt" | xargs pl
```

## Speed
According to [hyperfine](https://github.com/sharkdp/hyperfine), pl ran 2.86 ± 1.15 times faster than sed.
