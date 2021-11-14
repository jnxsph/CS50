from cs50 import get_float
import math

# Asks the user for change owed (but only possitive float numbers are accepted)
while True:
    change = get_float("Change owed: ")
    if change >= 0.00:
        break
# If user provides a non-negative value program procceds
# Calculation of quarters
q = math.floor(float(change / 0.25))
qremain = round((float(change % 0.25)), 2)

# Calculation of dimes
d = math.floor(float(qremain / 0.10))
dremain = round((float(qremain % 0.10)), 2)

# Calculation of nickels
n = math.floor(float(dremain / 0.05))
premain = round((float(dremain % 0.05)), 2)

# Calculation of pennies
p = int(float(premain / 0.01))

# Calculation of sum of coins
sum = q + d + n + p

# Prints sum of coins returned
print("{}\n".format(sum))
