#include<stdio.h>
struct time
{
    int hr,min,sec;
};
void display(struct time diff)
{
    printf("Difference is %dhr,%dmin,%dsec",diff.hr,diff.min,diff.sec);
}
int main()
{
    struct time t1,t2,diff;
    printf("Enter the time t1(hr:min:sec) : ");
    scanf("%d:%d:%d",&t1.hr,&t1.min,&t1.sec);
    printf("Enter the time t2(hr:min:sec) : ");
    scanf("%d:%d:%d",&t2.hr,&t2.min,&t2.sec);
    if(t1.hr>t2.hr)
    {
        if(t1.min>t2.min)
        {
            if(t1.sec>=t2.sec)
            {
                diff.hr=t1.hr-t2.hr;
                diff.min=t1.min-t2.min;
                diff.sec=t1.sec-t2.sec;
            }
            else
            {
                diff.hr=t1.hr-t2.hr;
                t1.min--;
                t1.sec+=60;
                diff.min=t1.min-t2.min;
                diff.sec=t1.sec-t2.sec;
            }
        }
        else
        {
            if(t1.min<t2.min)
            {
                if(t1.sec>=t2.sec)
                {
                    t1.hr--;
                    t1.min+=60;
                    diff.hr=t1.hr-t2.hr;
                    diff.min=t1.min-t2.min;
                    diff.sec=t1.sec-t2.sec;
                }
                else
                {
                    t1.hr--;
                    t1.min+=60;
                    t1.min--;
                    t1.sec+=60;
                    diff.hr=t1.hr-t2.hr;
                    diff.min=t1.min-t2.min;
                    diff.sec=t1.sec-t2.sec;
                }
            }
            if(t1.min==t2.min)
            {
                if(t1.sec>=t2.sec)
                {
                    diff.hr=t1.hr-t2.hr;
                    diff.min=t1.min-t2.min;
                    diff.sec=t1.sec-t2.sec;
                }
                else
                {
                    t1.hr--;
                    t1.min+=60;
                    t1.min--;
                    t1.sec+=60;
                    diff.hr=t1.hr-t2.hr;
                    diff.min=t1.min-t2.min;
                    diff.sec=t1.sec-t2.sec;
                }
            }
        }
    }
    else
    {
        if(t1.hr<t2.hr)
        {
            if(t1.min>t2.min)
            {
                if(t1.sec>t2.sec)
                {
                    t2.hr--;
                    t2.min+=60;
                    t2.min--;
                    t2.sec+=60;
                    diff.hr=t2.hr-t1.hr;
                    diff.min=t2.min-t1.min;
                    diff.sec=t2.sec-t1.sec;
                }
                else
                {
                    t2.hr--;
                    t2.min+=60;
                    diff.hr=t2.hr-t1.hr;
                    diff.min=t2.min-t1.min;
                    diff.sec=t2.sec-t1.sec;
                }
            }
            else
            {
                if(t1.min<t2.min)
                {
                    if(t1.sec>t2.sec)
                    {
                        t2.min--;
                        t2.sec+=60;
                        diff.hr=t2.hr-t1.hr;
                        diff.min=t2.min-t1.min;
                        diff.sec=t2.sec-t1.sec;
                    }
                    else
                    {
                        diff.hr=t2.hr-t1.hr;
                        diff.min=t2.min-t1.min;
                        diff.sec=t2.sec-t1.sec;
                    }
                }
                if(t1.min==t2.min)
                {
                    if(t1.sec>t2.sec)
                    {
                        t2.hr--;
                        t2.min+=60;
                        t2.min--;
                        t2.sec+=60;
                        diff.hr=t2.hr-t1.hr;
                        diff.min=t2.min-t1.min;
                        diff.sec=t2.sec-t1.sec;
                    }
                    else
                    {
                        diff.hr=t2.hr-t1.hr;
                        diff.min=t2.min-t1.min;
                        diff.sec=t2.sec-t1.sec;
                    }
                }
            }
        }
        if(t1.hr==t2.hr)
        {
            if(t1.min>t2.min)
            {
                if(t1.sec>=t2.sec)
                {
                    diff.hr=t1.hr-t2.hr;
                    diff.min=t1.min-t2.min;
                    diff.sec=t1.sec-t2.sec;
                }
                else
                {
                    t1.min--;
                    t1.sec+=60;
                    diff.hr=t1.hr-t2.hr;
                    diff.min=t1.min-t2.min;
                    diff.sec=t1.sec-t2.sec;
                }
            }
            else
            {
                if(t1.min<t2.min)
                {
                    if(t1.sec>t2.sec)
                    {
                        t2.min--;
                        t2.sec+=60;
                        diff.hr=t2.hr-t1.hr;
                        diff.min=t2.min-t1.min;
                        diff.sec=t2.sec-t1.sec;
                    }
                    else
                    {
                        diff.hr=t2.hr-t1.hr;
                        diff.min=t2.min-t1.min;
                        diff.sec=t2.sec-t1.sec;
                    }
                }
                if(t1.min==t2.min)
                {
                    if(t1.sec>=t2.sec)
                    {
                        diff.hr=t1.hr-t2.hr;
                        diff.min=t1.min-t2.min;
                        diff.sec=t1.sec-t2.sec;
                    }
                    else
                    {
                        diff.hr=t2.hr-t1.hr;
                        diff.min=t2.min-t1.min;
                        diff.sec=t2.sec-t1.sec;
                    }
                }
            }
        }
    }
    display(diff);
    return 0;
}
