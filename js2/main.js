const {performance} = require('perf_hooks');

function getMaxSubSum(a) {
    let s = 0;
    let s1 = s;
    for (let i = 0; i < a.length; i++) {
        s += a[i];
        s1 = Math.max(s1, s);
        if (s < 0) s = 0;
    }

    return s1;
}

var n = 10000;
var a = [];
for (var i = 0; i < n; i++)
    a.push(Math.pow(-1, i) * i);
//console.log(a);
var start = performance.now();
var res = 0;
for (var i = 0; i < n; i++) {
    a[0]++;
    res += getMaxSubSum(a, n);
    //console.log(res);
}
var end = performance.now();

console.log("" + ((end - start) / 1000) + " seconds");
