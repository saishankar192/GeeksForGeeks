struct trieNode{
    int freq;
    trieNode* child[26];

    trieNode(){
        freq = 0;
        for(int i=0;i<26;i++)
            child[i]=NULL;
    }
}

class Solution
{
    public:
    void buildtrie(string s, trieNode* root){
        trieNode *curr = root;

        for(int i=0;i<s.size();i++){
            int ele = s[i]-'a';
            if(curr->child[ele] == NULL){
                trieNode *newNode = new trieNode();
                curr->child[ele] = newNode;
            }
            curr->child[ele]->freq++;
            curr = curr->child[ele];
        }
        return;
    }

    string getPrefix(string s, trieNode* root){
        string prefix="";
        trieNode *curr = root;

        for(int i=0;i<s.size();i++){
            int ele = s[i]-'a';
            prefix += s[i];
            if(curr->child[ele]->freq == 1){
                return prefix;
            }
            else
                curr = curr->child[ele];
        }
        return prefix;
    }

    vector<string> findPrefixes(string arr[], int n)
    {
        vector<string> ans;
        trieNode *root = new trieNode();

        for(int i=0;i<n;i++)
            buildtrie(arr[i], root);
        
        for(int i=0;i<n;i++)
            ans.push_back(getPrefix(arr[i], root));

        return ans;
    }
};