
class factorialIterator {
    private:
        int end;
        int temp;
        int current;
    public:
        factorialIterator( int end ) : end(end), current(1), temp(1)
        {}

        void next() {
            if ( over() ) {
                return;
            }
            current += 1;
            temp *= current;
        }
    

        bool over(){
            return current > end;
        }

        void operator ++ () {
            next();
        }
        void operator ++(int) {
            operator++();
        }

        int value () {
            return temp;
        }

        int operator * () {
            return value();
        }
};