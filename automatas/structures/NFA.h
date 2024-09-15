#ifndef NFA_H
#define NFA_H

#include <utility>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>

class NFA {
public:
    int num_states;
    std::vector<char> alphabet;
    std::vector<std::unordered_map<char, std::unordered_set<int>>> transition_function;
    int start_state;
    std::vector<int> accept_states;

    NFA(int num_states, std::vector<char> alphabet, int start_state)
            : num_states(num_states), alphabet(std::move(alphabet)), start_state(start_state) {
        transition_function.resize(num_states);
    }

    void add_transition(int from_state, char symbol, int to_state) {
        transition_function[from_state][symbol].insert(to_state);
    }

    void add_accept_state(int state) {
        accept_states.push_back(state);
    }
};

#endif