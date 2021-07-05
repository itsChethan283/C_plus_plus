#pragma "once"
namespace cubes{
    class cube{
        public:
            double getvolume();
            double getsurfacearea();
            void setlength(double length);
        private:
            double length_;
    };
}
