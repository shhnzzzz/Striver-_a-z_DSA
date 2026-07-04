#include <iostream>
#include <vector>
using namespace std;

struct Point {
    float x, y, z;
    Point() {}
    Point(float px, float py, float pz) : x(px), y(py), z(pz) {}
};

struct Box {
    float xmin, ymin, zmin;
    float xmax, ymax, zmax;

    bool contains(const Point &p) const {
        return (p.x >= xmin && p.x <= xmax &&
                p.y >= ymin && p.y <= ymax &&
                p.z >= zmin && p.z <= zmax);
    }

    Point mid() const {
        return Point((xmin + xmax) / 2.0f,
                     (ymin + ymax) / 2.0f,
                     (zmin + zmax) / 2.0f);
    }
};

class Octree {
    static const int MAX_POINTS = 1;
    bool divided;
    Box boundary;
    vector<Point> points;
    Octree* children[8];

public:
    Octree(Box b) : boundary(b), divided(false) {
        for (int i = 0; i < 8; i++)
            children[i] = NULL;
    }

    ~Octree() {
        for (int i = 0; i < 8; i++)
            delete children[i];
    }

    bool insert(const Point &p) {
        if (!boundary.contains(p))
            return false;

        if (!divided && points.size() < MAX_POINTS) {
            points.push_back(p);
            return true;
        }

        if (!divided)
            subdivide();

        for (int i = 0; i < 8; i++)
            if (children[i]->insert(p))
                return true;

        return false;
    }

    bool find(const Point &p) {
        if (!boundary.contains(p))
            return false;

        for (int i = 0; i < points.size(); i++)
            if (points[i].x == p.x &&
                points[i].y == p.y &&
                points[i].z == p.z)
                return true;

        if (!divided)
            return false;

        for (int i = 0; i < 8; i++)
            if (children[i]->find(p))
                return true;

        return false;
    }

private:
    void subdivide() {
        divided = true;
        Point m = boundary.mid();

        children[0] = new Octree(Box{boundary.xmin, boundary.ymin, boundary.zmin, m.x, m.y, m.z});
        children[1] = new Octree(Box{m.x, boundary.ymin, boundary.zmin, boundary.xmax, m.y, m.z});
        children[2] = new Octree(Box{m.x, m.y, boundary.zmin, boundary.xmax, boundary.ymax, m.z});
        children[3] = new Octree(Box{boundary.xmin, m.y, boundary.zmin, m.x, boundary.ymax, m.z});

        children[4] = new Octree(Box{boundary.xmin, boundary.ymin, m.z, m.x, m.y, boundary.zmax});
        children[5] = new Octree(Box{m.x, boundary.ymin, m.z, boundary.xmax, m.y, boundary.zmax});
        children[6] = new Octree(Box{m.x, m.y, m.z, boundary.xmax, boundary.ymax, boundary.zmax});
        children[7] = new Octree(Box{boundary.xmin, m.y, m.z, m.x, boundary.ymax, boundary.zmax});
    }
};

int main() {
    Box boundary;
    boundary.xmin = 0; boundary.ymin = 0; boundary.zmin = 0;
    boundary.xmax = 10; boundary.ymax = 10; boundary.zmax = 10;

    Octree tree(boundary);

    tree.insert(Point(1,2,3));
    tree.insert(Point(6,5,4));

    cout << (tree.find(Point(1,2,3)) ? "Found\n" : "Not Found\n");
    cout << (tree.find(Point(9,9,9)) ? "Found\n" : "Not Found\n");

    return 0;
}


