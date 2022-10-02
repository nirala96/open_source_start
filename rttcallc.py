import time
import requests
def RTTCalc(url):
    # time when the signal is sent
    t1 = time.time()
    r = requests.get(url)
    # time when acknowledgement of signal
    # is received
    t2 = time.time()
    # total time taken
    rtime = int(t2-t1)
	return rtime

url1 = "ip1:port"
url2 = "ip2:port"
url3 = "ip3:port"
# we will half the round trip time while calculating the distance of node from other node
rtd1 = (RTTCalc(url1) / 2) * avgspeed
rtd2 = (RTTCalc(url2) / 2) * avgspeed
rtd3 = (RTTCalc(url3) / 2)* avgspeed
def pointCalc( x1, y1, r1, x2, y2, r2, x3, y3, r3):
    y =  (( (x2 - x3 )( (x22 - x12) + (y22 - y12) + (r12 - r22) ) ) - ((x2 - x3 )( (x3*2 - x22) + (y32 - y22) + (r22 - r32) ))) / ( 2( (y1 - y2 )(x2 - x3) - (y2 - y3 )(x1 - x2) ) )
	x =  (( (y2 - y3 )( (y22 - y12) + (x22 - x12) + (r12 - r22) ) ) - ((y2 - y3 )( (y3*2 - y22) + (x32 - x22) + (r22 - r32) ))) / ( 2( (x1 - x2 )(y2 - y3) - (x2 - x3 )(y1 - y2) ) )
	return [x , y]
