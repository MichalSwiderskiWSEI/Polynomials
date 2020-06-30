#pragma once

class Equation
{
public:
    std::list<EquationNode> factors;
public:
    explicit Equation(const  std::list<EquationNode>& factors);
    static bool checkNameOfEquation(char name);
    double calculate(double a);
    Equation* add(const Equation& another);
    Equation* multiply(const Equation& another);
    Equation* substract(const Equation& another);
    Equation* derivative();

    friend std::ostream& operator<<(std::ostream& o, const Equation& e) {
        int listSize = e.factors.size(); // sprawdza  czy jest to osatani factor z listy, jesli tak to wyswietla bez +
        int listCounter = 1;
        for (auto factor : e.factors) {
            if (listCounter == 1)
            {
                if (factor.getPower() == 0) {
                    if (factor.getBase() == 1 || factor.getBase() == -1)
                    {
                        if (factor.getBase() == -1)
                        {
                            o << "-" << std::endl;
                        }
                        else
                        {
                            o << std::endl;
                        }
                        std::cout << "--------------------" << std::endl;
                    }
                    else
                    {
                        o << factor.getBase() << std::endl;
                        std::cout << "--------------------" << std::endl; //ZMIANA
                    }
                    listCounter++;
                }
                else if (factor.getPower() == 1)
                {
                    if (listCounter < listSize)
                    {
                        if (factor.getBase() == 1 || factor.getBase() == -1)
                        {
                            if (factor.getBase() == -1)
                            {
                                o << "-x";
                            }
                            else
                            {
                                o << "x";
                            }
                        }
                        else
                        {
                            o << factor.getBase() << "x";
                        }
                        listCounter++; // +++
                    }
                    else
                    {
                        if (factor.getBase() == 1 || factor.getBase() == -1)
                        {
                            if (factor.getBase() == -1)
                            {
                                o << "-x";
                                std::cout << std::endl;
                                std::cout << "--------------------" << std::endl;
                            }
                            else
                            {
                                o << "x";
                                std::cout << std::endl;
                                std::cout << "--------------------" << std::endl;
                            }
                        }
                        else
                        {
                            o << factor.getBase() << "x";
                            std::cout << std::endl;
                            std::cout << "--------------------" << std::endl;
                        }
                        listCounter++;
                    }
                }
                else
                {
                    if (listCounter < listSize)
                    {
                        if (factor.getBase() == 1 || factor.getBase() == -1)
                        {
                            if (factor.getBase() == -1)
                            {
                                o << "-x^" << factor.getPower();
                            }
                            else
                            {
                                o << "x^" << factor.getPower();
                            }
                        }
                        else
                        {
                            o << factor.getBase() << "x^" << factor.getPower();
                        }
                        listCounter++;
                    }
                    else
                    {
                        if (factor.getBase() == 1 || factor.getBase() == -1)
                        {
                            if (factor.getBase() == -1)
                            {
                                o << "-x^" << factor.getPower();
                                std::cout << std::endl;
                                std::cout << "--------------------" << std::endl;
                            }
                            else
                            {
                                o << "x^" << factor.getPower();
                                std::cout << std::endl;
                                std::cout << "--------------------" << std::endl;
                            }
                        }
                        else
                        {
                            o << factor.getBase() << "x^" << factor.getPower();
                            std::cout << std::endl;
                            std::cout << "--------------------" << std::endl;
                        }
                        listCounter++; // +++
                    }
                }
            }
            else
            {
                if (factor.getPower() == 0)
                {
                    if (factor.getBase() > 0)
                    {
                        if (factor.getBase() == 1 || factor.getBase() == -1)
                        {
                            if (factor.getBase() == -1)
                            {
                                o << "-" << std::endl;
                            }
                            else
                            {
                                o << "+" << std::endl;
                            }
                        }
                        else
                        {
                            o << "+" << factor.getBase() << std::endl;
                        }
                    }
                    else
                    {
                        o << factor.getBase() << std::endl;
                    }
                    std::cout << "--------------------" << std::endl; //ZMIANA
                    listCounter++; // +++
                }
                else if (factor.getPower() == 1)
                {
                    if (listCounter < listSize)
                    {
                        if (factor.getBase() > 0)
                        {
                            if (factor.getBase() == 1 || factor.getBase() == -1)
                            {
                                if (factor.getBase() == -1)
                                {
                                    o << "-x";
                                }
                                else
                                {
                                    o << "+x";
                                }
                            }
                            else
                            {
                                o << "+" << factor.getBase() << "x";
                            }
                        }
                        else
                        {
                            o << factor.getBase() << "x";
                        }
                        listCounter++;
                    }
                    else
                    {
                        if (factor.getBase() == 1 || factor.getBase() == -1)
                        {
                            if (factor.getBase() == -1)
                            {
                                o << "-x"; // << "+"
                                std::cout << std::endl;
                                std::cout << "--------------------" << std::endl;
                            }
                            else
                            {
                                o << "+x"; // << "+"
                                std::cout << std::endl;
                                std::cout << "--------------------" << std::endl;
                            }
                        }
                        else
                        {
                            o << "+" << factor.getBase() << "x"; // << "+"
                            std::cout << std::endl;
                            std::cout << "--------------------" << std::endl;
                        }
                        listCounter++; // +++ 2x+4x
                    }
                }
                else
                {
                    if (listCounter < listSize)
                    {
                        if (factor.getBase() > 0)
                        {
                            if (factor.getBase() == 1 || factor.getBase() == -1)
                            {
                                if (factor.getBase() == -1)
                                {
                                    o << "-x^" << factor.getPower();
                                }
                                else
                                {
                                    o << "+x^" << factor.getPower();
                                }
                            }
                            else
                            {
                                o << "+" << factor.getBase() << "x^" << factor.getPower();
                            }
                        }
                        else
                        {
                            if (factor.getBase() == 1 || factor.getBase() == -1)
                            {
                                if (factor.getBase() == -1)
                                {
                                    o << "-x^" << factor.getPower();
                                }
                                else
                                {
                                    o << "x^" << factor.getPower();
                                }
                            }
                            else
                            {
                                o << factor.getBase() << "x^" << factor.getPower();
                            }
                        }
                        listCounter++;
                    }
                    else
                    {
                        if (factor.getBase() < 0)
                        {
                            o << factor.getBase() << "x^" << factor.getPower();
                            std::cout << std::endl;
                            std::cout << "--------------------" << std::endl;
                        }
                        else
                        {
                            if (factor.getBase() == 1 || factor.getBase() == -1)
                            {
                                if (factor.getBase() == -1)
                                {
                                    o << "-x^" << factor.getPower();
                                    std::cout << std::endl;
                                    std::cout << "--------------------" << std::endl;
                                }
                                else
                                {
                                    o << "+x^" << factor.getPower();
                                    std::cout << std::endl;
                                    std::cout << "--------------------" << std::endl;
                                }
                            }
                            else {
                                o << "+" << factor.getBase() << "x^" << factor.getPower();
                                std::cout << std::endl;
                                std::cout << "--------------------" << std::endl;
                            }
                        }
                        listCounter++;
                    }
                }
            }
        }
        listCounter = 1;
        return o;
    }
};
