import tkinter
from tkinter import *
import tkinter as tk

def howToUse():
    htugui = Tk()
    htugui.geometry("1080x220")
    htugui.title("How To Use")
    htugui.config(bg="#222222")

    step1 = Label(htugui, text="Step 1: Pick your arguments", font=("Rubik", 10), fg="white", bg="#222222").pack()
    step2 = Label(htugui, text="Step 2: Press Generate!", font=("Rubik", 10), fg="white", bg="#222222").pack()
    step3 = Label(htugui, text="Step 3: Open DNSpy, Select file > Open", font=("Rubik", 10), fg="white", bg="#222222").pack()
    step4 = Label(htugui, text="Step 4: Go to your Rolling Sky installation folder > Rolling Sky_Data > Managed, Select the Assembly-CSharp.dll file and open it", font=("Rubik", 10), fg="white", bg="#222222").pack()
    step5 = Label(htugui, text="Step 5: Select the magnifying glass next to the start button to search, search “LevelDesigner” and double click on the first option", font=("Rubik", 10), fg="white", bg="#222222").pack()
    step6 = Label(htugui, text="Step 6: Scroll to line 711. In this line you will find the code for all of the theme changes in rs. The code is in order of level IDs.", font=("Rubik", 10), fg="white", bg="#222222").pack()
    step7 = Label(htugui, text="Step 7: Search for the level you want to change the theme. Right click the code and select \"Edit Class (C#)\" to edit it.", font=("Rubik", 10), fg="white", bg="#222222").pack()
    step8 = Label(htugui, text="Step 8: Copy the generated code and paste it into DNSpy", font=("Rubik", 10, ), fg="white", bg="#222222").pack()
    step9 = Label(htugui, text="Step 9: After you finish editing click compile, Click on file > Save all..., Click OK", font=("Rubik", 10), fg="white", bg="#222222").pack()
    step10 = Label(htugui, text="You're done!", font=("Rubik", 10), fg="white", bg="#222222").pack()

def creds():
    credsgui = Tk()
    credsgui.geometry("490x100")
    credsgui.title("Credits")
    credsgui.config(bg="#222222")
    madeby = Label(credsgui, text="This tool was made by Teddy0008", font=("Rubik", 20), fg="white", bg="#222222").pack(anchor="center")
    themename = Label(credsgui, text="Theme Names by DeclanHugo", font=("Rubik", 20, "underline"), fg="white", bg="#222222").pack(anchor="center")

def genOut():
    generBox.delete("0","end")
    generBox.insert(0, f"new LevelDesigner.Theme({posEntryBox.get()}, {themeIDbox.get()}, 1f, {useTrees.get()}, {useTowers.get()}, {useAltGround.get()}, {usePyramids.get()}, {usePalmTrees.get()}, {useSlashers.get()}, {useBuildings.get()}, {useFloodLights.get()}, {useFilmGrainEffect.get()}, {useAltPalmTrees.get()}, {useTeslas.get()}, {useRetroEffects.get()}, {useGreenMonitorEffects.get()}, {useColorMonitorEffect.get()})")

def themeWindowCreate():
    themeIDg = Tk()
    themeIDg.geometry("1000x420")
    themeIDg.title("Theme Window")
    themeIDg.config(bg="#222222")

    scroll = Scrollbar(themeIDg)
    IDlabel = Label(themeIDg, text="ID", font=("Rubik", 10, "underline"), fg="white", bg="#222222").grid(row=0, column=0)
    IDlabel = Label(themeIDg, text="ID", font=("Rubik", 10, "underline"), fg="white", bg="#222222").grid(row=0, column=3)
    IDlabel = Label(themeIDg, text="ID", font=("Rubik", 10, "underline"), fg="white", bg="#222222").grid(row=0, column=6)
    IDlabel = Label(themeIDg, text="ID", font=("Rubik", 10, "underline"), fg="white", bg="#222222").grid(row=0, column=9)
    IDlabel = Label(themeIDg, text="ID", font=("Rubik", 10, "underline"), fg="white", bg="#222222").grid(row=0, column=11)
    IDlabel = Label(themeIDg, text="ID", font=("Rubik", 10, "underline"), fg="white", bg="#222222").grid(row=2, column=11)
    IDlabel = Label(themeIDg, text="ID", font=("Rubik", 10, "underline"), fg="white", bg="#222222").grid(row=0, column=13)
    IDlabel = Label(themeIDg, text="ID", font=("Rubik", 10, "underline"), fg="white", bg="#222222").grid(row=0, column=15)
    for i in range(18):
        label = Label(themeIDg, text=i+1, font=("Rubik", 10), fg="white", bg="#222222").grid(row=i+1, column=0)
    for i in range(18):
        label = Label(themeIDg, text=i+19, font=("Rubik", 10), fg="white", bg="#222222").grid(row=i+1, column=3)
    for i in range(18):
        label = Label(themeIDg, text=i+37, font=("Rubik", 10), fg="white", bg="#222222").grid(row=i+1, column=6)
    for i in range(18):
        label = Label(themeIDg, text=i+55, font=("Rubik", 10), fg="white", bg="#222222").grid(row=i+1, column=9)
    for i in range(1):
        label = Label(themeIDg, text=i+73, font=("Rubik", 10), fg="white", bg="#222222").grid(row=i+1, column=11)
    for i in range(16):
        label = Label(themeIDg, text=i+74, font=("Rubik", 10), fg="white", bg="#222222").grid(row=i+3, column=11)
    for i in range(18):
        label = Label(themeIDg, text=i+90, font=("Rubik", 10), fg="white", bg="#222222").grid(row=i+1, column=13)
    for i in range(9):
        label = Label(themeIDg, text=i+108, font=("Rubik", 10), fg="white", bg="#222222").grid(row=i+1, column=15)

    themenameLabel = Label(themeIDg, text="Theme", font=("Rubik", 10, "underline"), fg="white", bg="#222222").grid(row=0, column=1)
    themenameLabel = Label(themeIDg, text="Theme", font=("Rubik", 10, "underline"), fg="white", bg="#222222").grid(row=0, column=4)
    themenameLabel = Label(themeIDg, text="Theme", font=("Rubik", 10, "underline"), fg="white", bg="#222222").grid(row=0, column=7)
    themenameLabel = Label(themeIDg, text="Theme", font=("Rubik", 10, "underline"), fg="white", bg="#222222").grid(row=0, column=10)
    themenameLabel = Label(themeIDg, text="Theme", font=("Rubik", 10, "underline"), fg="white", bg="#222222").grid(row=0, column=12)
    themenameLabel = Label(themeIDg, text="Theme", font=("Rubik", 10, "underline"), fg="white", bg="#222222").grid(row=2, column=12)
    themenameLabel = Label(themeIDg, text="Theme", font=("Rubik", 10, "underline"), fg="white", bg="#222222").grid(row=0, column=14)
    themenameLabel = Label(themeIDg, text="Theme", font=("Rubik", 10, "underline"), fg="white", bg="#222222").grid(row=0, column=16)
    massif = Label(themeIDg, text="Massif", font=("Rubik", 10), fg="white", bg="#222222").grid(row=1, column=1)
    Psky = Label(themeIDg, text="Purple Sky", font=("Rubik", 10), fg="white", bg="#222222").grid(row=2, column=1)
    forest = Label(themeIDg, text="Forest", font=("Rubik", 10), fg="white", bg="#222222").grid(row=3, column=1)
    Wsky = Label(themeIDg, text="White Sky", font=("Rubik", 10), fg="white", bg="#222222").grid(row=4, column=1)
    volcA = Label(themeIDg, text="Volcano A", font=("Rubik", 10), fg="white", bg="#222222").grid(row=5, column=1)
    illusion = Label(themeIDg, text="Illusion", font=("Rubik", 10), fg="white", bg="#222222").grid(row=6, column=1)
    Odesert = Label(themeIDg, text="Orange Desert", font=("Rubik", 10), fg="white", bg="#222222").grid(row=7, column=1)
    Gcity = Label(themeIDg, text="Gray City", font=("Rubik", 10), fg="white", bg="#222222").grid(row=8, column=1)
    metrop = Label(themeIDg, text="Metropolis", font=("Rubik", 10), fg="white", bg="#222222").grid(row=9, column=1)
    scitech = Label(themeIDg, text="Sci-Tech", font=("Rubik", 10), fg="white", bg="#222222").grid(row=10, column=1)
    disco = Label(themeIDg, text="Disco", font=("Rubik", 10), fg="white", bg="#222222").grid(row=11, column=1)
    tetris = Label(themeIDg, text="Tetris", font=("Rubik", 10), fg="white", bg="#222222").grid(row=12, column=1)
    crystalA = Label(themeIDg, text="Crystal A", font=("Rubik", 10), fg="white", bg="#222222").grid(row=13, column=1)
    crystalB = Label(themeIDg, text="Crystal B", font=("Rubik", 10), fg="white", bg="#222222").grid(row=14, column=1)
    elab = Label(themeIDg, text="E-Labyrinth", font=("Rubik", 10), fg="white", bg="#222222").grid(row=15, column=1)
    enightA = Label(themeIDg, text="E-Night A", font=("Rubik", 10), fg="white", bg="#222222").grid(row=16, column=1)
    enightB = Label(themeIDg, text="E-Night B", font=("Rubik", 10), fg="white", bg="#222222").grid(row=17, column=1)
    citsA = Label(themeIDg, text="Castle in the Sky A", font=("Rubik", 10), fg="white", bg="#222222").grid(row=18, column=1)
    citsB = Label(themeIDg, text="Castle in the Sky B", font=("Rubik", 10), fg="white", bg="#222222").grid(row=1, column=4)
    citsC = Label(themeIDg, text="Castle in the Sky C", font=("Rubik", 10), fg="white", bg="#222222").grid(row=2, column=4)
    volcB = Label(themeIDg, text="Volcano B", font=("Rubik", 10), fg="white", bg="#222222").grid(row=3, column=4)
    hlwn = Label(themeIDg, text="Halloween", font=("Rubik", 10), fg="white", bg="#222222").grid(row=4, column=4)
    graveya = Label(themeIDg, text="Graveyard", font=("Rubik", 10), fg="white", bg="#222222").grid(row=5, column=4)
    ghostda = Label(themeIDg, text="Ghost Dance", font=("Rubik", 10), fg="white", bg="#222222").grid(row=6, column=4)
    deepspa = Label(themeIDg, text="Deep Space", font=("Rubik", 10), fg="white", bg="#222222").grid(row=7, column=4)
    grnglxy = Label(themeIDg, text="Green Galaxy", font=("Rubik", 10), fg="white", bg="#222222").grid(row=8, column=4)
    christmascard = Label(themeIDg, text="Christmas Card", font=("Rubik", 10), fg="white", bg="#222222").grid(row=9, column=4)
    santaeve = Label(themeIDg, text="Santa's Eve", font=("Rubik", 10), fg="white", bg="#222222").grid(row=10, column=4)
    monody = Label(themeIDg, text="Monody", font=("Rubik", 10), fg="white", bg="#222222").grid(row=11, column=4)
    kungfu = Label(themeIDg, text="Kung Fu", font=("Rubik", 10), fg="white", bg="#222222").grid(row=12, column=4)
    wartrain = Label(themeIDg, text="Warrior Training", font=("Rubik", 10), fg="white", bg="#222222").grid(row=13, column=4)
    candy = Label(themeIDg, text="Candy", font=("Rubik", 10), fg="white", bg="#222222").grid(row=14, column=4)
    sweetn = Label(themeIDg, text="Sweet Night", font=("Rubik", 10), fg="white", bg="#222222").grid(row=15, column=4)
    arcade = Label(themeIDg, text="Arcade", font=("Rubik", 10), fg="white", bg="#222222").grid(row=16, column=4)
    eightbits = Label(themeIDg, text="8Bits", font=("Rubik", 10), fg="white", bg="#222222").grid(row=17, column=4)
    oneup = Label(themeIDg, text="1UP", font=("Rubik", 10), fg="white", bg="#222222").grid(row=18, column=4)
    matrix = Label(themeIDg, text="Matrix", font=("Rubik", 10), fg="white", bg="#222222").grid(row=1, column=7)
    cube = Label(themeIDg, text="Cube", font=("Rubik", 10), fg="white", bg="#222222").grid(row=2, column=7)
    poker = Label(themeIDg, text="Poker", font=("Rubik", 10), fg="white", bg="#222222").grid(row=3, column=7)
    joker = Label(themeIDg, text="Joker", font=("Rubik", 10), fg="white", bg="#222222").grid(row=4, column=7)
    reggae = Label(themeIDg, text="Reggae", font=("Rubik", 10), fg="white", bg="#222222").grid(row=5, column=7)
    mentalr = Label(themeIDg, text="Mental Rave", font=("Rubik", 10), fg="white", bg="#222222").grid(row=6, column=7)
    relics = Label(themeIDg, text="Relics", font=("Rubik", 10), fg="white", bg="#222222").grid(row=7, column=7)
    fairyt = Label(themeIDg, text="Fairytale", font=("Rubik", 10), fg="white", bg="#222222").grid(row=8, column=7)
    streetb = Label(themeIDg, text="Street Basketball", font=("Rubik", 10), fg="white", bg="#222222").grid(row=9, column=7)
    hoopdr = Label(themeIDg, text="Hoop Dream", font=("Rubik", 10), fg="white", bg="#222222").grid(row=10, column=7)
    nightcar = Label(themeIDg, text="Midnight Carnival", font=("Rubik", 10), fg="white", bg="#222222").grid(row=11, column=7)
    monsterca = Label(themeIDg, text="Monster Cavern", font=("Rubik", 10), fg="white", bg="#222222").grid(row=12, column=7)
    hlwnesc = Label(themeIDg, text="Halloween Escape", font=("Rubik", 10), fg="white", bg="#222222").grid(row=13, column=7)
    ignite = Label(themeIDg, text="Ignite", font=("Rubik", 10), fg="white", bg="#222222").grid(row=14, column=7)
    laser = Label(themeIDg, text="Laser", font=("Rubik", 10), fg="white", bg="#222222").grid(row=15, column=7)
    winter = Label(themeIDg, text="The Winter", font=("Rubik", 10), fg="white", bg="#222222").grid(row=16, column=7)
    varchr = Label(themeIDg, text="Varying Christmas", font=("Rubik", 10), fg="white", bg="#222222").grid(row=17, column=7)
    cloud = Label(themeIDg, text="Cloud", font=("Rubik", 10), fg="white", bg="#222222").grid(row=18, column=7)
    dazzle = Label(themeIDg, text="Dazzle", font=("Rubik", 10), fg="white", bg="#222222").grid(row=1, column=10)
    faster = Label(themeIDg, text="Faster", font=("Rubik", 10), fg="white", bg="#222222").grid(row=2, column=10)
    neon = Label(themeIDg, text="Neon", font=("Rubik", 10), fg="white", bg="#222222").grid(row=3, column=10)
    egypt = Label(themeIDg, text="Egypt", font=("Rubik", 10), fg="white", bg="#222222").grid(row=4, column=10)
    eyehorus = Label(themeIDg, text="The Eye of Horus", font=("Rubik", 10), fg="white", bg="#222222").grid(row=5, column=10)
    circus = Label(themeIDg, text="Circus", font=("Rubik", 10), fg="white", bg="#222222").grid(row=6, column=10)
    clownp = Label(themeIDg, text="Clown Park", font=("Rubik", 10), fg="white", bg="#222222").grid(row=7, column=10)
    worldc = Label(themeIDg, text="World Cup", font=("Rubik", 10), fg="white", bg="#222222").grid(row=8, column=10)
    soccerf = Label(themeIDg, text="Soccer Field", font=("Rubik", 10), fg="white", bg="#222222").grid(row=9, column=10)
    alonecy = Label(themeIDg, text="Cyan Alone", font=("Rubik", 10), fg="white", bg="#222222").grid(row=10, column=10)
    alonepi = Label(themeIDg, text="Pink Alone", font=("Rubik", 10), fg="white", bg="#222222").grid(row=11, column=10)
    alonewh = Label(themeIDg, text="White Alone", font=("Rubik", 10), fg="white", bg="#222222").grid(row=12, column=10)
    aloneor = Label(themeIDg, text="Orange Alone", font=("Rubik", 10), fg="white", bg="#222222").grid(row=13, column=10)
    fadedgy = Label(themeIDg, text="Gray Faded", font=("Rubik", 10), fg="white", bg="#222222").grid(row=14, column=10)
    fadedgn = Label(themeIDg, text="Green Faded", font=("Rubik", 10), fg="white", bg="#222222").grid(row=15, column=10)
    fadedye = Label(themeIDg, text="Yellow Faded", font=("Rubik", 10), fg="white", bg="#222222").grid(row=16, column=10)
    fadedpu = Label(themeIDg, text="Purple Faded", font=("Rubik", 10), fg="white", bg="#222222").grid(row=17, column=10)
    thirdann = Label(themeIDg, text="3rd Anniversary", font=("Rubik", 10), fg="white", bg="#222222").grid(row=18, column=10)
    birthbon = Label(themeIDg, text="Birthday Bonus", font=("Rubik", 10), fg="white", bg="#222222").grid(row=1, column=12)
    hlwnnight = Label(themeIDg, text="Halloween Night", font=("Rubik", 10), fg="white", bg="#222222").grid(row=3, column=12)
    skelparty = Label(themeIDg, text="Skeleton Party", font=("Rubik", 10), fg="white", bg="#222222").grid(row=4, column=12)
    gldnchrstms = Label(themeIDg, text="Golden Christmas", font=("Rubik", 10), fg="white", bg="#222222").grid(row=5, column=12)
    chrstmsgosp = Label(themeIDg, text="Christmas Gospel", font=("Rubik", 10), fg="white", bg="#222222").grid(row=6, column=12)
    alonebl = Label(themeIDg, text="Blue Alone", font=("Rubik", 10), fg="white", bg="#222222").grid(row=7, column=12)
    alonegn = Label(themeIDg, text="Green Alone", font=("Rubik", 10), fg="white", bg="#222222").grid(row=8, column=12)
    alonere = Label(themeIDg, text="Red Alone", font=("Rubik", 10), fg="white", bg="#222222").grid(row=9, column=12)
    sprngfstvl = Label(themeIDg, text="Spring Festival", font=("Rubik", 10), fg="white", bg="#222222").grid(row=10, column=12)
    gldnnewyr = Label(themeIDg, text="Golden New Year", font=("Rubik", 10), fg="white", bg="#222222").grid(row=11, column=12)
    spectrecy = Label(themeIDg, text="Cyan Spectre", font=("Rubik", 10), fg="white", bg="#222222").grid(row=12, column=12)
    spectrere = Label(themeIDg, text="Red Spectre", font=("Rubik", 10), fg="white", bg="#222222").grid(row=13, column=12)
    superbowl = Label(themeIDg, text="Super Bowl", font=("Rubik", 10), fg="white", bg="#222222").grid(row=14, column=12)
    cmponship = Label(themeIDg, text="Championship", font=("Rubik", 10), fg="white", bg="#222222").grid(row=15, column=12)
    prtship = Label(themeIDg, text="Pirate Ship", font=("Rubik", 10), fg="white", bg="#222222").grid(row=16, column=12)
    navalbtl = Label(themeIDg, text="Naval Battle", font=("Rubik", 10), fg="white", bg="#222222").grid(row=17, column=12)
    microchop = Label(themeIDg, text="Microchip", font=("Rubik", 10), fg="white", bg="#222222").grid(row=18, column=12)
    digmatrix = Label(themeIDg, text="Digital Matrix", font=("Rubik", 10), fg="white", bg="#222222").grid(row=1, column=14)
    dinamcube = Label(themeIDg, text="Dynamic Cube", font=("Rubik", 10), fg="white", bg="#222222").grid(row=2, column=14)
    sunny = Label(themeIDg, text="Sunny", font=("Rubik", 10), fg="white", bg="#222222").grid(row=3, column=14)
    vrworld = Label(themeIDg, text="Virtual World", font=("Rubik", 10), fg="white", bg="#222222").grid(row=4, column=14)
    ulckftr = Label(themeIDg, text="Unlock the Future", font=("Rubik", 10), fg="white", bg="#222222").grid(row=5, column=14)
    psycdlc = Label(themeIDg, text="Psychedelic", font=("Rubik", 10), fg="white", bg="#222222").grid(row=6, column=14)
    beatprt = Label(themeIDg, text="Beat Party", font=("Rubik", 10), fg="white", bg="#222222").grid(row=7, column=14)
    fourann = Label(themeIDg, text="4th Anniversary", font=("Rubik", 10), fg="white", bg="#222222").grid(row=8, column=14)
    brthprt = Label(themeIDg, text="Birthday Party", font=("Rubik", 10), fg="white", bg="#222222").grid(row=9, column=14)
    mnstrchrs = Label(themeIDg, text="Monster Chorus", font=("Rubik", 10), fg="white", bg="#222222").grid(row=10, column=14)
    triortre = Label(themeIDg, text="Trick or Treat", font=("Rubik", 10), fg="white", bg="#222222").grid(row=11, column=14)
    snstglw = Label(themeIDg, text="Sunset Glow", font=("Rubik", 10), fg="white", bg="#222222").grid(row=12, column=14)
    mrngdwn = Label(themeIDg, text="Morning Dawn", font=("Rubik", 10), fg="white", bg="#222222").grid(row=13, column=14)
    rndrgft = Label(themeIDg, text="Reindeer's Gift", font=("Rubik", 10), fg="white", bg="#222222").grid(row=14, column=14)
    arrtour = Label(themeIDg, text="Aurora Tour", font=("Rubik", 10), fg="white", bg="#222222").grid(row=15, column=14)
    klprdrm = Label(themeIDg, text="Kepler's Dream", font=("Rubik", 10), fg="white", bg="#222222").grid(row=16, column=14)
    stars = Label(themeIDg, text="Stars", font=("Rubik", 10), fg="white", bg="#222222").grid(row=17, column=14)
    dlcctmtt = Label(themeIDg, text="Delicacy Temptation", font=("Rubik", 10), fg="white", bg="#222222").grid(row=18, column=14)
    swths = Label(themeIDg, text="Sweet House", font=("Rubik", 10), fg="white", bg="#222222").grid(row=1, column=16)
    dpwtdnmx = Label(themeIDg, text="Deepwater Dynamix", font=("Rubik", 10), fg="white", bg="#222222").grid(row=2, column=16)
    crlcv = Label(themeIDg, text="Coral Cove", font=("Rubik", 10), fg="white", bg="#222222").grid(row=3, column=16)
    stmera = Label(themeIDg, text="Steam Era", font=("Rubik", 10), fg="white", bg="#222222").grid(row=4, column=16)
    mchncpw = Label(themeIDg, text="Mechanical Power", font=("Rubik", 10), fg="white", bg="#222222").grid(row=5, column=16)
    gstwrr = Label(themeIDg, text="Ghost Warrior", font=("Rubik", 10), fg="white", bg="#222222").grid(row=6, column=16)
    shdwwrr = Label(themeIDg, text="Shadow Warrior", font=("Rubik", 10), fg="white", bg="#222222").grid(row=7, column=16)
    mnstsht = Label(themeIDg, text="Monster City", font=("Rubik", 10), fg="white", bg="#222222").grid(row=8, column=16)
    mnstmtpl = Label(themeIDg, text="Monster Metropolis", font=("Rubik", 10), fg="white", bg="#222222").grid(row=9, column=16)

    scroll.pack(side=RIGHT, fill=Y)
    scroll.config(command=YView.yview(themeIDg))


dfwindow = Tk()
dfwindow.geometry("840x420")
dfwindow.title("Theme Change Editor")
dfwindow.config(background="#222222")
#font=("Rubik", 15), fg="white", bg="#222222"
menubar = Menu(dfwindow)

menubar.config(bg="#222222", fg="white")
menubar.configure(background="#222222", foreground="white")

helpmenu = Menu(menubar, tearoff=0)
helpmenu.add_command(label="How to use", command=howToUse)
helpmenu.add_command(label="Credits", command=creds)
menubar.add_cascade(label="Help", menu=helpmenu)

helpmenu.config(bg="#222222", fg="white")



poslabeltext = "Level Position"
posLabel = Label(dfwindow,
                 text=poslabeltext,
                 font=("Rubik", 15),
                 fg="white",
                 bg="#222222").place(x=10,y=20)
themeLabel = Label(dfwindow,
                 text="Theme",
                 font=("Rubik", 15),
                 fg="white",
                 bg="#222222").place(x=360, y=20)

posEntryBox = tk.Entry(dfwindow,
                    font=("Rubik", 10),
                    fg="white",
                    bg="#222222")
posEntryBox.insert(0, "0")
posEntryBox.place(x=15, y=50)

themeIDbox = tk.Entry(dfwindow,
                    font=("Rubik", 10),
                    fg="white",
                    bg="#222222")
themeIDbox.insert(0, "1")
themeIDbox.place(x=300, y=50)

generBox = tk.Entry(dfwindow, font=("Rubik", 10), fg="white", bg="#222222", width=105)
generBox.insert(0, "")
generBox.place(x=45, y=350)

useTrees = StringVar()
useTreeschk = tk.Checkbutton(dfwindow, text="useTrees", variable=useTrees, offvalue="false", onvalue="true", font=("Rubik", 12), fg="white", bg="#222222", activebackground="#222222", activeforeground="white", selectcolor="#222222")
useTreeschk.place(x=560, y=20)
useTreeschk.deselect()

useTowers = StringVar()
useTowerschk = tk.Checkbutton(dfwindow, text="useTowers", variable=useTowers, offvalue="false", onvalue="true", font=("Rubik", 12), fg="white", bg="#222222", activebackground="#222222", activeforeground="white", selectcolor="#222222")
useTowerschk.place(x=560, y=40)
useTowerschk.deselect()

useAltGround = StringVar()
useAltGroundchk = tk.Checkbutton(dfwindow, text="useAltGround", variable=useAltGround, offvalue="false", onvalue="true", font=("Rubik", 12), fg="white", bg="#222222", activebackground="#222222", activeforeground="white", selectcolor="#222222")
useAltGroundchk.place(x=560, y=60)
useAltGroundchk.deselect()

usePyramids = StringVar()
usePyramidschk = tk.Checkbutton(dfwindow, text="usePyramids", variable=usePyramids, offvalue="false", onvalue="true", font=("Rubik", 12), fg="white", bg="#222222", activebackground="#222222", activeforeground="white", selectcolor="#222222")
usePyramidschk.place(x=560, y=80)
usePyramidschk.deselect()

usePalmTrees = StringVar()
usePalmTreeschk = tk.Checkbutton(dfwindow, text="usePalmTrees", variable=usePalmTrees, offvalue="false", onvalue="true", font=("Rubik", 12), fg="white", bg="#222222", activebackground="#222222", activeforeground="white", selectcolor="#222222")
usePalmTreeschk.place(x=560, y=100)
usePalmTreeschk.deselect()

useSlashers = StringVar()
useSlasherschk = tk.Checkbutton(dfwindow, text="useSlashers", variable=useSlashers, offvalue="false", onvalue="true", font=("Rubik", 12), fg="white", bg="#222222", activebackground="#222222", activeforeground="white", selectcolor="#222222")
useSlasherschk.place(x=560, y=120)
useSlasherschk.deselect()

useBuildings = StringVar()
useBuildingschk = tk.Checkbutton(dfwindow, text="useBuildings", variable=useBuildings, offvalue="false", onvalue="true", font=("Rubik", 12), fg="white", bg="#222222", activebackground="#222222", activeforeground="white", selectcolor="#222222")
useBuildingschk.place(x=560, y=140)
useBuildingschk.deselect()

useFloodLights = StringVar()
useFloodLightschk = tk.Checkbutton(dfwindow, text="useFloodLights", variable=useFloodLights, offvalue="false", onvalue="true", font=("Rubik", 12), fg="white", bg="#222222", activebackground="#222222", activeforeground="white", selectcolor="#222222")
useFloodLightschk.place(x=560, y=160)
useFloodLightschk.deselect()

useFilmGrainEffect = StringVar()
useFilmGrainEffectchk = tk.Checkbutton(dfwindow, text="useFilmGrainEffect", variable=useFilmGrainEffect, offvalue="false", onvalue="true", font=("Rubik", 12), fg="white", bg="#222222", activebackground="#222222", activeforeground="white", selectcolor="#222222")
useFilmGrainEffectchk.place(x=560, y=180)
useFilmGrainEffectchk.deselect()

useAltPalmTrees = StringVar()
useAltPalmTreeschk = tk.Checkbutton(dfwindow, text="useAltPalmTrees", variable=useAltPalmTrees, offvalue="false", onvalue="true", font=("Rubik", 12), fg="white", bg="#222222", activebackground="#222222", activeforeground="white", selectcolor="#222222")
useAltPalmTreeschk.place(x=560, y=200)
useAltPalmTreeschk.deselect()

useTeslas = StringVar()
useTeslaschk = tk.Checkbutton(dfwindow, text="useTeslas", variable=useTeslas, offvalue="false", onvalue="true", font=("Rubik", 12), fg="white", bg="#222222", activebackground="#222222", activeforeground="white", selectcolor="#222222")
useTeslaschk.place(x=560, y=220)
useTeslaschk.deselect()

useRetroEffects = StringVar()
useRetroEffectschk = tk.Checkbutton(dfwindow, text="useRetroEffects", variable=useRetroEffects, offvalue="false", onvalue="true", font=("Rubik", 12), fg="white", bg="#222222", activebackground="#222222", activeforeground="white", selectcolor="#222222")
useRetroEffectschk.place(x=560, y=240)
useRetroEffectschk.deselect()

useGreenMonitorEffects = StringVar()
useGreenMonitorEffectschk = tk.Checkbutton(dfwindow, text="useGreenMonitorEffects", variable=useGreenMonitorEffects, offvalue="false", onvalue="true", font=("Rubik", 12), fg="white", bg="#222222", activebackground="#222222", activeforeground="white", selectcolor="#222222")
useGreenMonitorEffectschk.place(x=560, y=260)
useGreenMonitorEffectschk.deselect()

useColorMonitorEffect = StringVar()
useColorMonitorEffectchk = tk.Checkbutton(dfwindow, text="useColorMonitorEffect", variable=useColorMonitorEffect, offvalue="false", onvalue="true", font=("Rubik", 12), fg="white", bg="#222222", activebackground="#222222", activeforeground="white", selectcolor="#222222")
useColorMonitorEffectchk.place(x=560, y=280)
useColorMonitorEffectchk.deselect()

genButton = Button(dfwindow,
                    text="Generate!",
                    font=("Rubik", 14),
                    fg="white",
                    bg="#222222",
                    command=genOut).pack(side=BOTTOM)

themeButton = Button(dfwindow,
                    text="Open Theme Instructions",
                    font=("Rubik", 14),
                    fg="white",
                    bg="#222222",
                    command=themeWindowCreate).place(x=300, y=80)
dfwindow.config(menu=menubar)
dfwindow.mainloop()
