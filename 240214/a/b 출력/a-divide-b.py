import sys
from decimal import Decimal

a, b = map(int, sys.stdin.readline().split())

print("{:.20f}".format(Decimal(a) / b))