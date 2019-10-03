#include<iostream.h>
int main()
{
int l,m;
int a[10],b[10],i,j,c[25],k;

cout<<"enter the size";
cin>>l;

for (i=0;i<l;i++)
cin>>a[i];

cout<<"enter the size";
cin>>m;
for(j=0;j<m;j++)
cin>>b[j];
i=0,k=0,j=0;
while (i<l&&j<m)
{
if (a[i]<b[j])
{
c[k]=a[i];
i++;
k++;
}
else if (b[j]<a[i])
{
c[k]=b[j];
j++;
k++;
}
}
while (i<l)
{
c[k]=a[i];
i++;
k++;
}
 while (j<m)
{
c[k]=b[j];
j++;
k++;
}
for (int z=0;z<(l+m);z++)
cout<<" "<<c[z];
return 0;
}

