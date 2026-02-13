num = int(input("Enter a number: "))
temp = num

while temp > 70:
    last_digit = temp % 10
    temp = temp // 10 - 2 * last_digit

if temp % 7 == 0:
    print(num, "is divisible by 7")
else:
    print(num, "is not divisible by 7")
