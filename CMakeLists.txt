cmake_minimum_required(VERSION 4.0)
project(csci271_ticket_lab)

set(CMAKE_CXX_STANDARD 20)

add_executable(csci271_ticket_lab main.cpp
        Ticket.h
        show.cpp
        show.h)
