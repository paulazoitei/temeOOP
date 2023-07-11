// Constructor de copiere
Exemplu(const Exemplu& other) : numar_(other.numar_) {
    nume_ = new char[strlen(other.nume_) + 1];
    strcpy(nume_, other.nume_);
}

// Constructor de mutare
Exemplu(Exemplu&& other) noexcept : nume_(other.nume_), numar_(other.numar_) {
    other.nume_ = nullptr;
    other.numar_ = 0;
}

// Destructor
~Exemplu() {
    delete[] nume_;
}

// Operatorul de atribuire
Exemplu& operator=(const Exemplu& other) {
    if (this != &other) {
        numar_ = other.numar_;
        delete[] nume_;
        nume_ = new char[strlen(other.nume_) + 1];
        strcpy(nume_, other.nume_);
    }
    return *this;
}
// Operatorul de mutare
Exemplu& operator=(Exemplu&& other) noexcept {
    if (this != &other) {
        delete[] nume_;
        nume_ = other.nume_;
        numar_ = other.numar_;
        other.nume_ = nullptr;
        other.numar_ = 0;
    }
    return *this;
}

A(const A& a) { x = a.x; y = a.y; }// constructor copiere
A& operator = (A& a) { x = a.x; y = a.y; return *this; }// operator de atribuire