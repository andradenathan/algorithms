max_range = int(input())
menu = {
    '1001': 1.50,
    '1002': 2.50,
    '1003': 3.50,
    '1004': 4.50,
    '1005': 5.50,
}
total = 0
for index in range(max_range):
    customer_option, quantity = input().split(" ")
    quantity = int(quantity)
    total += menu[customer_option] * quantity
print(f"{total:.2f}")