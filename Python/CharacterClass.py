import pyttsx3

class Character():
    def __init__(self,name,age,dialogues):
            self.name=name
            self.age=age
            self.dialogues=dialogues
    def speak_dialogue(self,engine):
        i=0
        for dialogue in self.dialogues:
            i+=1
            print(f"{self.name}: {dialogue}")
            engine.say(f": {dialogue}")
            engine.runAndWait()
        if i==0:
            print("Character has No Dialogues")
            engine.say("Character Has No Dialogues")
            engine.runAndWait()
class Elite_Character(Character):
    def __init__(self, name, age, dialogues,theme):
        super().__init__(name, age, dialogues)
        self.theme=theme
characters={
"Maxim":Character(name="Maxim",age=17,dialogues=[
    "more deep fried goodies please, but 'don't tell Misha" ,
    "everyone else is joining the numbers but what about me",
    "more responsibilites ah man",
    "oh man i should have finished those deep fried chicken wings from lash nigh ah! , im starving"
    ]),
"Alok":Character(name="Alok",age=28,dialogues=[
    "Feel the pressure to feel the energy",
    "i gonna be so bigger"
    ]),
"Awakened Alok":Elite_Character(name="Awakened Alok",age=28,dialogues=[
    "Beats with healing power can cure your hot",
    "Love Make All The Difference",
    "Make YOur Sound Louder"
    ],theme="Alok Awakening"),
"Skyler":Character(name="Skyler",age=26,dialogues=[
    "don't forget me im top of the MTP",
    "I'm a Ceo"
    ]),
"Chrono":Character(name="Chrono",age=35,dialogues=[
    "Don't Trust Miracles Trust Me",
    "You and me were a team",
    "Join the battle be the legend",
    "To Be The Best You Need The Best"]),
"K":Character(name="K",age=31,dialogues=[
    "One Step Closer To Enlightment",
    "It's all in The Mind",
    "Some Peoples Are The Prisoners Of Their Own Mind"
    ]),

"Hayato":Character(name="Hayato",age=20,dialogues=[
    "Time Is A Slice Of Dice",
    "Everything For The Family",
    "Patience Is A virtue",
    "Commit My Blade"]),
"Hayato \"Firebrand\"":Elite_Character(name="Hayato \"Firebrand\"",age=20,dialogues=[
    "On My Fist Or My Blade",
    "A Fire Reages Within Me",
    "Get Too Close And You Might Get Burnt"
    ],theme="Firebrand"),

"Moco": Character(name="Moco", age=20, dialogues=[
        "Can I trust you on this?",
        "Connection established, can you hear me?",
        "Somewhere someday, there will be termines for human beings, but not today",
        "We all deserve the truth"
    ]),
    
"Moco 'Enigma'":Elite_Character(name="Moco 'Enigma'", age=20, dialogues=[
        "A new dawn of civilization shall come after this endless night",
        "I'm going up against the world, do you still wanna join me?",
        "Is this what you want, Leonard?",
        "This is the battle we must pick"
    ], theme="Moco Month"),
"Misha": Character(name="Misha", age=19, dialogues=[]),
    
"Kelly": Character(name="Kelly", age=17, dialogues=[
        "Let's warm up",
        "I love feeling the wind in my hair",
        "Another lap completed"
    ]),
    
"Kelly 'The Swift'":Elite_Character(name="Kelly 'The Swift'", age=17, dialogues=[
        "I will leave you in the dust",
        "I'm going for gold",
        "I'm fast, I'm really fast",
        "Don't underestimate me"
    ], theme="Booyah Day 2020"),
"Suzy": Character(name="Suzy", age=19, dialogues=[
        "Hunting bounties, salvaging souls",
        "The price of faith is my bounty",
        "Stealth and accuracy are my signature moves",
        "Every mission has a price. Are you ready to pay?"
    ]),
"Sonia": Character(name="Sonia", age=20, dialogues=[
        "The future belongs to nanotechnology",
        "Adapting to change is the nature of evolution",
        "I will take over Horizon. It's my destiny",
        "I have a vision, and I will achieve it"
    ]),
"Orion": Character(name="Orion", age=22, dialogues=[
        "That's easy; I'm the best killer around",
        "From now on, I will do whatever I want",
        "No prison can hold me now",
        "If they think I'm a monster, I will give them a monster"
    ]),
"Tatsuya": Character(name="Tatsuya", age=16, dialogues=[
        "Boom, boom, dash-dash; I will always be faster",
        "Don't believe Shirou",
        "I just borrowed Shirou's shoes for something. Do you want to join?"
    ]),

"Luna": Character(name="Luna", age=28, dialogues=[
        "I didn't choose to lead; leadership chose me",
        "I won't let you suffer",
        "I protect those that need it"
    ]),

"J.Biebs": Character(name="J.Biebs", age=28, dialogues=[
        "Big things can come from small beginnings",
        "It's time for us to reunite",
        "Time to put soul into words",
        "Let me sing you the story of you"
    ]),

"Olivia": Character(name="Olivia", age=29, dialogues=[]),

"Ford": Character(name="Ford", age=29, dialogues=[
        "My healing skills would help me"
    ]),

"Xayne": Character(name="Xayne", age=23, dialogues=[
        "I'm all adrenaline",
        "Falling is freedom",
        "Chase me if you can",
        "Stretch your wings and fly"
    ]),
"Alvaro": Character(name="Alvaro", age=26, dialogues=[
        "Can you feel the burn of desire",
        "Can't wait for everyone to see my explosive surprise",
        "Boom, I'm explosive",
        "From the ashes, I rise"
    ]),

"Andrew": Character(name="Andrew", age=42, dialogues=[
        "Protect those you love",
        "No crime, no problem",
        "You do what you have to"
    ]),

"Shani": Character(name="Shani", age=31, dialogues=[]),

"Wolfrahh": Character(name="Wolfrahh", age=19, dialogues=[
        "Laugh well, laugh",
        "I'm the leader of the pack",
        "Alpha war, baby",
        "My bonut is worse than my bite"
    ]),

"Notora": Character(name="Notora", age=27, dialogues=[
        "Let's go, both renold",
        "A challenge, ha!",
        "All you see is the back of my jacket",
        "Go faster or go home"
    ]),

"Kapella": Character(name="Kapella", age=21, dialogues=[
        "Keep climbing those skills",
        "Who's coming to my concert",
        "I will put a little week into you",
        "La-la, la la"
    ]),

"A124": Character(name="A124", age=4, dialogues=[]),

"Luquetta": Character(name="Luquetta", age=20, dialogues=[
        "Need me to kick something",
        "Top goal scorer at your service",
        "You have to score your goals",
        "My friends call me hattrick"
    ]),
"Steffie": Character(name="Steffie", age=23, dialogues=[
        "Spray painting is my art",
        "My friends call me the rebel",
        "Eyes are just useless when the mind is blind",
        "Don't let anyone tell you what you can do"
    ]),

"Maro": Character(name="Maro", age=32, dialogues=[
        "Fly in the sky to search for prey",
        "I'm a bird of prey",
        "Sharp, close, cut the deep ely"
    ]),

"Jota": Character(name="Jota", age=31, dialogues=[
        "Hantamreka",
        "Parkour is the name of my game",
        "There are no limits, only obstacles",
        "I will keep on climbing higher"
    ]),

"Jai": Character(name="Jai", age=30, dialogues=[
        "I'm the fists of the law",
        "You've been known the truth",
        "Hard work pays off",
        "I never miss a fight",
        "I bring you the truth"
    ]),

"Nikita": Character(name="Nikita", age=22, dialogues=[]),

"Miguel": Character(name="Miguel", age=29, dialogues=[]),

"Shirou": Character(name="Shirou", age=19, dialogues=[
        "Competition, I'm the competition",
        "Roses in cuts would help you improve",
        "I'm the hurricane"
    ]),

"Caroline": Character(name="Caroline", age=17, dialogues=[]),

"Dimitri": Character(name="Dimitri", age=26, dialogues=[
        "Let's get this party started",
        "Bounce to my beat",
        "Take it to a higher level"
    ]),

"Antonio": Character(name="Antonio", age=30, dialogues=[]),

"Laura": Character(name="Laura", age=29, dialogues=[]),

"Thiva": Character(name="Thiva", age=25, dialogues=[
        "Music is the soul of the heart",
        "Agresando of the track",
        "Rock to the rhythm"
    ]),

"Leon": Character(name="Leon", age=26, dialogues=[
        "I can outjump you with only one leg",
        "Responsibility is on my shoulders",
        "Watch out, my dance",
        "Leo"
    ]),

"Clu": Character(name="Clu", age=24, dialogues=[
        "Keep following the evidence",
        "What mystery do you need me to solve",
        "Don't worry, I'm on the case",
        "Anyone got a clue."
    ]),

"Dasha": Character(name="Dasha", age=25, dialogues=[
        "Once I start, you can't stop me",
        "Let's get the party started",
        "Oh! Do you need to prank"
    ]),

"Paloma": Character(name="Paloma", age=28, dialogues=[]),

"Rafael": Character(name="Rafael", age=31, dialogues=[]),

"Wukong": Character(name="Wukong", age=0, dialogues=["Heehehhehehehhhe"]),

"Kenta": Character(name="Kenta", age=38, dialogues=[
        "Duty always comes first, I learnt my lesson",
        "Guarding young master Hayato is no easy task",
        "I swear to serve Yagami's, my blade is this"
    ]),

"Homer": Character(name="Homer", age=30, dialogues=[
        "The members only cause is trouble",
        "Life is about overcoming obstacles, what have you overcome lately",
        "I have started the techies maybe, it's time for me to start another story",
        "I never dreamed I would be the key to leaving Guiza"
    ]),

"Santino": Character(name="Santino", age=34, dialogues=[
        "Watch me go viral",
        "The best way to stay another day, stay safe",
        "Sometimes you need to chase your dreams to be happy",
        "You know those angelic pants, those were my designs"
    ]),

"D-Bee": Character(name="D-Bee", age=19, dialogues=[
        "Follow my moves",
        "Ah-ha, spin a way, spin my when dance to it",
        "Get your body moving",
        "From twist to handstands"
    ])
}
engine = pyttsx3.init()
while True:
    name = input("Enter the name of the character (or 'exit' to quit): ").strip()
    if name == 'exit':
        break
    elif name in characters:
        try:
            characters[name].speak_dialogue(engine)
        except KeyError:
            print("character not found")
    else:
        print("Character not found. Please enter a valid character name.")