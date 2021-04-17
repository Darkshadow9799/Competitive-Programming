''' h -> Hours And d -> Longitude Value 
Both h and d will be provided by the user'''
h=float(input())
d=float(input())
def clk(h,d):
    h=((h/360)*d)
    m=0
    for i in range(0,int(h)):
        m=m+1
    d=(h-m)*60
    h=((h*60)-d)/60
    if(h==12):
        h=0
    if(d==60):
        d=0
    ha=0.5*(h*60+d)
    da=6*d
    angle=abs(ha-da)
    angle=min(360-angle,angle)
    return angle
ca=clk(h,d)
print("{:.2f}".format(ca))
