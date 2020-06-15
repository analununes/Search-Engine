from __future__ import print_function
import json
import re


for j in range (136):
    titulo = "newtxt/newtext_" + str(j)
    arquivo = open(titulo,"r",  encoding= "ISO-8859-15")
    textos = arquivo.readlines()
    a = 0
    idzinha = 0
    dicionario = " " 
    for texto in textos:
        if texto != "\n":
            ehtexto = False
            dicloc = {}
            palavras  = texto.split()
            if len(palavras)!=0:
                for i in range (len(palavras)-1):
                    if ehtexto == True:
                        if palavras[i] in dicloc:
                            pass
                        else:
                            ocorrencias = str(palavras.count(palavras[i]))
                            dicionario += " " + palavras[i] + " &" + ocorrencias
                            dicloc[palavras[i]] = ocorrencias
                    elif palavras[i] == "*":
                        dicionario += "* "
                        ehtexto = True
                        #print(a)
                        #a += 1
                    else:
                        idzinha = palavras[i]
                        dicionario += idzinha + " "
                    
        dicionario += "\n"
        #print(dicionario)
    di = "dicionarios/d_" + str(j)
    aux = open(di,'w')
    aux.write(dicionario)
    aux.close()
    print(di)