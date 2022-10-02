import time
import requests
import math
url1 = "ip1:port"
url2 = "ip2:port"
url3 = "ip3:port"

def speedFunc(url , xa, ya , xb, yb):
    t1 = time.time()
    r = requests.get(url)
    t2 = time.time()
    # calculation of distance using this formula
	dis = math.sqrt( (xa - xb)*2  +  (xa - xb)*2 )
    rtime = int(t2-t1)/2
	speed = dis/rtime
	return speed
speed12 = speedFunc(url1 , x1, y1 , x2, y2)
speed23 = speedFunc(url2 , x2, y2 , x3, y3)
speed31 = speedFunc(url3 , x3, y3 , x2, y2)
avgspeed = (speed12 + speed23 + speed31)/3
