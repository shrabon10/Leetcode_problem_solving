function findMedianSortedArrays(a,b){
  let arr=[...a,...b].sort((x,y)=>x-y);
  let n=arr.length;
  return n%2?arr[Math.floor(n/2)]:(arr[n/2-1]+arr[n/2])/2;
}
 
