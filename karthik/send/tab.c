int main(int argc,char *argv[])
{
        FILE *fp1,*fp2;
        int i,c;
        char ch;
        if(argc!=3)
        {
                printf("wrong commands\n");
                return 0;
        }
        fp1=fopen(argv[1],"r");
        fp2=fopen(argv[2],"w");
        if(fp1==0)
        {
                printf("file is empty\n");
                return 0;
        }
        while((ch=fgetc(fp1))!=EOF)
        {
        if((ch!=' ')||(c==4))
        {
        if(c==4)
        {
        c=0;
        fputc('\t',fp2);
        }
        else if(c>1&&c<4)
        {
        fputc(' ',fp2);
        c=0;
        }
        if(ch!=' ')
        fputc(ch,fp2);
        c=0;
        }
        if((ch==' '))
        {
        c++;
        if(c==1)
        fputc(ch,fp2);
        }
        }
}
