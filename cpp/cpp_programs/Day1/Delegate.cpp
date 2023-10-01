class Point {
private:
    int x, y;
public:
    // Default constructor
    Point() {
        x = 0;
        y = 0;
    }

    // Constructor with one parameter
    Point(int x) : Point() { // Delegate to default constructor
        this->x = x;
    }

    // Constructor with two parameters
    Point(int x, int y) : Point(x) { // Delegate to one-parameter constructor
        this->y = y;
    }
};
