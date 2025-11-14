//
// Programmer: [Gael Garcia Guzman]
// Date:       [11/13/2025]
// Name: csci271_ticket_lab
//

#include "Show.h"

// TODO: Implement the 6 methods (3 getters, 3 setters) for the Show struct.
//
// Remember to use the scope resolution operator (Show::) for each method.
//
// --- Accessors (Getters) ---
// (e.g., std::string Show::getTitle() { ... })
    std::string Show::getTitle() {
        return title;
    }
int Show::getShowTime() {
        return showTime;
    }
std::string Show::getVenue() {
        return venue;
    }
//
//
// --- Mutators (Setters) ---
// (e.g., void Show::setTitle(std::string newTitle) { ... })
void Show::setTitle(std::string newTitle) {
        title = newTitle;
    }
void Show::setShowTime(int newShowTime) {
        showTime = newShowTime;
    }
void Show::setVenue(std::string newVenue) {
        venue = newVenue;
    }
//