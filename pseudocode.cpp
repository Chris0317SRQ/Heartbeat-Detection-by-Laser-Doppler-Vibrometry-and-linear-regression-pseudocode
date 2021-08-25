int time=0,ca=0,cb=0, v=0;
void setup()
{
 laser.on();
 Fre=laser.frequency();
 cb=clock.current_time();
}
int x,y //偏差率，可藉linear regression得best value
bool cnt=1, 

void loop()
{
 if (time%5==0&&time>=5)
 {
    ca=clock.current_time();
    v=5/(ca-cb);
    print(v);
    swap(ca,cb);
    
 }
 if (laser.frequency()< Fre*x) cnt=!cnt
 else if (laser.frequency()> Fre*y) cnt=!cnt;
 if(cnt==1) time++;
 delay(160)
}
