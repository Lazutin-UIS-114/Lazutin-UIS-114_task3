/**
* \brief Класс Pair для представления пары двух вещественных чисел
*/
class Pair {
protected:
    double first_, second_; // первое и второе числа
public:
    /**
    * \brief конструктор пары, принимающий два вещественных числа
    */
    Pair(const double& first, const double& second) : first_(first), second_(second) {}
    
      /**
    * \brief получение первого числа пары
    */
    double First();
    
      /**
    * \brief получение второго числа пары
    */
    double Second();
    
      /**
    * \brief перегруженный оператор сложения двух пар
    */
    friend Pair operator+(const Pair& lhs, const Pair& rhs);
    
      /**
    * \brief перемножение первого и второго числа пары
    */
    double multiply();
};

/**
* \brief Класс Complex для представления комплексного числа
*/
class Complex : public Pair{
public: 
    /**
    * \brief конструктор комплексного числа 0
    */
    Complex() : Pair(0, 0) {}
    
    /**
    * \brief конструктор комплексного числа, принимающий два вещественных числа(вещ. и мнимую части)
    */
    Complex(const double& re, const double& im) : Pair(re, im){}
    
     /**
    * \brief конструктор комплексного числа, принимающий пару вещественных чисел
    */
    Complex(const Pair& data) : Pair(data) {}
    
    /**
    * \brief перегруженный оператор умножения двух вещественных чисел
    */
    friend Complex operator*(const Complex& lhs, const Complex& rhs);
    
    /**
    * \brief перегруженный оператор вычитания двух вещественных чисел
    */
    friend Complex operator-(const Complex& lhs, const Complex& rhs);
    
    /**
    * \brief получение вещественной части
    */
    double Re();
    
    /**
    * \brief получение мнимой части
    */
    double Im();
};
