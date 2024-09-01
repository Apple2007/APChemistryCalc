#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

// Function to convert grams to moles
double gramsToMoles(double grams, double molemass) {
    return grams / molemass;
}

// Function to convert moles to grams
double molesToGrams(double moles, double molemass) {
    return moles * molemass;
}

// Function to convert moles to molecules
double molesToMolecules(double moles) {
    const double avogadro_number = 6.022e23;
    return moles * avogadro_number;
}

// Function to convert molecules to moles
double moleculesToMoles(double moleculeNumber, int exponent) {
    const double avogadro_number = 6.022e23;
    return (moleculeNumber * pow(10, exponent)) / avogadro_number;
}

// Function to convert molecules to atoms
double moleculesToAtoms(double moleculeNumber, int numberOfAtoms, int exponent) {
    return (moleculeNumber * pow(10, exponent)) * numberOfAtoms;
}

// Function to convert atoms to molecules
double atomsToMolecules(double atomNumber, int numberOfAtoms, int exponent) {
    return (atomNumber * pow(10, exponent)) / numberOfAtoms;
}

int main() {
    bool running = true;
    while (running) {
        // Selection Printout
        cout << "AP Chemistry: Conversion Calculator\n";
        cout << "\nOptions:\n";
        cout << "1: Grams to Moles\n";
        cout << "2: Moles to Grams\n";
        cout << "3: Moles to Molecules\n";
        cout << "4: Molecules to Moles\n";
        cout << "5: Molecules to Atoms\n";
        cout << "6: Atoms to Molecules\n";
        cout << "7: Stop\n";
        cout << "\n";

        // User Selection
        int selection;
        cout << "Selection: ";
        cin >> selection;

        // Handle User Selection
        if (selection == 1) {
            double grams, molemass;
            cout << "Grams: ";
            cin >> grams;
            cout << "Mole Mass (calculate from Periodic Table): ";
            cin >> molemass;
            cout << "Result: " << gramsToMoles(grams, molemass) << "\n";
        } else if (selection == 2) {
            double moles, molemass;
            cout << "Moles: ";
            cin >> moles;
            cout << "Mole Mass (calculate from Periodic Table): ";
            cin >> molemass;
            cout << "Result: " << molesToGrams(moles, molemass) << "\n";
        } else if (selection == 3) {
            double moles;
            cout << "Moles: ";
            cin >> moles;
            cout << "Result: " << molesToMolecules(moles) << "\n";
        } else if (selection == 4) {
            double moleculeNumber;
            int exponent;
            cout << "Number of molecules: ";
            cin >> moleculeNumber;
            cout << "Exponent: ";
            cin >> exponent;
            cout << "Result: " << moleculesToMoles(moleculeNumber, exponent) << "\n";
        } else if (selection == 5) {
            double moleculeNumber;
            int numberOfAtoms, exponent;
            cout << "Number of molecules: ";
            cin >> moleculeNumber;
            cout << "Number of Atoms per molecule: ";
            cin >> numberOfAtoms;
            cout << "Exponent: ";
            cin >> exponent;
            cout << "Result: " << moleculesToAtoms(moleculeNumber, numberOfAtoms, exponent) << "\n";
        } else if (selection == 6) {
            double atomNumber;
            int numberOfAtoms, exponent;
            cout << "Atoms: ";
            cin >> atomNumber;
            cout << "Number of Atoms per molecule: ";
            cin >> numberOfAtoms;
            cout << "Exponent: ";
            cin >> exponent;
            cout << "Result: " << atomsToMolecules(atomNumber, numberOfAtoms, exponent) << "\n";
        } else if (selection == 7) {
            cout << "Stopping the calculator.\n";
            running = false;
        } else {
            cout << "Invalid selection. Please try again.\n";
        }

        if (selection != 7) {
            string continue_choice;
            cout << "Do you want to continue? (y/n): ";
            cin >> continue_choice;
            if (continue_choice != "y" && continue_choice != "Y") {
                running = false;
            }
        }
    }
    return 0;
}