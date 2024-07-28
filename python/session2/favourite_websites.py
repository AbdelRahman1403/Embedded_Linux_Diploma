import webbrowser
linkidin_url = "www.linkedin.com/in/moatasem-el-sayed"
facebook_url = "https://www.facebook.com/geeksforgeeks.org/"
YouTube_url = "https://www.youtube.com/@moatasemelsayed6226"

def open_in_Firefox(website):
    if website in linkidin_url:
        webbrowser.get('firefox').open(linkidin_url) 
    elif website in facebook_url:
        webbrowser.get('firefox').open(facebook_url) 
    elif website in YouTube_url:
        webbrowser.get('firefox').open(YouTube_url) 
