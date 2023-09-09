/*Name-Purvansha Gehlod
PRN-22070123088
Exp_11
Find the volume of cube*/
#include<iostream>
using namespace std;
class cuboid
{
public:
double height=2.0;
double width=3.0;
double length=5.0;
};
int main()
{
    cuboid c1;
    double vol=c1.height*c1.width*c1.length;
    cout<<"Volume:"<<vol<<endl;

    
}
/*OUTPUT
Volume:30
*/

/*Name-Purvansha Gehlod
PRN-22070123088
Exp_11
Write a function to display output*/
#include<iostream>
using namespace std;
class cuboid{
    public:
    float l =3.0,w=5.0,h=7.0;

    float display (float a){
        cout<<"volume of cuboid ="<<a;
    }
};
int main()
{
    cuboid c1;
    float vol=c1.l*c1.w*c1.h;
    c1.display(vol);
}
/*Output
volume of cuboid =105
*/

/*Name-Purvansha Gehlod
PRN-22070123088
Exp_11
Take input from user
*/
#include<iostream>
using namespace std;
class cuboid
{
public:
float calculate(float a,float b,float c){
    float vol=a*b*c;
    return vol;
}
float display(float a){
    cout<<"Volume of cuboid="<<a;
    }
};
int main(){
    cuboid c1;
    float h,b,l;
    cout<<"enter the length,breath and height:";
    cin>>l>>b>>h;
    float vol=c1.calculate(l,b,h);
    c1.display(vol);

}
/*OUTPUT
enter the length,breath and height:5 5 5 
Volume of cuboid=125
*/

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
