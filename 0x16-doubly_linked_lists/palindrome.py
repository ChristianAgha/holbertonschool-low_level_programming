#!/usr/bin/python3
import math
highest = 0
if __name__ == "__main__":
    for n1 in range(999, 0, -1):
        for n2 in range(999, 0, -1):
            mul = n1 * n2
            mul_cpy = mul
            Reverse = 0
            while(mul_cpy > 0):
                Reminder = mul_cpy % 10
                Reverse = (Reverse * 10) + Reminder
                mul_cpy = mul_cpy // 10
            if Reverse == mul:
                if mul > highest:
                    highest = mul
    print(highest)
