from decimal import *


getcontext().prec = 200


def getQuadRoots(a, b, c):  # ax^2+bx+c = 0
    d = b*b-4*a*c
    if d < 0:
        return []
    elif d == 0:
        return [-b/(2*a)]
    elif d > 0:
        return [(-b+d.sqrt())/(2*a), (-b-d.sqrt())/(2*a)]


def sumsum(a, b):
    i = 0
    for i in range(1000):
        a = a + b
    return a


def calcQuad(a, b, c, x):
    return a*x*x+b*x+c


def calcCubic(a, b, c, d, x):
    return a*x*x*x+b*x*x+c*x+d


def pSearch(a, b, c, d, **kwargs):
    iters = 300

    l = kwargs['l'] if 'l' in kwargs else Decimal(-1e6)
    r = kwargs['r'] if 'r' in kwargs else Decimal(1e6)

    for _ in range(iters):
        m = (l+r)/2
        y = calcCubic(a, b, c, d, m)
        slope = 1 if calcQuad(3 * a, 2 * b, c, m) >= 0 else -1

        if y * slope > 0:
            r = m
        else:
            l = m

    return l


if __name__ == "__main__":
    tc = int(input())
    for _ in range(tc):
        a, b, c, d = map(Decimal, input().split())
        test = sumsum(1,1)
        qroots = getQuadRoots(3*a, 2*b, c)
        if len(qroots) <= 1:
            print("{:.12f}".format(pSearch(a, b, c, d)))
        else:
            qroots.sort()
            res = []
            res.append(pSearch(a, b, c, d, r=qroots[0]))
            res.append(pSearch(a, b, c, d, l=qroots[0], r=qroots[1]))
            res.append(pSearch(a, b, c, d, l=qroots[1]))
            res.sort()
            for i in range(len(res)):
                if i > 0 and abs(res[i] - res[i - 1]) < Decimal('1e-20'):
                    continue
                if abs(calcCubic(a, b, c, d, res[i])) < Decimal('1e-20'):
                    print("{:.12f}".format(res[i]), end=' ')
            print()
