import random
st=input("enter your string")
words=st.split(" ")
coding=True
if(coding):
    nword=[]
    for word in words:
        if(len(word)>=3):
            r1="dsf"
            r2="jkr"
            stnew=r1+word[1:]+word[0]+r2
            nword.append(stnew)
        else:
            nword.append(word[::-1])
    print(" ".join(nword))
else:
    nword=[]
    for word in words:
        if(len(word)>=3):
            r1="dsf"
            r2="jkr"
            stnew=r1-word[:-1]+word[0]-r2
            nword.append(stnew)
        else:
            nword.append(word[::-1])
    