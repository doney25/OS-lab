echo "Enter two numbers"
read num1
read num2
echo -e "Enter the choice\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division"
read ch
case $ch in
1)
echo "Sum is $(($num1+$num2))"
;;
2)
echo "Difference is $(($num1-$num2))"
;;
3)
echo "Multiplication is $(($num1*$num2))"
;;
4)
echo "Division is $(($num1/$num2))"
;;
*)
echo "Invalid"
;;
esac
