#include <iostream>

void printme(char *msg)
{
        std::cout << msg;
}

class foobar {
public:
        foobar() {}
        void print() {
                printme(this->text);
        }
        void settext(char *msg) {
                this->text = msg;
        }
private:
        char *text;
};

int main()
{
        foobar foo = foobar();
        foo.settext("Hello, world\n");
        foo.print();
}
