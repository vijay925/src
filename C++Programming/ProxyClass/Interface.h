class Implementation;

class Interface
{
  public:
    Interface(int v);
    int get_value();
    void set_value(int value_passed);
    ~Interface();

  private:
    Implementation *ptr;
};