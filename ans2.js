function missingnumber(arr){
    const N =199999999;
    let check=[];
    for(let i=0;i<N;i++){
        check[i]=false;
    }
    for(let i=0;i<arr.length;i++){
        if(arr[i]<0){
            check[arr[i]]=true;
        }
    }
    let ans=-1;
    for(let i=0;i<N;i++){
        if(check[i]==false){
            ans=i;
            break;
        }
    }
    return ans;
}

let arr=[0,-9,1,3,-4,5];
let ans=missingnumber(arr);
console.log(ans);
document.getElementById("missing").innerHTML=ans;