    //一変数入力
    int a;
    cin >> a;
    
    //二変数入力
    int a,b;
    cin >> a >> b;

    //string入力
    string a;
    cin >> a;

    //vector入力
    int n,k;
    vector<int> d;
    cin >> n;
    loop(i,0,n){
        cin >> k;
        d.push_back(k);
    }

    //二重vector入力
    int h,w,k,j;
    vector<vector<int>> d;
    vector<int> inst;
    cin >> h >> w;
    loop(i,0,h){
        loop(j,0,w){
            cin >> k;
            inst.push_back(k);
        }
        d.push_back(inst);
        inst.clear();
    }