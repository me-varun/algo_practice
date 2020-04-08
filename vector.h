class Vector{
    int cs;
    int ms;
    int *arr;
public:
    Vector(){
    cs=0;
    ms=1;
    arr = new int[ms];
    }
    void push_back(const int e){


        if (cs ==ms){
            int *narr = arr;
            arr = new int [2*ms];
            for(int i=0 ; i<ms ; i++)
                arr[i] =narr[i];

            ms*=2;
            delete [] narr;
        }
        arr[cs] =e;
        cs++;
    }
    void pop_back() {
        cs--;
    }
    int  front() const{
        return 0;
        }

    int end() const{
    return (cs-1);}

    bool empty() const{
    return (cs==0);
    }
    int  capacity() const{
    return ms;
    }
    int size() const{
    return cs-1;}

    int operator[] (const int i){
    return arr[i];}
};
