import os
def menu():


os.system('clear') 
        print("Selecciona una opción")
        print("\t1 - primera opción")
        print("\t2 - segunda opción")
        print("\t3 - tercera opción")
        print("\t9 - salir")
def pelicula():
 
 print("La pelicula de hoy es:Joker" )
 comida()



def comida():
 
 print("Combos comida" )
while True:

menu()

opcionMenu = input("Presiona un digito ")

if opcionMenu=="1":
    print("Seleccionó pelicula")
    input("Has pulsado la opción 1...\npulsa una tecla para continuar")
elif opcionMenu=="2":
    print("")
        pelicula()
input("Has pulsado la opción 2...\npulsa una tecla para continuar")
    elif opcionMenu=="3":
        print("")
input("Has pulsado la opción 3...\npulsa una tecla para continuar")
        elif opcionMenu=="9":
        break
else:
    print("")
input("no se digitó ninguna opcion...\npulsa una tecla para continuar")