import sys
from decimal import Decimal, getcontext, ROUND_DOWN

# 정밀도를 21로 설정 (소수점 아래 20자리까지 정확하게 계산)
getcontext().prec = 21

a, b = map(int, sys.stdin.readline().split())

# a 나누기 b 계산
result = Decimal(a) / Decimal(b)

# 소수점 아래 20자리까지 버림
rounded_result = result.quantize(Decimal('1.00000000000000000000'), rounding=ROUND_DOWN)

print(f"{rounded_result}")