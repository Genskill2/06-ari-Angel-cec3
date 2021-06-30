string ari(string s){

  int len, ch = 0, words = 0, sent = 0, i = 0;
  len = strlen(s);
  string grade;

  for(i=0;i<len;i++){

    if(isalnum(s[i]))
      ch++;
    if(s[i]==' ')
      words++;
    if(s[i]=='.'||s[i]=='!'||s[i]=='?')
      sent++;
  }

  float ari = 4.71 * ch/words + 0.5 * words/sent - 21.43;

  int r=lround(ari);
  if(r<ari)
    r++;

  string level[] = {"Kindergarten", "First/Second Grade", "Third Grade", "Fourth Grade", "Fifth Grade", "Sixth Grade", "Seventh Grade", "Eight Grade", "Ninth Grade", "Tenth Grade", "Eleventh Grade", "Twelfth Grade", "College student", "Professor"};

  for(i=1; i<=14; i++){

    if(r==i)
      grade = level[i-1];	

    else if(r>14)
      grade = level[13];
  }
  return grade;
}

