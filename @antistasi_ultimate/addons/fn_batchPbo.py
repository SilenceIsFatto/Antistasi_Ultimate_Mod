import os
import subprocess
import time

addonbuilder = "F:\SteamLibrary\steamapps\common\Arma 3 Tools\AddonBuilder"

in_path = "G:\Github Repos\Antistasi_Ultimate_Mod"
out_path = "G:\Github Repos\Antistasi_Ultimate_Mod\@antistasi_ultimate\\addons"

def packAllPbo(addonbuilder,in_path,out_path):

    directories = os.walk(f"{in_path}")
    dirpath, dirnames, filenames = next(directories)

    #for i in range(len(dirnames)):
    for folder in os.listdir(in_path):
        isFile = os.path.isfile(f"{folder}")
        notAllowed = ["@", ".git", ".vscode"]
        #reiterate through the notAllowed extensions or keywords, stops things like mod folders being packed
        for folderName in notAllowed:
            if (folderName in str(folder)):
                isFile = True

        if (isFile == False):
            subprocess.call([f"{addonbuilder}\AddonBuilder.exe", f"{in_path}/{folder}", out_path, "-clear", "-temp", "-binarizeNoLogs", f"-include={in_path}/include.txt"]) # use the include.txt
        else:
            print(f"{folder} was aborted")

packAllPbo(addonbuilder, in_path, out_path)