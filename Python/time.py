import time
timestamp=time.strftime('%H:%M:%S')
print(timestamp)
hour=int(time.strftime('%H'))
print(hour)
if (hour<6 or hour>18):
    print("its night")
elif( hour>6 and hour<12):
    print("its morning")
else:
    print("its afternoon")