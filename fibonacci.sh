echo "Enter the limit"
read lim
a=0
b=1
c=0
echo "Fibonacci series:"
echo -e "$a\n$b"
for((i=3;i<=lim;i++))
do
 ((c=$a+$b))
 a=$b
 b=$c
 echo "$c"
done
