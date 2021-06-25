#include <iostream>

using namespace std;



class Pizza
{
private:

protected:

    string name = "";
    string opisanie = "";
    unsigned short int rasm = 0;
    unsigned int coins = 0;
    unsigned short int nsalt = 0;
    unsigned short int mcheese = 0;


public:



    void razmsolseeer()
    {
        while ((this->rasm != 25) && (this->rasm != 30) && (this->rasm != 35) && (this->rasm != 40))
        {
            cout << "Введите размер пиццы 25, 30, 35, 40:" << endl;
            cin >> this->rasm;
         
        }
        cout << "Введите, сколько раз вы хотите посолить вашу пиццу (если не хотите добавлять, введите 0):" << endl;
        cin >> this->nsalt;
        cout << "Введите, сколько раз вы хотите добавить сыра в вашу пиццу (если не хотите добавлять, введите 0):" << endl;
        cin >> this->mcheese;
        costofpizza();


    }
    virtual int costofpizza() = 0;

    void write()
    {
        cout << endl;
        cout << "          ПИЦЦА" << endl;
        cout << endl;
        cout << "Название           : " << this->name << endl;
        cout << "Состав             : " << this->opisanie << endl;
        cout << "Размер             : " << this->rasm << endl;
        cout << "Порции сыра        : " << this->mcheese << endl;
        cout << "Порции соли        : " << this->nsalt << endl;
        cout << "Сумма для оплаты   : " << this->coins << endl;
        cout << "================================" << endl;
        cout << endl;
    }

    std::string getname()
    {
        return this->name;
    }
    std::string getdescription()
    {
        return this->opisanie;
    }
    unsigned short int getsizep()
    {
        return this->rasm;
    }
    unsigned int getcost()
    {
        return this->coins;
    }
    unsigned short int getnsalt()
    {
        return this->nsalt;
    }
    unsigned short int getmcheese()
    {
        return this->mcheese;
    }


};

class PizzaMargherita : public Pizza
{
private:


public:

    PizzaMargherita()
    {
        this->name = "Пицца «Маргарита»";
        this->opisanie = "Томатный соус, моцарелла и орегано";
        razmsolseeer();
    }

    int costofpizza() override
    {
        this->coins = 200 + (2 * this->rasm) + (this->rasm * this->nsalt) + (2 * this->rasm * this->mcheese);
        cout << "Стоимость вашей пиццы = " << this->coins;
        return this->coins;
    }

protected:

};
class PizzaMarinara : public Pizza
{
private:


public:

    PizzaMarinara()
    {
        this->name = "Пицца «Маринара»";
        this->opisanie = "Томатный соус, чеснок и базилик.";
        razmsolseeer();
    }

    int costofpizza() override
    {
        this->coins = 250 + this->rasm + 2 * this->rasm * this->nsalt + this->rasm * this->mcheese;
        cout << "Стоимость вашей пиццы = " << this->coins;
        return this->coins;
    }

protected:

};
class PizzaQuattroStagioni : public Pizza
{
private:


public:

    PizzaQuattroStagioni()
    {
        this->name = "Пицца «Четыре сезона»";
        this->opisanie = "Томатный соус, моцарелла, грибы, ветчина, артишоки, оливки и орегано.";
        razmsolseeer();
    }

    int costofpizza() override
    {
        this->coins = 225 + this->rasm * 5 + this->rasm * (this->nsalt + this->mcheese);
        cout << "Стоимость вашей пиццы = " << this->coins;
        return this->coins;
    }

protected:

};
class PizzaCarbonara : public Pizza
{
private:


public:

    PizzaCarbonara()
    {
        this->name = "Пицца «Карбонара»";
        this->opisanie = "Томатный соус, моцарелла, пармезан, яйца, бекон.";
        razmsolseeer();
    }

    int costofpizza() override
    {
        this->coins = 275 + this->rasm * 5 + 2 * (this->rasm + this->nsalt) + 2 * (this->rasm + this->mcheese);
        cout << "Стоимость вашей пиццы = " << this->coins;
        return this->coins;
    }

protected:

};
class PizzaFruttidiMare : public Pizza
{
private:


public:

    PizzaFruttidiMare()
    {
        this->name = "Пицца с морепродуктами";
        this->opisanie = "Томатный соус и морепродукты.";
        razmsolseeer();
    }

    int costofpizza() override
    {
        this->coins = this->rasm * 15 + 2 * (this->rasm + this->nsalt) + 2 * (this->rasm + this->mcheese) + 2 * (this->rasm + this->nsalt + this->mcheese);
        cout << "Стоимость вашей пиццы = " << this->coins;
        return this->coins;
    }

protected:

};
class PizzaQuattroFormaggi : public Pizza
{
private:


public:

    PizzaQuattroFormaggi()
    {
        this->name = "Пицца «Четыре сыра»";
        this->opisanie = "Томатный соус, моцарелла, пармезан, сыр горгонзола, артишоки и орегано.";
        razmsolseeer();
    }

    int costofpizza() override
    {
        this->coins = this->rasm * 10 + 2 * (this->rasm + this->nsalt) + 2 * (this->rasm + this->mcheese) + 2 * (this->rasm + this->nsalt + this->mcheese);
        cout << "Стоимость вашей пиццы = " << this->coins;
        return this->coins;
    }

protected:

};
class PizzaCrudo : public Pizza
{
private:


public:

    PizzaCrudo()
    {
        this->name = "Пицца «Крудо»";
        this->opisanie = "Томатный соус, моцарелла и пармская ветчина.";
        razmsolseeer();
    }

    int costofpizza() override
    {
        this->coins = this->rasm * 8 + 2 * (this->rasm + this->nsalt) + 2 * (this->rasm + this->mcheese) + 2 * (this->rasm + this->nsalt + this->mcheese);
        cout << "Стоимость вашей пиццы = " << this->coins;
        return this->coins;
    }

protected:

};
class PizzaNapoletana : public Pizza
{
private:


public:

    PizzaNapoletana()
    {
        this->name = "Пицца «Неаполетано»";
        this->opisanie = "Томатный соус, моцарелла, орегано, анчоусы.";
        razmsolseeer();
    }

    int costofpizza() override
    {
        this->coins = this->rasm * 11 + 2 * (this->rasm + this->nsalt) + 2 * (this->rasm + this->mcheese) + 2 * (this->rasm + this->nsalt + this->mcheese);
        cout << "Стоимость вашей пиццы = " << this->coins;
        return this->coins;
    }

protected:

};

struct PizzaInfo
{
    string name = "";
    string description = "";
    unsigned short int sizep = 0;
    unsigned int cost = 0;
    unsigned short int nsalt = 0;
    unsigned short int mcheese = 0;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    int tippizza = -1;
    int variantotveta = -1;
    int i = 0;
    PizzaInfo pizzacount[100];

    while (variantotveta != 2)
    {
    while ((variantotveta != 1) && (variantotveta != 2) && (variantotveta != 3))
    {
            cout << "Выберите действие. Введите:" << endl;
            cout << " 1 Заказать питццу" << endl;
            cout << " 2 Уйти" << endl;
            
            cin >> variantotveta;
           
        }
        if (variantotveta == 1)
        {

            while ((tippizza != 1) && (tippizza != 2) && (tippizza != 3) && (tippizza != 4) && (tippizza != 5)&&(tippizza != 6) && (tippizza != 7) && (tippizza != 8))
            {
                cout << "Выберите тип пиццы. Введите:" << endl;
                cout << " 1 Пицца «Маргарита»"<<  endl;
                cout << " 2 Пицца «Маринара»" << endl;
                cout << " 3 Пицца «Четыре сезона»" << endl;
                cout << " 4 Пицца «Карбонара»" << endl;
                cout << " 5 Пицца с морепродуктами " << endl;
            
                cout << " 6 Пицца «Четыре сыра»" << endl;
                cout << " 7 Пицца «Крудо»" << endl;
                cout << " 8 Пицца «Неаполетано»" << endl;
               
                cin >> tippizza;
                if ((tippizza != 1) && (tippizza != 2) && (tippizza != 3) && (tippizza != 4) && (tippizza != 5) && (tippizza != 6) && (tippizza != 7) && (tippizza != 8) && (tippizza != 9) && (tippizza != 10))
                {
                    cout << "Вы что-то не то ввели. Попробуйте снова..." << endl;
                }
            }
            if (tippizza == 1)
            {
                Pizza* P1 = new PizzaMargherita();
                pizzacount[i].name = P1->getname();
                pizzacount[i].description = P1->getdescription();
                pizzacount[i].cost = P1->getcost();
                pizzacount[i].mcheese = P1->getmcheese();
                pizzacount[i].nsalt = P1->getnsalt();
                pizzacount[i].sizep = P1->getsizep();
                cout << " Отлично! Вы добавили новую пиццу..." << endl;
                P1->write();
                delete P1;
                ++i;
            }
            if (tippizza == 2)
            {
                Pizza* P1 = new PizzaMarinara();
                pizzacount[i].name = P1->getname();
                pizzacount[i].description = P1->getdescription();
                pizzacount[i].cost = P1->getcost();
                pizzacount[i].mcheese = P1->getmcheese();
                pizzacount[i].nsalt = P1->getnsalt();
                pizzacount[i].sizep = P1->getsizep();
                cout << " Отлично! Вы добавили новую пиццу..." << endl;
                P1->write();
                delete P1;
                ++i;
            }
            if (tippizza == 3)
            {
                Pizza* P1 = new PizzaQuattroStagioni();
                pizzacount[i].name = P1->getname();
                pizzacount[i].description = P1->getdescription();
                pizzacount[i].cost = P1->getcost();
                pizzacount[i].mcheese = P1->getmcheese();
                pizzacount[i].nsalt = P1->getnsalt();
                pizzacount[i].sizep = P1->getsizep();
                cout << " Отлично! Вы добавили новую пиццу..." << endl;
                P1->write();
                delete P1;
                ++i;
            }
            if (tippizza == 4)
            {
                Pizza* P1 = new PizzaCarbonara();
                pizzacount[i].name = P1->getname();
                pizzacount[i].description = P1->getdescription();
                pizzacount[i].cost = P1->getcost();
                pizzacount[i].mcheese = P1->getmcheese();
                pizzacount[i].nsalt = P1->getnsalt();
                pizzacount[i].sizep = P1->getsizep();
                cout << " Отлично! Вы добавили новую пиццу..." << endl;
                P1->write();
                delete P1;
                ++i;
            }
            if (tippizza == 5)
            {
                Pizza* P1 = new PizzaFruttidiMare();
                pizzacount[i].name = P1->getname();
                pizzacount[i].description = P1->getdescription();
                pizzacount[i].cost = P1->getcost();
                pizzacount[i].mcheese = P1->getmcheese();
                pizzacount[i].nsalt = P1->getnsalt();
                pizzacount[i].sizep = P1->getsizep();
                cout << " Отлично! Вы добавили новую пиццу..." << endl;
                P1->write();
                delete P1;
                ++i;
            }
            if (tippizza == 6)
            {
                Pizza* P1 = new PizzaQuattroFormaggi();
                pizzacount[i].name = P1->getname();
                pizzacount[i].description = P1->getdescription();
                pizzacount[i].cost = P1->getcost();
                pizzacount[i].mcheese = P1->getmcheese();
                pizzacount[i].nsalt = P1->getnsalt();
                pizzacount[i].sizep = P1->getsizep();
                cout << " Отлично! Вы добавили новую пиццу..." << endl;
                P1->write();
                delete P1;
                ++i;
            }
            if (tippizza == 7)
            {
                Pizza* P1 = new PizzaCrudo();
                pizzacount[i].name = P1->getname();
                pizzacount[i].description = P1->getdescription();
                pizzacount[i].cost = P1->getcost();
                pizzacount[i].mcheese = P1->getmcheese();
                pizzacount[i].nsalt = P1->getnsalt();
                pizzacount[i].sizep = P1->getsizep();
                cout << " Отлично! Вы добавили новую пиццу..." << endl;
                P1->write();
                delete P1;
                ++i;
            }
            if (tippizza == 8)
            {
                Pizza* P1 = new PizzaNapoletana();
                pizzacount[i].name = P1->getname();
                pizzacount[i].description = P1->getdescription();
                pizzacount[i].cost = P1->getcost();
                pizzacount[i].mcheese = P1->getmcheese();
                pizzacount[i].nsalt = P1->getnsalt();
                pizzacount[i].sizep = P1->getsizep();
                cout << " Отлично! Вы добавили новую пиццу..." << endl;
                P1->write();
                delete P1;
                ++i;
            }
            tippizza = -1;
            variantotveta = -1;

            cout << endl;
        
        }
        
    }

    if (i > 0)
    {

        cout << "______________________________________" << endl;
        cout << "          СПИСОК ПИЦЦ :     " << endl << endl;
        unsigned long res = 0;
        for (int j = 0; j < i; ++j)
        {
            cout << endl;
            cout << " ПИЦЦА НОМЕР " << j + 1 << " : " << endl;
            cout << endl;
            cout << "Название           : " << pizzacount[j].name << endl;
            cout << "Описание           : " << pizzacount[j].description << endl;
            cout << "Размер             : " << pizzacount[j].sizep << endl;
            cout << "Раз посолено       : " << pizzacount[j].nsalt << endl;
            cout << "Раз добавлено сыра : " << pizzacount[j].mcheese << endl;
            cout << "Стоимость          : " << pizzacount[j].cost << endl;
            cout << "++++++++++++++++++++++++++++++++++++" << endl;
            cout << endl;
            res = res + pizzacount[j].cost;
        }
        cout << endl;
        cout << "ИТОГОВАЯ СТОИМОСТЬ ВСЕГО ЗАКАЗА: " << res << endl << endl << endl;
        cout << "================================" << endl;
    }
    else
    {
        cout << "Ваш список пуст. Досвидания" << endl;
    }
    return 0;
}
