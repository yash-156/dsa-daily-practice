class Solution {
public:
    bool checkEqual(int freqs1[], int freqs2[]){
        for(int i=0; i<26; i++){
            if(freqs1[i]!=freqs2[i]){
                return false;
            }
        }
        return true;

    }
    bool checkInclusion(string s1, string s2) {

        if(s1.length()>s2.length()){
            return false;
        }

        // frequency calculate
        int freqs1[26]={0};

        for(int i=0;i<s1.length();i++){
            int index=s1[i]-'a';
            freqs1[index]++;
        }

        // window of size s1 and freq calculate of window

        int i=0;
        int windowSize=s1.length();
        int freqs2[26]={0};

        while(i<windowSize){

            int index=s2[i]-'a';
            freqs2[index]++;
            i++;
        }

        // first window comapre

        if(checkEqual(freqs1,freqs2)){
            return true;
        }

        // moving window

        int start=0;
        int end=windowSize;

        while(end<s2.length()){
            //remove starting elemene
            int index=s2[start]-'a';
            freqs2[index]--;

            // add element
            index=s2[end]-'a';
            freqs2[index]++;

            // compare

            if(checkEqual(freqs1,freqs2)){
                return true;
            }

            start++;
            end++;
        } 


return false;
        
    }
};