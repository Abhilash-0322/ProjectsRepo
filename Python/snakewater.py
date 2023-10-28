import random
list=["snake","water","gun"]
while True:
    a=random.choice(list)
    b=input("\n\n\ninput 0 to exit\n\n enter your input snake or water or gun : ")
    if(b=="0"):
        print("game ends")
        break
    elif(b=="gun" and a=="snake"):
        print("AI* Choose",a,"you won")
    elif(b=="water" and a=="gun"):
        print(("AI* Choose",a,"you won"))
    elif(b=="water" and a=="snake"):
        print("AI* Choose",a,"you lost")
    elif(b=="gun" and a=="water"):
        print("AI* Choose",a,"you lost")
    elif(b=="snake" and a=="gun"):
        print("AI* Choose",a,"you lost")
    elif(a==b):
        print("AI* Choose",a,"we got a draw")
    elif(b =="snake" and a == "water"):
        print("AI* Choose",a,"you won")
    else:
        print("invalid input")
        continue