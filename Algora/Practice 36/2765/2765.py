idx = 1

while 1:
    a, b, c = map(float, input().split())

    if b == 0:
        break
    else:
        d = a / 63360 * 3.1415927 * b
        s = d / (c / 3600) 
        print("Trip #{}: {:.2f} {:.2f}".format(idx, d, s))
        idx += 1