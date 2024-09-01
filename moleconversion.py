import math

running = True

# Moles to Grams and Grams to Moles
def gramsToMoles(grams, molemass):
    result = grams / molemass
    return result

def molesToGrams(moles, molemass):
    result = moles * molemass
    return result

# Moles to Molecules and Molecules to Moles
def molesToMolecule(moles):
    result = moles * (6.022 * 10 ** 23)
    return result

def moleculesToMoles(moleculeNumber, exponent):
    result = (moleculeNumber * (10 ** exponent)) / (6.02214076 * 10 ** 23)
    return result

# Molecules to Atoms and Atoms to Molecules
def moleculesToAtoms(moleculeNumber, numberOfAtoms, exponent):
    result = (moleculeNumber * 10 ** exponent) * numberOfAtoms
    return result

def atomsToMolecules(atomNumber, numberOfAtoms, exponent):
    result = (atomNumber * 10 ** exponent) / numberOfAtoms
    return result


while running:
    # Selection Printout
    print("AP Chemistry: Conversion Calculator")
    print("")
    print("Options:")
    print("1: Grams to Moles")
    print("2: Moles to Grams")
    print("3: Moles to Molecules")
    print("4: Molecules to Moles")
    print("5: Molecules to Atoms")
    print("6: Atoms to Molecules")
    print("7: Stop")
    print("")

    # User Selection
    selection = input("Selection: ")

    # After User Selection
    if selection == "1":
        grams = int(float(input("Grams: ")))
        molemass = int(float(input("Mole Mass (calculate from Periodic Table): ")))
        result = str(gramsToMoles(grams, molemass))
        print("Result: " + result)
        continue_choice = input("Do you want to continue? (y/n): ")
        if continue_choice.lower() != 'y':
            running = False

    elif selection == "2":
        moles = int(float(input("Moles: ")))
        molemass = int(float(input("Mole Mass (calculate from Periodic Table): ")))
        result = str(molesToGrams(moles, molemass))
        print("Result: " + result)
        continue_choice = input("Do you want to continue? (y/n): ")
        if continue_choice.lower() != 'y':
            running = False

    elif selection == "3":
        moles = int(float(input("Moles: ")))
        result = str(molesToMolecule(moles))
        print("Result: " + result)
        continue_choice = input("Do you want to continue? (y/n): ")
        if continue_choice.lower() != 'y':
            running = False

    elif selection == "4":
        moleculeNumber = int(float(input("Number of molecules: ")))
        exponent = int(float(input("Exponent: ")))
        result = str(moleculesToMoles(moleculeNumber, exponent))
        print("Result: " + result)
        continue_choice = input("Do you want to continue? (y/n): ")
        if continue_choice.lower() != 'y':
            running = False

    elif selection == "5":
        moleculeNumber = int(float(input("Number of molecules: ")))
        numberOfAtoms = int(float(input("Number of Atoms per molecule: ")))
        exponent = int(float(input("Exponent: ")))
        result = str(moleculesToAtoms(moleculeNumber, numberOfAtoms, exponent))
        print("Result: " + result)
        continue_choice = input("Do you want to continue? (y/n): ")
        if continue_choice.lower() != 'y':
            running = False

    elif selection == "6":
        atomNumber = int(float(input("Atoms: ")))
        numberOfAtoms = int(float(input("Number of Atoms per molecule: ")))
        exponent = int(float(input("Exponent: ")))
        result = str(atomsToMolecules(atomNumber, numberOfAtoms, exponent))
        print("Result: " + result)
        continue_choice = input("Do you want to continue? (y/n): ")
        if continue_choice.lower() != 'y':
            running = False

    elif selection == "7":
        print("Stopping the calculator.")
        running = False
    else:
        print("Invalid selection. Please try again.")