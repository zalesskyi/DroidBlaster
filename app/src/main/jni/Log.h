namespace packt {
    class Log {
    public:
        static void error(const char* , ...);
        static void warn(const char* , ...);
        static void info(const char* , ...);
        static void debug(const char* , ...);
    };
}