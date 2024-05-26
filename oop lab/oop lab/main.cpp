#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Pet {
private:
    string healthStatus;
    int hungerLevel;
    int happinessLevel;
    vector<string> specialSkills;
public:
    Pet(string healthStatus, int hungerLevel, int happinessLevel, vector<string> specialSkills) :
        healthStatus(healthStatus), hungerLevel(hungerLevel), happinessLevel(happinessLevel), specialSkills(specialSkills) {}
    void displayPetDetails() {
        cout << "Health Status: " << healthStatus << endl;
        cout << "Hunger Level: " << hungerLevel << endl;
        cout << "Happiness Level: " << happinessLevel << endl;
        cout << "Special Skills: ";
        for (const auto& skill : specialSkills) {
            cout << skill << ", ";
        }
        cout << endl;
    }
    void updateHappiness(int value) {
        happinessLevel += value;
        if (happinessLevel < 0) happinessLevel = 0;
        if (happinessLevel > 10) happinessLevel = 10;
    }
    void updateHealth(string status) {
        healthStatus = status;
    }
    void updateHunger(int value) {
        hungerLevel += value;
        if (hungerLevel < 0) hungerLevel = 0;
    }
};
class Adopter {
private:
    string adopterName;
    string adopterMobileNum;
    vector<Pet*> adoptedPetRecords;
public:
    Adopter(string name, string mobileNum) : adopterName(name), adopterMobileNum(mobileNum) {}
    void adoptPet(Pet* pet) {
        adoptedPetRecords.push_back(pet);
    }
    void returnPet(Pet* pet) {
        for (auto it = adoptedPetRecords.begin(); it != adoptedPetRecords.end(); ++it) {
            if (*it == pet) {
                adoptedPetRecords.erase(it);
                break;
            }
        }
    }
    void displayAdoptedPets() {
        cout << "Adopted Pets:" << endl;
        for (const auto& pet : adoptedPetRecords) {
            pet->displayPetDetails();
        }
    }
};
int main() {
    Pet dog("Healthy", 5, 5, {"Fetch", "Sit"});
    Pet cat("Sick", 8, 3, {"Purr", "Climb"});
    Adopter adopter("John Doe", "123-456-7890");
    adopter.adoptPet(&dog);
    adopter.adoptPet(&cat);
    adopter.displayAdoptedPets();
    dog.updateHunger(-1);
    dog.updateHappiness(1);
    dog.displayPetDetails();
    adopter.returnPet(&cat);
    adopter.displayAdoptedPets();
    return 0;
}
