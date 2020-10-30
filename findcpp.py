import getpass
import json
import requests
import shutil
import subprocess
import sys
import os

def checkFlaky(slugs, pnumber):
    projects = []
    idx = 0
    for project in slugs:
        gitlink = 'https://github.com/' + project + '.git'
        # print("gitlink", gitlink)
        p = project.split('/')[1]
        rootPath = "/mnt2/majid/project/flaky/"
        folder = rootPath+p
        print("folder", folder)
        os.system("git clone "+gitlink)
        os.chdir(folder)
        if(not os.path.isfile("../"+str(pnumber)+"."+str(idx)+ "." +p+".flaky.txt")):
            os.system("git log --all --grep='flaky' > ../"+str(pnumber)+"."+str(idx)+ "." +p+".flaky.txt")
            os.system("git log --all --grep='flakey' > ../"+str(pnumber)+"."+str(idx)+ "."+ p+".flakey.txt")
            os.system("git log --all --grep='intermittent' > ../"+str(pnumber)+"."+str(idx)+ "."+ p+".intermittent.txt")
        os.chdir(rootPath)
        shutil.rmtree(folder)
        idx = idx+1
        

def main(args):
    uname = args[1] # Username
    out_file = args[2]
    passwd = getpass.getpass()

    # Get all the Cpp projects on GitHub
    slugs = []
    url = 'https://api.github.com/search/repositories?q=language:cpp&sort=stars&order=desc&per_page=100'
    for i in range(0, 10):
        print("page#", i)
        suffix = '&page=' + str(i)
        request = url + suffix
        response = requests.get(request, auth=(uname, passwd))
        if response.ok:
            data = json.loads(response.text)
            for k in data['items']:
                slugs.append(k['full_name'])
                # repo_name = k['name']
                # owner = k['owner']['login']  
                # repo_info = requests.get('https://api.github.com/repos/'+owner+'/'+repo_name)
                # stars = repo_info.json()['stargazers_count']
                # stars = repo_info.json()
                # print(repo_name)
                # print(stars)
        else:
            print("No response!", response)
            break
        print("Digging into the page", i)
        checkFlaky(slugs, i)
        slugs = []
        
        
        
        

    print ('ALL PROJECTS:', len(slugs))



if __name__ == '__main__':
    main(sys.argv)
