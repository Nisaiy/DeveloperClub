
class geometIterator {
    private:
        int FirstMember;
        int Step;
        int Lengs;
        int current;
    public:
        geometIterator(int FirstMember, int Step, int Lengs) : FirstMember(FirstMember), Step(Step), Lengs(Lengs), current(0)
        {}

        void next() {
            if ( over() ) {
                return;
            }
            FirstMember*=Step;
            current += 1;
        }
    

        bool over(){
            return current >= Lengs;
        }

        void operator ++ () {
            next();
        }
        void operator ++(int) {
            operator++();
        }

        int value () {
            return FirstMember;
        }

        int operator * () {
            return value();
        }
};