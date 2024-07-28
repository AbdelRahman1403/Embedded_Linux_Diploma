#File Name : Alexa_voice_assistant.py
#The Author is : AbdelRahman Ahmed Yassin
# The Date Of The File : 2024-06-30

# importing speech recognition package from google api
import speech_recognition as sr 
from pydub import AudioSegment 
from datetime import date
from pydub.playback import play
import playsound # to play saved mp3 file
from gtts import gTTS # google text to speech
import os # to save/open files
import wolframalpha # to calculate strings into formula
import webbrowser
import sys

sys.path.insert(1,"/home/abdel-rahman-yassin/El_Ripo_dip")

import mk_files_with_python as mk

def listen_for_command():
    reco = sr.Recognizer()
    with sr.Microphone() as source:
        print("Speek ...")
        reco.adjust_for_ambient_noise(source)
        audio = reco.listen(source)

        try:
            command = reco.recognize_google(audio)
            print("You said : " , command)
            return command.lower()
        except sr.UnknownValueError:
               assistant_speak("Sorry , i don't understand what you say , try again.") 
               return None
    
def assistant_speak(text_in):
    print(text_in)
    text_in = gTTS(text= text_in , lang = "en")
    text_in.save("text_in.mp3")
    sound = AudioSegment.from_mp3("text_in.mp3")
    sound.export("text_in.wav" , format = "wav")
    play(sound)

def web_search(input):
    if "youtube" in input:
        assistant_speak("Open The YouTube")
        index = input.lower().split().index("youtube")
        query = input.split()[index + 1 :]
        webbrowser.open("https://www.youtube.com/results?search_query=" + '+'.join(query))
        return

def process_text(input):
    if "search" in input:
    	web_search(input)
    
    if "date" in input or "today" in input:
        assistant_speak(f"The Time Today is ",date.today())
if __name__ == '__main__':
    assistant_speak("Hello and welcome Sir , Do you have anything i can help it ?")
    while 1:
        text = listen_for_command()
        process_text(text)
