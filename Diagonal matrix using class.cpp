class Diagonal
{
private:
    int *a;
    int n;
    
public:
    Diagonal()
    {
        n = 2;
        a = new int[2];
    }
    Diagonal(int n)
    {
        this->n = n;
        a = new int[n];
    }
    ~Diagonal()
    {
        delete []a;
    }
    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
    int getdimension() {return n;}
};

void Diagonal::set(int i, int j, int x)
{
    if (i == j)
        a[i-1] = x;
}

int Diagonal::get(int i, int j)
{
   if (i == j)
    return a[i-1];
   else
    return 0;
}

void Diagonal::display()
{
    for (int i = 1; i<n ; i++)
    {
        for (int j = 1; j<n; j++)
        {
            if(i==j)
                cout << a[i-1] << " ";
            else
                cout<< "0" << " ";
        }
        cout << endl;
    }
}

int main()
{
    Diagonal dm(3);
    dm.set(1,1,5);
    dm.set(2,2,6);
    
    dm.display();
    
    return 0;
}
