#ifndef DFA_H
#define DFA_H

#include <utility>
#include <vector>
#include <unordered_map>
#include <string>

class DFA {
public:
    int num_states;
    std::vector<char> alphabet;
    std::vector<std::unordered_map<char, int>> transition_function;
    int start_state;
    std::vector<int> accept_states;

    DFA(int num_states, std::vector<char> alphabet, int start_state)
            : num_states(num_states), alphabet(std::move(alphabet)), start_state(start_state) {
        transition_function.resize(num_states);
    }

    void add_transition(int from_state, char symbol, int to_state) {
        transition_function[from_state][symbol] = to_state;
    }

    void add_accept_state(int state) {
        accept_states.push_back(state);
    }
};

#endif