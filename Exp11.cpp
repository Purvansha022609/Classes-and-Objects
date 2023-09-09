/*Name-Purvansha Gehlod
PRN-22070123088
Exp_11
shapes_vol_class*/
#include<iostream>
using namespace std;
class shapes
{
    public:
    double h;
    double wid;
    double len;
    double r;
    double s;
    cuboid()
    {
       cout<<"Enter the dimensions of cuboid :";
       cin>>h;
       cin>>wid;
       cin>>len;
    
    }

    cube()
    {
        cout<<"Enter the dimensions of cube :";
        cin>>s;
    }

    sphere()
    {
        cout<<"Enter the dimensions of sphere :";
        cin>>r;
    }

    double cuboid_volume()
    {
        double vol=h*wid*len;
        cout<<"volume of the cuboid is = "<<vol<<endl;
        return vol;
    }

    double cube_volume()
    {
        double cube_vol = s*s*s;
        cout<<"Volume of the cube is = "<<cube_vol<<endl;
    }

     double sphere_volume()
    {
        double sphere_vol = 1.33 * 3.14 * r * r * r ;
        cout<<"Volume of the sphere is = "<<sphere_vol<<endl;
    }

     double cone_volume()
    {
        double cone_vol = s*s*s;
        cout<<"Volume of the cone is = "<<cone_vol<<endl;
    }

};
 int main()
{
    shapes cuboid1;
    shapes cube1;
    shapes sphere1;

    cuboid1.cuboid();
    cube1.cube();
    sphere1.sphere();

    double vCu;
    double vC;
    double vS;

    vCu=cuboid1.cuboid_volume();
    vC=cube1.cube_volume();
    vS=sphere1.sphere_volume();

}
/*OUTPUT
Enter the dimensions of cuboid :2 2 2
Enter the dimensions of cube :2
Enter the dimensions of sphere :2
volume of the cuboid is = 8
Volume of the cube is = 8
Volume of the sphere is = 33.4096
*/