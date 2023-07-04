int a=0;
int b=1;
int c=2;
int d=3;
int e=4;
int f=5;
int g=6;
int h=7;
int ti=100;

void setup(){
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);  
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);  
  pinMode(g,OUTPUT);
  pinMode(h,OUTPUT);
}
void loop(){
z(a,e);
p1();
z(b,f);
p2();
z(c,g);
p3();
z(d,h);
p4();
z(a,e);
/**p5();
z(b,f);
p6();
z(c,g);
p7();
z(d,h);
p8();*/
}
void p1(){
int t=500;
int tx=4;
int ty=2;
for(int ix=0;ix<8;ix++){
for(int x=a,y=e;x<=d;x++,y++){
digitalWrite(x,HIGH);
digitalWrite(y,HIGH);
delay(t*tx);
digitalWrite(x,LOW);
digitalWrite(y,LOW);
delay(t);
digitalWrite(x,HIGH);
digitalWrite(y,HIGH);
delay(t*ty);
digitalWrite(x,LOW);
digitalWrite(y,LOW);
delay(t);
}}
}
void p2(){
int t=300;
int tx=4;
for(int i=0;i<4;i++){
for(int x=a,y=e;x<=d;x++,y++){
digitalWrite(x,HIGH);
for(int i=0;i<8;i++){
digitalWrite(y,HIGH);
delay(t*tx);
digitalWrite(y,LOW);
delay(t);
}
digitalWrite(x,LOW);
digitalWrite(y,HIGH);
delay(t);
for(int i=0;i<8;i++){
digitalWrite(x,HIGH);
delay(t*tx);
digitalWrite(x,LOW);
delay(t);
}
digitalWrite(y,LOW);
delay(t);
}}
}
void p3(){
int t=2000;
for(int x=a,y=e;x<=d;x++,y++){
for(int X=a,Y=e;X<=d;X++,Y++){
if(x!=X){
for(int ix=0;ix<8;ix++){
digitalWrite(x,HIGH);
digitalWrite(Y,HIGH);
delay(t);
digitalWrite(x,LOW);
digitalWrite(Y,LOW);
digitalWrite(y,HIGH);
digitalWrite(X,HIGH);
delay(t);
digitalWrite(y,LOW);
digitalWrite(X,LOW);
delay(ti);
}}}}
}
void p4(){
int t=300;
int tx=3;
for(int i=0;i<8;i++){
for(int A=a;A<=d;A++){
digitalWrite(A,HIGH); 
for(int B=e;B<=h;B++){
digitalWrite(B,HIGH); 
for(int w=0;w<2;w++){
delay(t*tx);
digitalWrite(A,LOW);
delay(t);
digitalWrite(A,HIGH); 
}
delay(t*tx); 
digitalWrite(B,LOW); 
}
digitalWrite(A,LOW); 
}
delay(ti);
for(int A=e;A<=h;A++){
digitalWrite(A,HIGH); 
for(int B=a;B<=d;B++){
digitalWrite(B,HIGH);
for(int w=0;w<2;w++){
delay(t*tx);
digitalWrite(A,LOW);
delay(t);
digitalWrite(A,HIGH); 
} 
delay(t*tx);
digitalWrite(B,LOW);
}
digitalWrite(A,LOW); 
}
delay(ti);
}
}
void p5(){
int max=600;
int mini=200;
int co=10;
int x=0;
for(int ix=0;ix<4;ix++){
for(int i=max;i>=mini;i=i-co){
x++;
if(x>4){x=1;}
if(x==1){
digitalWrite(a,HIGH); 
digitalWrite(e,HIGH); 
delay(i);
digitalWrite(a,LOW);
digitalWrite(e,LOW);
delay(mini);
}
if(x==2){
digitalWrite(b,HIGH); 
digitalWrite(f,HIGH); 
delay(i);
digitalWrite(b,LOW);
digitalWrite(f,LOW);
delay(mini);
}
if(x==3){
digitalWrite(c,HIGH); 
digitalWrite(g,HIGH); 
delay(i);
digitalWrite(c,LOW);
digitalWrite(g,LOW);
delay(mini);
}
if(x==4){
digitalWrite(d,HIGH); 
digitalWrite(h,HIGH); 
delay(i);
digitalWrite(d,LOW);
digitalWrite(h,LOW);
delay(mini);
}
}
x=0;
for(int i=mini;i<=max;i=i+co){
x++;
if(x>4){x=1;}
if(x==1){
digitalWrite(a,HIGH); 
digitalWrite(e,HIGH); 
delay(i);
digitalWrite(a,LOW);
digitalWrite(e,LOW);
delay(mini);
}
if(x==2){
digitalWrite(b,HIGH); 
digitalWrite(f,HIGH); 
delay(i);
digitalWrite(b,LOW);
digitalWrite(f,LOW);
delay(mini);
}
if(x==3){
digitalWrite(c,HIGH); 
digitalWrite(g,HIGH); 
delay(i);
digitalWrite(c,LOW);
digitalWrite(g,LOW);
delay(mini);
}
if(x==4){
digitalWrite(d,HIGH); 
digitalWrite(h,HIGH); 
delay(i);
digitalWrite(d,LOW);
digitalWrite(h,LOW);
delay(mini);
}}}
}
void p6(){
int max=400;
int mini=100;
int co=20;
for(int x=a,y=e;x<=d;x++,y++){
digitalWrite(x,HIGH); 
for(int i=max;i>=mini;i=i-co){
digitalWrite(y,HIGH);
delay(i);
digitalWrite(y,LOW);
delay(mini);
}
digitalWrite(x,LOW); 
digitalWrite(y,HIGH);
delay(mini);
for(int i=max;i>=mini;i=i-co){
digitalWrite(x,HIGH);
delay(i); 
digitalWrite(x,LOW);
delay(mini);
}
digitalWrite(y,LOW);
delay(mini);
}
//2
for(int x=a,y=e;x<=d;x++,y++){
digitalWrite(x,HIGH); 
for(int i=mini;i<=max;i=i+co){
digitalWrite(y,HIGH);
delay(i);
digitalWrite(y,LOW);
delay(mini);
}
digitalWrite(x,LOW); 
digitalWrite(y,HIGH);
delay(mini);
for(int i=mini;i<=max;i=i+co){
digitalWrite(x,HIGH);
delay(i); 
digitalWrite(x,LOW);
delay(mini);
}
digitalWrite(y,LOW);
delay(mini);
}
}
void p7(){
int max=400;
int mini=100;
int co=40;
for(int x=a,y=e;x<=d;x++,y++){
for(int X=a,Y=e;X<=d;X++,Y++){
if(x!=X){
//1
digitalWrite(x,HIGH);
for(int i=max;i>=mini;i=i-co){
digitalWrite(Y,HIGH);
delay(i);
digitalWrite(Y,LOW);
delay(mini);
}
digitalWrite(x,LOW);
digitalWrite(Y,HIGH);
delay(mini);
//2
for(int i=max;i>=mini;i=i-co){
digitalWrite(x,HIGH);
delay(i);
digitalWrite(x,LOW);
delay(mini);
}
digitalWrite(Y,LOW);
digitalWrite(X,HIGH);
delay(mini);
//3
for(int i=max;i>=mini;i=i-co){
digitalWrite(y,HIGH);
delay(i);
digitalWrite(y,LOW);
delay(mini);
}
digitalWrite(X,LOW);
digitalWrite(y,HIGH);
delay(mini);
//4
for(int i=max;i>=mini;i=i-co){
digitalWrite(X,HIGH);
delay(i);
digitalWrite(X,LOW);
delay(mini);
}
digitalWrite(y,LOW);
delay(mini);
}}}
}
void p8(){
int t=3000;
for(int i=0;i<10;i++){
for(int x=a,y=e;x<=d;x++,y++){
digitalWrite(x,HIGH); 
digitalWrite(y,HIGH); 
delay(t);
digitalWrite(x,LOW);
digitalWrite(y,LOW);
delay(ti);
}}
}
void z(int x,int y){
int t=200;
int de=t*5;
delay(de);
for(int i=0;i<10;i++){
digitalWrite(x,HIGH); 
digitalWrite(y,HIGH); 
delay(t);
digitalWrite(x,LOW);
digitalWrite(y,LOW);
delay(t);
}
delay(de);
for(int x=a,y=e;x<=d;x++,y++){
digitalWrite(x,HIGH); 
digitalWrite(y,HIGH); 
delay(de);
digitalWrite(x,LOW);
digitalWrite(y,LOW);
}
delay(de);
}